#include <iostream>

void datatypes() {
	// Primitive datatypes


	// An integer is a variable that is typically 4 bytes large.
	// It is based on the compiler.

	int age = 18; // -2billion to 2billion signed

	// Why is it -2 billion to 2 billion?
	// These values are directly tied to the variables
	// An int is 4 byte,1 byte = 8 bits; 4*8 = 32 bits of data
	// signed means negative or positive, one of those 32 bits
	// has to be for sign meaning only 31 bits for actual number
	// bits can only be zero or one. 2 ^ 31 = 2,147,483,648 - 1 for 0
	std::cout << age << std::endl;

	// if you wanted to not have the one bit reserved
	// for sign we can declare an unsigned int

	// Gives us double the size of an int
	unsigned int age2 = 24;


	// unsigned can be added infront of any of these int
	// datatypes to double storage capacity.
	// char - 1 byte
	// short - 2 bytes
	// int - 4 bytes
	// long - 4 bytes
	// long long - 8 bytes


	std::cout << age2 << std::endl;


	// common decimal types
	// float have to append f/F at the end as such, 4 bytes large
	// float var = 18.0f vice versa float var = 14.0F
	// double - 8 bytes large

	// bool - stands for boolean, can be true or false
	// 1 = true, 0 = false
	// 1 byte of memory
	// bool is one bit however we cannot bits we can access
	// 1 byte memory locations
	// best usage of this byte would be to store 1 bool in
	// each of the remaining bits, hence utilizing all memory.
	bool condition = true;
	bool falseCondition = false;

	// To check the size of the data type use the operator
	// sizeof(int/long/bool/string/short etc) it doesn't
	// need paranthesis
	std::cout << "Size of bool: " << sizeof(bool) << std::endl;

	// primitive datatypes can be converted into pointers
	// and references.

	std::cin.get();
}