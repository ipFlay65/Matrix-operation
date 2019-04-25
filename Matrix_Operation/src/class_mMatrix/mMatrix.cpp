#include <iostream>
#include "mMatrix.h"



mMatrix::mMatrix()
{
	rSize = 1;
	cSize = 1;
	matrix = new double*[rSize];
	for (int i = 0; i < cSize; i++) {
		matrix[i] = new double[cSize];
	}
	matrix[rSize-1][cSize-1] = 0;
}


mMatrix::~mMatrix()
{
}

//----------------------------------------------------------------------------------------
//My first function in this class. You shouldn't delite it.
//----------------------------------------------------------------------------------------
void mMatrix::tellMeASicret() {
	std::cout << "Just be creative!!" << std::endl;
	std::cin.get();
}

//----------------------------------------------------------------------------------------
//Function for showing the matrix
//----------------------------------------------------------------------------------------
void mMatrix::mShow() {
	for (int i = 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			std::cout << matrix[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	std::cin.get();
}