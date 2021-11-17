#pragma once
#include<string>
#include<iostream>
#include"LevelRadioButton.h"

public ref class SudokuGenerator
{
private:
	const int size = 9;
	std::string* matrix;
public:
	SudokuGenerator();
	~SudokuGenerator();
	void ShowMatrix();
	void Transposing();
	void SwapRow();
	void SwapColumn();
	void SwapRowsArea();
	void SwapColumnsArea();
	char GetValue(int, int);
	void SetValue(int, int);
	int GetRand(); //Returns random value between 0 .. 2 including 0,2;
	void Generate();
	std::string GetRow(int);
};

