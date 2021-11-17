#pragma once

ref class SudokuTable: public System::Windows::Forms::Button
{
	bool isLocked;
	System::Boolean^ isLocked2;
	char value;
	int xPosition, yPosition;
	static cli::array<int^, 1> ^ lastUsedButton = gcnew cli::array<int^, 1>(2);
	
	
public:
	static void SetLastUsedButton(int, int);
	void SetPosition(int, int);
	int GetPositionX();
	int GetPositionY();
	void SetText(System::String^);
	void SetLocked(bool);
	bool GetLocked();
	System::Boolean^ GetLocked2();
	void SetLocked2(System::Boolean^);
	

	
};