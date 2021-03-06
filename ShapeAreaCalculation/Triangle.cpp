//
//  Triangle.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Triangle.hpp"

#include <iostream>
#include <math.h>

using namespace std;

Triangle::Triangle() {
	
}

void Triangle::getInput() {
	cout << "Enter the height :" << endl;
	string line;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	setHeight(::atof(line.c_str()));
	
	cout << "Enter the base :" << endl;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	setBase(::atof(line.c_str()));
}

void Triangle::calculate() {
	area = 0.5 * base * height;
}

void Triangle::setBase(double rValue) {
	if(rValue >= 0)
		base = rValue;
}

void Triangle::setHeight(double rValue) {
	if(rValue >= 0)
		height = rValue;
}
