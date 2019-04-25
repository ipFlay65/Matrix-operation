#include <iostream>
#include "mMatrix.h"

//----------------------------------------------------------------------------------------
//Default constructor, it create empty matrix.
//----------------------------------------------------------------------------------------
mMatrix::mMatrix(){
	rSize = 1;
	cSize = 1;
	setSize(rSize);
	mEmpty();
}

//----------------------------------------------------------------------------------------
//This constructor crate squer matrix of size x size dimensions.
//----------------------------------------------------------------------------------------
mMatrix::mMatrix(int size){
	setSize(size);
}

//----------------------------------------------------------------------------------------
//This constructor crate matrix of dimensions rows x columns.
//----------------------------------------------------------------------------------------
mMatrix::mMatrix(int rows, int columns) {
	rSize = rows;
	cSize = columns;
	matrix = new float*[rSize];
	for (int i = 0; i < cSize; i++) {
		matrix[i] = new float[cSize];
	}
	mEmpty();
}

mMatrix::~mMatrix(){
}


//****************************************************************************************
//Functions for crating and filling matries
//****************************************************************************************


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
}

//----------------------------------------------------------------------------------------
//Function for crating empty matrix
//----------------------------------------------------------------------------------------
void mMatrix::mEmpty() {
	for (int i = 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			matrix[i][j] = 0;
		}
	}
}


//----------------------------------------------------------------------------------------
//Function fill matrix with any nubers
//----------------------------------------------------------------------------------------
void mMatrix::mFill(float fillNum) {
	for (int i = 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			matrix[i][j] =fillNum;
		}
	}
}

//----------------------------------------------------------------------------------------
//Function for setSize
//----------------------------------------------------------------------------------------
void mMatrix::setSize(int size) {
	if (size > 0) {
		rSize = size;
		cSize = size;
		matrix = new float*[rSize];
		for (int i = 0; i < cSize; i++) {
			matrix[i] = new float[cSize];
		}
		mEmpty();
	}
	else {
		std::cout << "Error: Size is negative or zero. Insrte positive number." << std::endl;
	}
	
}

//----------------------------------------------------------------------------------------
//Function for setSize
//----------------------------------------------------------------------------------------
void mMatrix::setSize(int rows, int columns) {
	if (rows > 0 && columns > 0) {
		rSize = rows;
		cSize = columns;
		matrix = new float*[rSize];
		for (int i = 0; i < cSize; i++) {
			matrix[i] = new float[cSize];
		}
		mEmpty();
	}
	else {
		std::cout << "Error: Size is negative or zero. Insrte positive number." << std::endl;
	}

}

//****************************************************************************************
////Functions for operating with matrices
//****************************************************************************************

//----------------------------------------------------------------------------------------
//Function for adding two matices
//----------------------------------------------------------------------------------------
mMatrix mMatrix::add(mMatrix addMatrix) {
	mMatrix temp(rSize, cSize);
	for (int i = 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			temp.matrix[i][j] = matrix[i][j] + addMatrix.matrix[i][j];
		}
	}
	return (temp);
}

//----------------------------------------------------------------------------------------
//Function for adding two matices with oprator +
//----------------------------------------------------------------------------------------
mMatrix mMatrix::operator+(mMatrix addMatrix) {
	return add(addMatrix);
}

//----------------------------------------------------------------------------------------
//Function for substracting two matices
//----------------------------------------------------------------------------------------
mMatrix mMatrix::sub(mMatrix subMatrix) {
	mMatrix temp(rSize, cSize);
	for (int i = 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			temp.matrix[i][j] = matrix[i][j] - subMatrix.matrix[i][j];
		}
	}
	return (temp);
}

//----------------------------------------------------------------------------------------
//Function for substracting two matices with oprator -
//----------------------------------------------------------------------------------------
mMatrix mMatrix::operator-(mMatrix subMatrix) {
	return sub(subMatrix);
}