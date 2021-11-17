#pragma once
#include "SudokuGenerator.h"
#include<iostream>
#include<ctime>




SudokuGenerator::SudokuGenerator()
{
	matrix = new std::string[]{ "123456789",
							 "456789123",
							 "789123456",
							 "234567891",
							 "567891234",
							 "891234567",
							 "345678912",
							 "678912345",
							 "912345678" };
}

SudokuGenerator::~SudokuGenerator()
{
	delete[] matrix;
}


void SudokuGenerator::Transposing()
{
	std::string mtTrans[9];
	for (int i = 0; i < 9; i++)
	{
		char arr[9 + 1];
		strcpy_s(arr, matrix[i].c_str());
		for (int j = 0; j < 9; j++)
		{
			mtTrans[j] += arr[j];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		matrix[i] = mtTrans[i];
	}
}

void SudokuGenerator::SwapRow()
{
	//ShowMatrix();
	//std::cout << std::endl;
	const int shift_modifier = 3;
	int first_row = GetRand();
	int second_row;
	do
	{
		second_row = GetRand();
	} while (second_row == first_row);
	int section = GetRand();
	std::string temp = matrix[first_row + section * shift_modifier];
	matrix[first_row + section * shift_modifier] = matrix[second_row + section * shift_modifier];
	matrix[second_row + section * shift_modifier] = temp;
}

void SudokuGenerator::SwapRowsArea()
{
	int first_area = GetRand();
	const int shift_modifier = 3;
	int second_area;
	std::string temp;
	do
	{
		second_area = GetRand();

	} while (second_area == first_area);
	//std::cout << "First area = " << first_area << "\nSecondArea = " << second_area << std::endl;
	for (int i = 0; i < 3; i++)
	{
		temp = matrix[i + first_area * shift_modifier];
		matrix[i + first_area * shift_modifier] = matrix[i + second_area * shift_modifier];
		matrix[i + second_area * shift_modifier] = temp;
	}
}

void SudokuGenerator::SwapColumn()
{
	Transposing();
	SwapRow();
	Transposing();
}

void SudokuGenerator::SwapColumnsArea()
{
	Transposing();
	SwapRowsArea();
	Transposing();

}

char SudokuGenerator::GetValue(int i, int j)
{
	return (char)matrix[i][j];
}

void SudokuGenerator::SetValue(int i, int j)
{
	matrix[i][j] = '0';
}

void SudokuGenerator::ShowMatrix()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << matrix[i] << std::endl;
	}
}

int SudokuGenerator::GetRand()
{
	return rand() % 3;
}

void SudokuGenerator::Generate()
{
	for (int i = 0; i < 10000; i++)
	{
		switch (rand() % 5)
		{
		case 0: this->SwapColumn();
			break;
		case 1: this->SwapRow();
			break;
		case 2: this->SwapRowsArea();
			break;
		case 3: this->SwapColumn();
			break;
		case 4: this->SwapColumnsArea();
			break;
		}
	}

	for (int i = 0; i < int(LevelRadioButton::GetCommonLevel())+rand()%6; i++)
	{
		int a = rand() % 9, b = rand() % 9;

		if (this->GetValue(a, b) == '0')
		{
			i--;
		}
		else (this->SetValue(a, b));
	}


}
std::string SudokuGenerator::GetRow(int row)
{
	return matrix[row];
}