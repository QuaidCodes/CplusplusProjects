#include <iostream>

void pointers() {

	std::string name = "Quaid Tahir";
	// void* ptr = nullptr; // Introduced in C++ 11

	// A pointer is a variable that points to a location in memory.
	// Pointers are also stored in memory that is why we can have a
	// pointer point to a pointer.
	// 
	// this string pointer points to memory loation of name
	std::string* ptr = &name;

	std::cout << *ptr << std::endl;

	// Derefrencing - add the asterisk in front of the pointer
	// derefrencing is used to access the value inside the memory
	// locaiton of the pointer. 
	*ptr = "Not Quaid Tahir.";

	std::cout << *ptr << std::endl;

	// Pointers can also point to memory block locations
	// new keyword makes this array heap allocation so we
	// deelte it at the end to clear memory.
	char* buffer = new char[8];
	memset(buffer, 0, 8); // Assigns 0 to 8 bytes of memory
	// of buffer array.

// deleting and freeing the block of memory used by buffer
// however this program is small and terminated here
// automatically clearing the memory, therefore no need.
	delete[] buffer;
	std::cin.get();
}
