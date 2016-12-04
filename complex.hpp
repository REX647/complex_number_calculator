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

#pragma once
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
#include <cmath>

using namespace std;

class complex
{
private:
	double real;
	double imaginary;
public:
	complex();
	complex(double, double);
	void set_real(double);
	void set_imaginary(double);
	double get_real();
	double get_imaginary();
	void display();
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);
};

#endif
