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
#include "complex.hpp"

using namespace std;

complex::complex()
{
	real = 0;
	imaginary = 0;
}

complex::complex(double r, double i)
{
	real = r;
	imaginary = i;
}

void complex::set_real(double r)
{
	real = r;
}

void complex::set_imaginary(double i)
{
	imaginary = i;
}

double complex::get_real()
{
	return real;
}

double complex::get_imaginary()
{
	return imaginary;
}

void complex::display()
{
	double precision = 0.000000001; // For degree of accuracy (or when to consider an infinitesimally small value to be zero).
	if ((imaginary < 0) && (!((real < precision) && (real > (-precision)))))
	{
		cout << real << " - " << ((imaginary)*(-1)) << "i" << endl;
	}
	else if ((imaginary > 0) && (!((real < precision) && (real > (-precision)))))
	{
		cout << real << " + " << imaginary << "i" << endl;
	}
	else if (((imaginary < precision) && (imaginary > (-precision))) && ((real < precision) && (real > (-precision))))
	{
		cout << "0" << endl;
	}
	else if ((imaginary < precision) && (imaginary > (-precision)))
	{
		cout << real << endl;
	}
	else if ((real < precision) && (real > (-precision)))
	{
		cout << imaginary << "i" << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}
}

complex complex::operator+(complex other)
{
	complex result;

	result.set_real(real + other.get_real());
	result.set_imaginary(imaginary + other.get_imaginary());

	return result;
}

complex complex::operator-(complex other)
{
	complex result;

	result.set_real(real - other.get_real());
	result.set_imaginary(imaginary - other.get_imaginary());

	return result;
}

complex complex::operator*(complex other)
{
	complex result;

	result.set_real(((real) * (other.get_real())) - ((imaginary) * (other.get_imaginary())));
	result.set_imaginary(((real) * (other.get_imaginary())) + ((imaginary) * (other.get_real())));

	return result;
}

complex complex::operator/(complex other)
{
	complex result;
	double denominator;

	denominator = (((other.get_real()) * (other.get_real())) + ((other.get_imaginary()) * (other.get_imaginary())));
	result.set_real((((real) * (other.get_real())) + ((imaginary) * (other.get_imaginary())))/(denominator));
	result.set_imaginary((((imaginary) * (other.get_real())) - ((real) * (other.get_imaginary())))/(denominator));

	return result;
}
