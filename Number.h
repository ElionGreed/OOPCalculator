#pragma once
#include <string>

// Making a radix enum type just for readability, radix unique numbers which include 0-9
typedef enum {
	DEC = 10,
	OCT = 8,
	HEX = 16,
	BIN = 2
} radix;

class Number
{
private:
	long int number;
	/*
		Delete whatever may previously have	
		been stored at the address before we display a different mode.
	*/
	mutable char* numberBuffer;
	radix mode;

public:
	Number();
	Number(long int);
	Number(long int, radix);
	Number(std::string, radix);
	Number(System::String^, radix);
	void setMode(radix);
	radix getMode() const;
	long int getNumber() const;
	void setValue(long int);
	std::string getValue() const;
	~Number();
};
