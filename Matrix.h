#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
	int row = 0;
	int column = 0;
	int** array = nullptr;
public:
	Matrix(int row, int column);
	Matrix(const Matrix& obj);
	Matrix& operator =(const Matrix& obj);
	Matrix(Matrix&& obj);
	Matrix& operator=(Matrix&& obj);
	virtual~Matrix();


};

#endif
