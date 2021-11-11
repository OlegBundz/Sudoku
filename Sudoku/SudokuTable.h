#pragma once
ref class SudokuTable: public System::Windows::Forms::Button
{
	char value;
	int xPosition, yPosition;
	static cli::array<int^, 1> ^ lastUsedButton = gcnew cli::array<int^, 1>(2);
	static void SetLastUsedButton(int,int);
public:
	void SetPosition(int, int);
};