#pragma once
#include "SudokuTable.h"
#include "InputButton.h"
#include "LevelRadioButton.h"
namespace Sudoku {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sudoku
	/// </summary>
	public ref class Sudoku : public System::Windows::Forms::Form
	{
	public:
		Sudoku(void)
		{
			InitializeComponent();
			CreateTable();
			CreateInputButtons();
			CreateRadioButtons();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sudoku()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

		   cli::array<SudokuTable^, 2>^ sudokuTable = gcnew cli::array<SudokuTable^, 2>(9, 9);
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ levelGroupBox;




		   cli::array<LevelRadioButton^>^ levelButtons = gcnew cli::array<LevelRadioButton^>(3);



		   cli::array<InputButton^, 2>^ inputBattons = gcnew cli::array<InputButton^, 2>(5, 2);
	protected:

	private:
		void CreateTable();
		void CreateInputButtons();
		void CreateRadioButtons();
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->levelGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(34, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 405);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(34, 434);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(405, 110);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(544, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"New Game";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(544, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(544, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// levelGroupBox
			// 
			this->levelGroupBox->Location = System::Drawing::Point(544, 244);
			this->levelGroupBox->Name = L"levelGroupBox";
			this->levelGroupBox->Size = System::Drawing::Size(150, 107);
			this->levelGroupBox->TabIndex = 5;
			this->levelGroupBox->TabStop = false;
			this->levelGroupBox->Text = L"Level";
			// 
			// Sudoku
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 629);
			this->Controls->Add(this->levelGroupBox);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Sudoku";
			this->Text = L"Sudoku";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void levelRadioButton(System::Object^ sender,  System::EventArgs^ e)
{
	LevelRadioButton^ b = (LevelRadioButton^)sender;
	//MessageBox::Show(b->Text);
	b->SetCommonLevel(b->level);
	//MessageBox::Show(LevelRadioButton::GetCommonLevel());

	
}
private: System::Void radioButton1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
