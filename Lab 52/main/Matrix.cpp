#include "Matrix.h"

Matrix::Matrix(int rSize, int cSize)
{
	rowSize = rSize;
	colSize = cSize;
	ptr = new int* [rowSize];
	for (int i = 0; i < rowSize; i++) {
		ptr[i] = new int[colSize];
	}
}

Matrix::~Matrix() {}

void Matrix::setup() 
{
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cin >> ptr[i][j];
		}
	}
}

void Matrix::add(const Matrix& second, Matrix& result) const
{
	if ((this->colSize == second.colSize) && (this->rowSize == second.rowSize)) {
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < colSize; j++) {
				result.ptr[i][j] = second.ptr[i][j] + ptr[i][j];
			}
		}
	}
}

void Matrix::subtract(const Matrix& second, Matrix& result) const
{
	if ((this->colSize == second.colSize) && (this->rowSize == second.rowSize)) {
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < colSize; j++) {
				result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
			}
		}
	}
}

void Matrix::multiply(const Matrix& second, Matrix& result) const
{
	if (colSize == second.rowSize) {
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < second.colSize; j++) {
				int mul = 0;
				for (int z = 0; z < colSize; z++) {
					mul += ptr[i][z] * second.ptr[z][j];
				}
				result.ptr[i][j] = mul;
			}
		}
	}
}

void Matrix::print() const
{
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << ptr[i][j] << ' ';
		}
		cout << endl;
	}
}