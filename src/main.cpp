#include <iostream>

#include "project-lib.h"

int main(int argc, char** argv) {
	ProjectLib project;

	int returnVal = project.someMethod(10);

	std::cout << returnVal << std::endl;

	return 0;
}
