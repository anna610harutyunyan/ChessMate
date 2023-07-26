#include "Matrix.h"

Matrix::Matrix(int row, int column)
{
	array = new int* [row];
	for (int i = 0; i < row; ++i)
	{
		array[i] = new int[column];
		for (int j = 0; j < column; ++j)
		{
			array[i][j] = ' ';
		}
	}
}
Matrix::Matrix(const Matrix& obj):row(obj.row),column(obj.column)
{
	array = new int* [row];
	for (int i = 0; i < row; ++i)
	{
		array[i] = new int[column];
		for (int j = 0; j < column; ++j)
		{
			array[i][j] = obj.array[i][j];
		}
	}
}
Matrix& Matrix:: operator= (const Matrix& obj)
{
	if (this != &obj)
	{
		this->row = obj.row;
		this->column = obj.column;
		for (int i = 0; i < row; ++i)
		{
			delete this->array[i];
		}
		delete[] this->array;
		array = new int* [row];
		for (int i = 0; i < row; ++i)
		{
			array[i] = new int[column];
			for (int j = 0; j < column; ++j)
			{
				array[i][j] = obj.array[i][j];
			}
		}
	}
	return *this;

}
Matrix::Matrix(Matrix&& obj)
{
	row = obj.row;
	column = obj.column;
	array = obj.array;
	obj.array = nullptr;
}
Matrix& Matrix:: operator=(Matrix&& obj)
{
	if (this != &obj)
	{
		row = obj.row;
		column = obj.column;
		for (int i = 0; i < row; ++i)
		{
			delete this->array[i];
		}
		delete[] this->array;
		array = obj.array;
		obj.array = nullptr;
	}
	return *this;
}
Matrix:: ~Matrix()
{
	for (int i = 0; i < row; ++i)
	{
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;
}