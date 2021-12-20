#include <iostream>

// We will use the "C" calling convension
extern "C" int SomeFunction();

int main()
{
	std::cout << "The result is: " << SomeFunction() << std::endl;
	return 0;
}