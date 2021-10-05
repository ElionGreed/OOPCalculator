#include "Number.h"

#include <msclr/marshal_cppstd.h>

Number::Number()
{
	this->number = 0;
	this->mode = DEC;
}

Number::Number(long int number)
{
	this->number = number;
	this->mode = DEC;
}

// Alternate constructor in case you want to set a radix beforehand
Number::Number(long int number, radix mode)
{
	this->number = number;
	this->mode = mode;
}

Number::Number(std::string number, radix mode)
{
	this->number = strtol(number.c_str(), NULL, mode);
	this->mode = mode;
}

// Made to convert System::String into input for Number constructor
Number::Number(System::String^ str, radix mode)
{
	// Convert from String^ to std::string, String to long int conversion 
	System::Text::ASCIIEncoding asciiEncoding;
	std::string stringValue = msclr::interop::marshal_as<std::string>(str);
	this->number = strtol(stringValue.c_str(), NULL, mode);
	this->mode = mode;
}

// Deletes the buffer before destroying the class.
Number::~Number()
{
	delete [] this->numberBuffer;
}

// This function accepts an enum, so be it's been passed a proper value (DEC/HEX/OCT/BIN)
void Number::setMode(radix mode)
{
	this->mode = mode;
}

// Enums are numbers so this will display the actual mathematical radix
radix Number::getMode() const
{
	return this->mode;
}

long int Number::getNumber() const
{
	return this->number;
}

// Changes the value in your calculator here
void Number::setValue(long int number)
{
	this->number = number;
}

// Display the number in which you've selected radix 
std::string Number::getValue() const
{
	if (this->mode == DEC) {
		this->numberBuffer = new char[50];
		_itoa_s(this->number, this->numberBuffer, 50, DEC);
		return std::string(this->numberBuffer);
	}

	std::string convertedValue;
	const unsigned char digits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	long int num = this->number;
	do {
		unsigned short digit = num % this->mode;
		convertedValue.push_back(digits[digit]);
		num /= this->mode;
	} while (num > 0);

	std::reverse(convertedValue.begin(), convertedValue.end());
	return convertedValue;
};