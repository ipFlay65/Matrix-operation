#include <iostream>
#include "class_mMatrix\mMatrix.h"
#include "class_log\log.h"
#define SIZE 4;

int main() {

	mMatrix *matrika;
	matrika = new mMatrix[4];
	mMatrix tone;

	for (int i = 0; i < 4; i++) {
		matrika[i].setSize(-4,4);
		matrika[i].mFill(i);
	}

	matrika[0] = matrika[2] - matrika[3] + matrika[3];
	matrika[0].mShow();

	delete []matrika;
	std::cin.get();
	return 0;
}

