/*
MIT License

Copyright (c) 2016 Ethan Och

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 *   Version 1.0
 *   Copyright 2016 (C) Ethan Och
 *   All rights reserved.
 *
 *   You (the user) are permitted to distribute and edit this source code in any
 *   way you see fit, but recognition should be given to the author (Ethan Och)
 *   for the original work.
 *
 *   Created on 12-03-2016 at 20:42
 *
 *   Bug reports should be directed to 'ochxx013@umn.edu'
 *
 */

#include <iostream>
#include <cmath>
#include <string>
#include "complex.hpp"

using namespace std;

int main()
{
	cout << " CCCCCC    OOOOOO   MM     MM  PPPPPP   LLLL      EEEEEEE  XX     XX" << endl;
	cout << "CCCCCCCC  OOOOOOOO  MMM   MMM  PPPPPPP  LLLL      EEEEEEE  XXX   XXX" << endl;
	cout << "CCC  CCC  OOO  OOO  MMMM MMMM  PPP  PP  LLLL      EEE       XXX XXX" << endl;
	cout << "CCC       OOO  OOO  MM MMM MM  PPPPPPP  LLLL      EEEEEE     XXXXX" << endl;
	cout << "CCC       OOO  OOO  MM  M  MM  PPPPPP   LLLL      EEEEEE      XXX" << endl;
	cout << "CCC       OOO  OOO  MM     MM  PPP      LLLL      EEE        XXXXX" << endl;
	cout << "CCC  CCC  OOO  OOO  MM     MM  PPP      LLLL      EEE       XXX XXX" << endl;
	cout << "CCCCCCCC  OOOOOOOO  MM     MM  PPP      LLLLLLLL  EEEEEEE  XXX   XXX" << endl;
	cout << " CCCCCC    OOOOOO   MM     MM  PPP      LLLLLLLL  EEEEEEE  XX     XX" << endl;
	cout << endl;
	cout << "         N  U  M  B  E  R      C  A  L  C  U  L  A  T  O  R" << endl << endl;

	// Yay, a fun title...

	char cont = 'y';
	while ((cont == 'y') || (cont == 'Y'))
	{
		cout << "====================================================================" << endl;
		cout << endl;
		double r1, i1;
		cout << "Declare your first complex number." << endl;
		cout << "Write it in the form 'a + bi'," << endl;
		cout << "with a number for 'a' and a number" << endl;
		cout << "for 'b', with a space separating them." << endl;
		cout << "e.g. '2.65 -7.225' means '2.65 - 7.225i'" << endl;
		cout << "e.g. '-0.23 11.84' means '-0.23 + 11.84i'" << endl;
		while (true)
		{
			if (cin >> r1)
			{
				if (cin >> i1)
				{
					break;
				}
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;
					cout << "Invalid entry. Please type two valid" << endl;
					cout << "numbers separated by a space." << endl;
				}
			}
			else
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << endl;
				cout << "Invalid entry. Please type two valid" << endl;
				cout << "numbers separated by a space." << endl;
			}
		}
		complex first = complex(r1, i1);

		cout << endl;
		double r2, i2;
		cout << "Declare your second complex number." << endl;
		cout << "Write it in the form 'a + bi'," << endl;
		cout << "with a number for 'a' and a number" << endl;
		cout << "for 'b', with a space separating them." << endl;
		cout << "e.g. '2.65 -7.225' means '2.65 - 7.225i'" << endl;
		cout << "e.g. '-0.23 11.84' means '-0.23 + 11.84i'" << endl;
		while (true)
		{
			if (cin >> r2)
			{
				if (cin >> i2)
				{
					break;
				}
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;
					cout << "Invalid entry. Please type two valid" << endl;
					cout << "numbers separated by a space." << endl;
				}
			}
			else
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << endl;
				cout << "Invalid entry. Please type two valid" << endl;
				cout << "numbers separated by a space." << endl;
			}
		}
		complex second = complex(r2, i2);

		char entry = '0';
		while (true)
		{
			cout << endl;
			cout << "Do you want to..." << endl;
			cout << "1)  ADD" << endl;
			cout << "2)  SUBTRACT" << endl;
			cout << "3)  MULTIPLY" << endl;
			cout << "4)  DIVIDE" << endl;
			cin >> entry;
			cout << endl;

			if ((entry == '1') || (entry == '2') || (entry == '3') || (entry == '4')
				|| (entry == 'a') || (entry == 's') || (entry == 'm') || (entry == 'd')
				|| (entry == 'A') || (entry == 'S') || (entry == 'M') || (entry == 'D')
				|| (entry == '+') || (entry == '-') || (entry == '*') || (entry == '/'))
			{
				break;
			}

			cout << "Invalid entry. Please try again." << endl;
			entry = '0';
		}

		complex answer = complex();
		if ((entry == '1') || (entry == 'a') || (entry == 'A') || (entry == '+'))
		{
			answer = first + second;
		}
		else if ((entry == '2') || (entry == 's') || (entry == 'S') || (entry == '-'))
		{
			answer = first - second;
		}
		else if ((entry == '3') || (entry == 'm') || (entry == 'M') || (entry == '*'))
		{
			answer = first * second;
		}
		else
		{
			answer = first / second;
		}

		cout << "The answer is:" << endl;
		answer.display();

		cont = '0';
		while (true)
		{
			cout << endl;
			cout << "Do you want to perform another calculation?" << endl;
			cout << "(Y)ES or (N)O" << endl;
			cin >> cont;
			cout << endl;

			if ((cont == 'Y') || (cont == 'y') || (cont == 'N') || (cont == 'n'))
			{
				break;
			}

			cout << "Invalid entry. Please try again." << endl;
			cont = '0';
		}
	}

	return 0;
}
