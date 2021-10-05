#pragma once

#include <iostream>
#include <cmath> 
#include <bitset>
#include "Calculator.h"
#include "Number.h"

#ifndef CALCULATE_H
#define CALCULATE_H

using namespace std;

class Calculate
{

private:
	Number NumOne, NumTwo;
	radix mode;

public:

	Calculate()
	{
		this->mode = DEC;
	}

	Calculate(Number* firstNum, Number* secNum, radix mode)
	{
		NumOne = *firstNum;
		NumTwo = *secNum;
		this->mode = mode;
	}

	void setMode(radix rad)
	{
		this->mode = rad;
	}

	// Adds the two numbers together
	Number* CalculateAdditions()
	{
		long int result = NumOne.getNumber() + NumTwo.getNumber();
		return new Number(result, mode);
	}

	// Multiples the two numbers
	Number* CalculateMulti()
	{
		long int result = NumOne.getNumber() * NumTwo.getNumber();
		return new Number(result, mode);
	}

	// Subtract two of the numbers
	Number* CalculateSubtraction()
	{
		long int result = NumOne.getNumber() - NumTwo.getNumber();
		return new Number(result, mode);
	}

	// Divide the two numbers
	Number* CalculateDivision()
	{
		long int result = NumOne.getNumber() | NumTwo.getNumber();
		return new Number(result, mode);
	}

	Number* CalculateAND()
	{
		std::string first = NumOne.getValue(), second = NumTwo.getValue();
		std::string result;
		std::cout << NumOne.getValue();
		int length = first.length();
		for (int i = 0; i < length; i++) {
			if (first[i] == second[i])
			{
				result.push_back(first[i]);
			}
			else
			{
				result.push_back('0');
			}
		}
		return new Number(result, mode);
	}

	Number* CalculateOR()
	{
		std::string first = NumOne.getValue(), second = NumTwo.getValue();
		std::string result;
		int length = first.length();
		for (int i = 0; i < length; i++) {
			if (first[i] == '1' || second[i] == '1')
			{
				result.push_back('1');
			}
			else
			{
				result.push_back('0');
			}
		}
		return new Number(result, mode);
	}

	Number* CalculateNOT()
	{
		std::string first = NumOne.getValue();
		std::string result;
		int length = first.length();
		for (int i = 0; i < length; i++) {
			if (first[i] == '1')
			{
				result.push_back('0');
			}
			else
			{
				result.push_back('1');
			}
		}
		return new Number(result, mode);
	}

	Number* CalculateXOR()
	{
		std::string first = NumOne.getValue(), second = NumTwo.getValue();
		std::string result;
		int length = first.length();
		for (int i = 0; i < length; i++) {
			if (first[i] == second[i])
			{
				result.push_back('0');
			}
			else
			{
				result.push_back('1');
			}
		}
		return new Number(result, mode);
	}

	Number* CalculateMOD()
	{
		long int result = NumOne.getNumber() % NumTwo.getNumber();
		return new Number(result, mode);
	}
};
#endif
