#pragma once
#include "SudokuTable.h"
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

		   cli::array<SudokuTable^, 2>^ sudokuTable = gcnew cli::array<SudokuTable^, 2>(9, 9);
	protected:

	private:
		void CreateTable();
		
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
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(28, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 405);
			this->panel1->TabIndex = 0;
			// 
			// Sudoku
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 545);
			this->Controls->Add(this->panel1);
			this->Name = L"Sudoku";
			this->Text = L"Sudoku";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	};
}
