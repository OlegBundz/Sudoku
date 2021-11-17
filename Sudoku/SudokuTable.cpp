#include "SudokuTable.h"

void SudokuTable::SetPosition(int x, int y)
{
	this->xPosition = x;
	this->yPosition = y;
}

int SudokuTable::GetPositionX()
{
	return xPosition;
}

int SudokuTable::GetPositionY()
{
	return yPosition;
}

void SudokuTable::SetLastUsedButton(int x, int y)
{
	lastUsedButton[0] = x;
	lastUsedButton[1] = y;
}

void SudokuTable::SetText(System::String^ str)
{
	this->Text = str;
}

void SudokuTable::SetLocked(bool x)
{
	this->isLocked = x;
}

bool SudokuTable::GetLocked()
{
	return isLocked;
}

System::Boolean^ SudokuTable::GetLocked2()
{
	return isLocked2;
}
void SudokuTable::SetLocked2(System::Boolean^ value)
{
	isLocked2 = value;
}