#include "SudokuTable.h"

void SudokuTable::SetPosition(int x, int y)
{
	this->xPosition = x;
	this->yPosition = y;
}

void SudokuTable::SetLastUsedButton(int x, int y)
{
	lastUsedButton[0] = x;
	lastUsedButton[1] = y;
}