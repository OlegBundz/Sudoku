#pragma once
ref class SudokuTable: public System::Windows::Forms::Button
{
	char value;
	int xPosition, yPosition;
public:
	void SetPosition(int, int);
};