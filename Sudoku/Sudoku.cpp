#include<ctime>
#include "Sudoku.h"
#include "SudokuGenerator.h"


using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Sudoku::Sudoku game;
	srand(time(0));
	//SudokuGenerator sGenerator;
	Application::Run(%game);
	return 0;
}

void Sudoku::Sudoku::CreateTable()
{
	bool isColored = true;	
	int counterX = 0;
	int counterY = 0;  //For painting buttons

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			
			sudokuTable[i, j] = gcnew SudokuTable();
			sudokuTable[i, j]->Size = System::Drawing::Size(45, 45);
			sudokuTable[i, j]->Location = System::Drawing::Point(i * 45, j * 45);
			sudokuTable[i, j]->SetPosition(i,j);
			sudokuTable[i, j]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			sudokuTable[i, j]->Click += gcnew System::EventHandler(this, &Sudoku::SudokuTableClick);
			sudokuTable[i, j]->KeyPress+=  gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sudoku::OnKeyDown);	


			if(isColored)
			sudokuTable[i, j]->BackColor = System::Drawing::SystemColors::ScrollBar;
			counterX++;
			if (counterX > 2)
			{
				counterX = 0;
				isColored = !isColored;
			}
			panel1->Controls->Add(sudokuTable[i, j]);
			
		}
		counterY++;
		if (counterY > 2)
			counterY = 0;
		else isColored = !isColored;
	}


}

void Sudoku::Sudoku::CreateInputButtons()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{	
			inputBattons[i, j] = gcnew InputButton();
			inputBattons[i, j]->Size = System::Drawing::Size(45, 45);
			inputBattons[i, j]->Location = System::Drawing::Point(i * 45, j * 45);
			//inputBattons[i, j]->SetPosition(i, j);
			inputBattons[i, j]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			panel2->Controls->Add(inputBattons[i, j]);
		}
	}
}

void Sudoku::Sudoku::CreateRadioButtons()
{
	for (int i = 0; i < 3; i++)
	{
		levelButtons[i] = gcnew LevelRadioButton();
		//levelButtons[i]->SetCommonLevel(GameLevel->Easy);
		levelButtons[i]->AutoSize = true;
		levelButtons[i]->Location = System::Drawing::Point(20,20+i*30);
		levelButtons[i]->Click += gcnew System::EventHandler(this, &Sudoku::levelRadioButton);
		levelGroupBox->Controls->Add(levelButtons[i]);
	}
	levelButtons[0]->Text = L"Easy";
	levelButtons[0]->level = Easy;
	levelButtons[1]->Text = L"Medium";
	levelButtons[1]->level = Medium;
	levelButtons[2]->Text = L"Hard";
	levelButtons[2]->level = Hard;
}

void Sudoku::Sudoku::ToDefault()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			sudokuTable[i, j]->Text = L"";
			sudokuTable[i, j]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			sudokuTable[i, j]->SetLocked(false);
		}
	}
}

System::String^ Sudoku::Sudoku::ChangeMatrixValue(System::String^ str, int x , char s)
{
	System::String^ temp = "";
	for (int i = 0; i < str->Length; i++)
	{
		if (i == x)temp += s;
		else temp += str[i];
	}
	

	return temp;
	
}
//this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Sudoku::radioButton1_CheckedChanged_1);
//this->radioButton1->AutoSize = true;
//this->radioButton1->Location = System::Drawing::Point(606, 434);
//this->radioButton1->Name = L"radioButton1";
//this->radioButton1->Size = System::Drawing::Size(85, 17);
//this->radioButton1->TabIndex = 6;
//this->radioButton1->TabStop = true;
//this->radioButton1->Text = L"radioButton1";
//this->radioButton1->UseVisualStyleBackColor = true;