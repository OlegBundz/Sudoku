#include "Sudoku.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Sudoku::Sudoku game;
	Application::Run(%game);
	return 0;
}

void Sudoku::Sudoku::CreateTable()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			sudokuTable[i, j] = gcnew SudokuTable();
			sudokuTable[i, j]->Size = System::Drawing::Size(45, 45);
			sudokuTable[i, j]->Location = System::Drawing::Point(i * 45, j * 45);
			sudokuTable[i, j]->SetPosition(i, j);
			sudokuTable[i, j]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			panel1->Controls->Add(sudokuTable[i, j]);

		}
	}
}
