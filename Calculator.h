#pragma once

#include "Calculate.h"
#include <iostream>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculate *calculate;
		radix mode;
		Number *firstValue, *secValue, *result;

	private: System::Windows::Forms::ListBox^  listHistory;
	public:
		String^ whatOperator;

		Calculator(void)
		{
			InitializeComponent();
			this->mode = DEC;
			calculate = new Calculate();
			radioDec->Select();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBracketTwo;
	protected:
	private: System::Windows::Forms::Button^  btnBracketOne;
	private: System::Windows::Forms::Button^  btnA;
	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnHexC;

	private: System::Windows::Forms::Button^  btnLetterD;
	private: System::Windows::Forms::Button^  btnE;
	private: System::Windows::Forms::Button^  btnF;
	private: System::Windows::Forms::Button^  btnMod;
	private: System::Windows::Forms::Button^  btnXOR;
	private: System::Windows::Forms::Button^  btnOR;
	private: System::Windows::Forms::Button^  btnNot;
	private: System::Windows::Forms::Button^  btnAnd;
	private: System::Windows::Forms::RadioButton^  radioBin;
	private: System::Windows::Forms::RadioButton^  radioHex;
	private: System::Windows::Forms::RadioButton^  radioOct;
	private: System::Windows::Forms::RadioButton^  radioDec;
	private: System::Windows::Forms::Button^  btnDivide;
	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::Button^  btnDot;



	private: System::Windows::Forms::Button^  btnNumber0;
	private: System::Windows::Forms::Button^  btnTimes;

	private: System::Windows::Forms::Button^  btnNumber3;
	private: System::Windows::Forms::Button^  btnNumber2;
	private: System::Windows::Forms::Button^  btnNumber1;
	private: System::Windows::Forms::Button^  btnMinus;

	private: System::Windows::Forms::Button^  btnNumber6;
	private: System::Windows::Forms::Button^  btnNumber5;
	private: System::Windows::Forms::Button^  btnNumber4;
	private: System::Windows::Forms::Button^  btnAdd;

	private: System::Windows::Forms::Button^  btnNumber9;
	private: System::Windows::Forms::Button^  btnNumber8;
	private: System::Windows::Forms::Button^  btnNumber7;

	private: System::Windows::Forms::Button^  BtnC;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Label^  lblCalculations;
	private: System::Windows::Forms::TextBox^  txtboxCalView;

	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->btnBracketTwo = (gcnew System::Windows::Forms::Button());
			this->btnBracketOne = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnHexC = (gcnew System::Windows::Forms::Button());
			this->btnLetterD = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnXOR = (gcnew System::Windows::Forms::Button());
			this->btnOR = (gcnew System::Windows::Forms::Button());
			this->btnNot = (gcnew System::Windows::Forms::Button());
			this->btnAnd = (gcnew System::Windows::Forms::Button());
			this->radioBin = (gcnew System::Windows::Forms::RadioButton());
			this->radioHex = (gcnew System::Windows::Forms::RadioButton());
			this->radioOct = (gcnew System::Windows::Forms::RadioButton());
			this->radioDec = (gcnew System::Windows::Forms::RadioButton());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnNumber0 = (gcnew System::Windows::Forms::Button());
			this->btnTimes = (gcnew System::Windows::Forms::Button());
			this->btnNumber3 = (gcnew System::Windows::Forms::Button());
			this->btnNumber2 = (gcnew System::Windows::Forms::Button());
			this->btnNumber1 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnNumber6 = (gcnew System::Windows::Forms::Button());
			this->btnNumber5 = (gcnew System::Windows::Forms::Button());
			this->btnNumber4 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnNumber9 = (gcnew System::Windows::Forms::Button());
			this->btnNumber8 = (gcnew System::Windows::Forms::Button());
			this->btnNumber7 = (gcnew System::Windows::Forms::Button());
			this->BtnC = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->lblCalculations = (gcnew System::Windows::Forms::Label());
			this->txtboxCalView = (gcnew System::Windows::Forms::TextBox());
			this->listHistory = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnBracketTwo
			// 
			this->btnBracketTwo->BackColor = System::Drawing::Color::PeachPuff;
			this->btnBracketTwo->Enabled = false;
			this->btnBracketTwo->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnBracketTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBracketTwo->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Bold));
			this->btnBracketTwo->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnBracketTwo->Location = System::Drawing::Point(317, 170);
			this->btnBracketTwo->Name = L"btnBracketTwo";
			this->btnBracketTwo->Size = System::Drawing::Size(44, 46);
			this->btnBracketTwo->TabIndex = 304;
			this->btnBracketTwo->Text = L")";
			this->btnBracketTwo->UseVisualStyleBackColor = false;
			// 
			// btnBracketOne
			// 
			this->btnBracketOne->BackColor = System::Drawing::Color::PeachPuff;
			this->btnBracketOne->Enabled = false;
			this->btnBracketOne->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnBracketOne->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBracketOne->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Bold));
			this->btnBracketOne->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnBracketOne->Location = System::Drawing::Point(267, 170);
			this->btnBracketOne->Name = L"btnBracketOne";
			this->btnBracketOne->Size = System::Drawing::Size(44, 46);
			this->btnBracketOne->TabIndex = 303;
			this->btnBracketOne->Text = L"(";
			this->btnBracketOne->UseVisualStyleBackColor = false;
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::Color::PeachPuff;
			this->btnA->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnA->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnA->Location = System::Drawing::Point(217, 222);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(44, 42);
			this->btnA->TabIndex = 302;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::Color::PeachPuff;
			this->btnB->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnB->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnB->Location = System::Drawing::Point(267, 222);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(44, 44);
			this->btnB->TabIndex = 301;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnHexC
			// 
			this->btnHexC->BackColor = System::Drawing::Color::PeachPuff;
			this->btnHexC->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnHexC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHexC->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnHexC->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnHexC->Location = System::Drawing::Point(317, 222);
			this->btnHexC->Name = L"btnHexC";
			this->btnHexC->Size = System::Drawing::Size(44, 44);
			this->btnHexC->TabIndex = 300;
			this->btnHexC->Text = L"C";
			this->btnHexC->UseVisualStyleBackColor = false;
			this->btnHexC->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnLetterD
			// 
			this->btnLetterD->BackColor = System::Drawing::Color::PeachPuff;
			this->btnLetterD->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnLetterD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLetterD->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnLetterD->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnLetterD->Location = System::Drawing::Point(217, 270);
			this->btnLetterD->Name = L"btnLetterD";
			this->btnLetterD->Size = System::Drawing::Size(44, 44);
			this->btnLetterD->TabIndex = 299;
			this->btnLetterD->Text = L"D";
			this->btnLetterD->UseVisualStyleBackColor = false;
			this->btnLetterD->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnE
			// 
			this->btnE->BackColor = System::Drawing::Color::PeachPuff;
			this->btnE->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnE->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnE->Location = System::Drawing::Point(267, 270);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(44, 44);
			this->btnE->TabIndex = 298;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = false;
			this->btnE->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnF
			// 
			this->btnF->BackColor = System::Drawing::Color::PeachPuff;
			this->btnF->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnF->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnF->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnF->Location = System::Drawing::Point(317, 270);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(44, 44);
			this->btnF->TabIndex = 297;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = false;
			this->btnF->Click += gcnew System::EventHandler(this, &Calculator::btnLettersPress);
			// 
			// btnMod
			// 
			this->btnMod->BackColor = System::Drawing::Color::PeachPuff;
			this->btnMod->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnMod->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnMod->Location = System::Drawing::Point(267, 120);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(44, 44);
			this->btnMod->TabIndex = 296;
			this->btnMod->Text = L"MOD";
			this->btnMod->UseVisualStyleBackColor = false;
			this->btnMod->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnXOR
			// 
			this->btnXOR->BackColor = System::Drawing::Color::PeachPuff;
			this->btnXOR->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnXOR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnXOR->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnXOR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnXOR->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnXOR->Location = System::Drawing::Point(67, 120);
			this->btnXOR->Name = L"btnXOR";
			this->btnXOR->Size = System::Drawing::Size(44, 44);
			this->btnXOR->TabIndex = 295;
			this->btnXOR->Text = L"XOR";
			this->btnXOR->UseVisualStyleBackColor = false;
			this->btnXOR->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnOR
			// 
			this->btnOR->BackColor = System::Drawing::Color::PeachPuff;
			this->btnOR->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnOR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOR->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnOR->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnOR->Location = System::Drawing::Point(117, 120);
			this->btnOR->Name = L"btnOR";
			this->btnOR->Size = System::Drawing::Size(45, 44);
			this->btnOR->TabIndex = 294;
			this->btnOR->Text = L"OR";
			this->btnOR->UseVisualStyleBackColor = false;
			this->btnOR->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnNot
			// 
			this->btnNot->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNot->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNot->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNot->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNot->Location = System::Drawing::Point(168, 120);
			this->btnNot->Name = L"btnNot";
			this->btnNot->Size = System::Drawing::Size(44, 44);
			this->btnNot->TabIndex = 293;
			this->btnNot->Text = L"NOT";
			this->btnNot->UseVisualStyleBackColor = false;
			this->btnNot->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnAnd
			// 
			this->btnAnd->BackColor = System::Drawing::Color::PeachPuff;
			this->btnAnd->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnAnd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAnd->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnAnd->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnAnd->Location = System::Drawing::Point(217, 120);
			this->btnAnd->Name = L"btnAnd";
			this->btnAnd->Size = System::Drawing::Size(44, 44);
			this->btnAnd->TabIndex = 292;
			this->btnAnd->Text = L"AND";
			this->btnAnd->UseVisualStyleBackColor = false;
			this->btnAnd->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// radioBin
			// 
			this->radioBin->AutoSize = true;
			this->radioBin->BackColor = System::Drawing::Color::BurlyWood;
			this->radioBin->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->radioBin->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->radioBin->Location = System::Drawing::Point(231, 91);
			this->radioBin->Name = L"radioBin";
			this->radioBin->Size = System::Drawing::Size(42, 20);
			this->radioBin->TabIndex = 291;
			this->radioBin->Text = L"Bin";
			this->radioBin->UseVisualStyleBackColor = false;
			this->radioBin->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::calculatorModeBIN);
			// 
			// radioHex
			// 
			this->radioHex->AutoSize = true;
			this->radioHex->BackColor = System::Drawing::Color::BurlyWood;
			this->radioHex->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->radioHex->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->radioHex->Location = System::Drawing::Point(181, 91);
			this->radioHex->Name = L"radioHex";
			this->radioHex->Size = System::Drawing::Size(44, 20);
			this->radioHex->TabIndex = 290;
			this->radioHex->Text = L"Hex";
			this->radioHex->UseVisualStyleBackColor = false;
			this->radioHex->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::calculatorModeHEX);
			// 
			// radioOct
			// 
			this->radioOct->AutoSize = true;
			this->radioOct->BackColor = System::Drawing::Color::BurlyWood;
			this->radioOct->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->radioOct->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->radioOct->Location = System::Drawing::Point(133, 91);
			this->radioOct->Name = L"radioOct";
			this->radioOct->Size = System::Drawing::Size(42, 20);
			this->radioOct->TabIndex = 289;
			this->radioOct->Text = L"Oct";
			this->radioOct->UseVisualStyleBackColor = false;
			this->radioOct->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::calculatorModeOCT);
			// 
			// radioDec
			// 
			this->radioDec->AutoSize = true;
			this->radioDec->BackColor = System::Drawing::Color::BurlyWood;
			this->radioDec->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->radioDec->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->radioDec->Location = System::Drawing::Point(81, 91);
			this->radioDec->Name = L"radioDec";
			this->radioDec->Size = System::Drawing::Size(43, 20);
			this->radioDec->TabIndex = 288;
			this->radioDec->Text = L"Dec";
			this->radioDec->UseVisualStyleBackColor = false;
			this->radioDec->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::calculatorModeDEC);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::PeachPuff;
			this->btnDivide->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnDivide->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnDivide->Location = System::Drawing::Point(267, 320);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(44, 44);
			this->btnDivide->TabIndex = 287;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::PeachPuff;
			this->btnEqual->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnEqual->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnEqual->Location = System::Drawing::Point(18, 320);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(93, 44);
			this->btnEqual->TabIndex = 286;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &Calculator::BtnEqual_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::PeachPuff;
			this->btnDot->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Sitka Display", 15, System::Drawing::FontStyle::Bold));
			this->btnDot->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnDot->Location = System::Drawing::Point(218, 170);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(44, 44);
			this->btnDot->TabIndex = 285;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &Calculator::BtnD_Click);
			// 
			// btnNumber0
			// 
			this->btnNumber0->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber0->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber0->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber0->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber0->Location = System::Drawing::Point(117, 320);
			this->btnNumber0->Name = L"btnNumber0";
			this->btnNumber0->Size = System::Drawing::Size(44, 44);
			this->btnNumber0->TabIndex = 284;
			this->btnNumber0->Text = L"0";
			this->btnNumber0->UseVisualStyleBackColor = false;
			this->btnNumber0->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnTimes
			// 
			this->btnTimes->BackColor = System::Drawing::Color::PeachPuff;
			this->btnTimes->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnTimes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTimes->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnTimes->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnTimes->Location = System::Drawing::Point(217, 320);
			this->btnTimes->Name = L"btnTimes";
			this->btnTimes->Size = System::Drawing::Size(44, 44);
			this->btnTimes->TabIndex = 283;
			this->btnTimes->Text = L"*";
			this->btnTimes->UseVisualStyleBackColor = false;
			this->btnTimes->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnNumber3
			// 
			this->btnNumber3->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber3->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber3->Location = System::Drawing::Point(117, 270);
			this->btnNumber3->Name = L"btnNumber3";
			this->btnNumber3->Size = System::Drawing::Size(44, 44);
			this->btnNumber3->TabIndex = 282;
			this->btnNumber3->Text = L"3";
			this->btnNumber3->UseVisualStyleBackColor = false;
			this->btnNumber3->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber2
			// 
			this->btnNumber2->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber2->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber2->Location = System::Drawing::Point(67, 270);
			this->btnNumber2->Name = L"btnNumber2";
			this->btnNumber2->Size = System::Drawing::Size(44, 44);
			this->btnNumber2->TabIndex = 281;
			this->btnNumber2->Text = L"2";
			this->btnNumber2->UseVisualStyleBackColor = false;
			this->btnNumber2->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber1
			// 
			this->btnNumber1->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber1->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber1->Location = System::Drawing::Point(18, 270);
			this->btnNumber1->Name = L"btnNumber1";
			this->btnNumber1->Size = System::Drawing::Size(43, 44);
			this->btnNumber1->TabIndex = 280;
			this->btnNumber1->Text = L"1";
			this->btnNumber1->UseVisualStyleBackColor = false;
			this->btnNumber1->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::Color::PeachPuff;
			this->btnMinus->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnMinus->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnMinus->Location = System::Drawing::Point(167, 320);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(44, 44);
			this->btnMinus->TabIndex = 279;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnNumber6
			// 
			this->btnNumber6->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber6->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber6->Location = System::Drawing::Point(67, 220);
			this->btnNumber6->Name = L"btnNumber6";
			this->btnNumber6->Size = System::Drawing::Size(44, 44);
			this->btnNumber6->TabIndex = 278;
			this->btnNumber6->Text = L"6";
			this->btnNumber6->UseVisualStyleBackColor = false;
			this->btnNumber6->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber5
			// 
			this->btnNumber5->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber5->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber5->Location = System::Drawing::Point(18, 220);
			this->btnNumber5->Name = L"btnNumber5";
			this->btnNumber5->Size = System::Drawing::Size(43, 44);
			this->btnNumber5->TabIndex = 277;
			this->btnNumber5->Text = L"5";
			this->btnNumber5->UseVisualStyleBackColor = false;
			this->btnNumber5->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber4
			// 
			this->btnNumber4->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber4->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber4->Location = System::Drawing::Point(167, 270);
			this->btnNumber4->Name = L"btnNumber4";
			this->btnNumber4->Size = System::Drawing::Size(44, 44);
			this->btnNumber4->TabIndex = 276;
			this->btnNumber4->Text = L"4";
			this->btnNumber4->UseVisualStyleBackColor = false;
			this->btnNumber4->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::PeachPuff;
			this->btnAdd->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnAdd->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnAdd->Location = System::Drawing::Point(317, 320);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(44, 44);
			this->btnAdd->TabIndex = 275;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Calculator::Operations);
			// 
			// btnNumber9
			// 
			this->btnNumber9->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber9->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber9->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber9->Location = System::Drawing::Point(168, 170);
			this->btnNumber9->Name = L"btnNumber9";
			this->btnNumber9->Size = System::Drawing::Size(44, 46);
			this->btnNumber9->TabIndex = 274;
			this->btnNumber9->Text = L"9";
			this->btnNumber9->UseVisualStyleBackColor = false;
			this->btnNumber9->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber8
			// 
			this->btnNumber8->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber8->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber8->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber8->Location = System::Drawing::Point(167, 222);
			this->btnNumber8->Name = L"btnNumber8";
			this->btnNumber8->Size = System::Drawing::Size(44, 42);
			this->btnNumber8->TabIndex = 273;
			this->btnNumber8->Text = L"8";
			this->btnNumber8->UseVisualStyleBackColor = false;
			this->btnNumber8->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btnNumber7
			// 
			this->btnNumber7->BackColor = System::Drawing::Color::PeachPuff;
			this->btnNumber7->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnNumber7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNumber7->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnNumber7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnNumber7->Location = System::Drawing::Point(117, 222);
			this->btnNumber7->Name = L"btnNumber7";
			this->btnNumber7->Size = System::Drawing::Size(45, 42);
			this->btnNumber7->TabIndex = 272;
			this->btnNumber7->Text = L"7";
			this->btnNumber7->UseVisualStyleBackColor = false;
			this->btnNumber7->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// BtnC
			// 
			this->BtnC->BackColor = System::Drawing::Color::PeachPuff;
			this->BtnC->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->BtnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnC->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->BtnC->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->BtnC->Location = System::Drawing::Point(18, 168);
			this->BtnC->Name = L"BtnC";
			this->BtnC->Size = System::Drawing::Size(93, 48);
			this->BtnC->TabIndex = 270;
			this->BtnC->Text = L"C";
			this->BtnC->UseVisualStyleBackColor = false;
			this->BtnC->Click += gcnew System::EventHandler(this, &Calculator::BtnC_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->BackColor = System::Drawing::Color::PeachPuff;
			this->btnBackspace->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
			this->btnBackspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnBackspace->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnBackspace->Location = System::Drawing::Point(117, 168);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(45, 48);
			this->btnBackspace->TabIndex = 269;
			this->btnBackspace->Text = L"←";
			this->btnBackspace->UseVisualStyleBackColor = false;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &Calculator::btnBackspace_Click);
			// 
			// lblCalculations
			// 
			this->lblCalculations->AutoSize = true;
			this->lblCalculations->BackColor = System::Drawing::SystemColors::Control;
			this->lblCalculations->Font = (gcnew System::Drawing::Font(L"Sitka Display", 8.25F, System::Drawing::FontStyle::Bold));
			this->lblCalculations->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lblCalculations->Location = System::Drawing::Point(25, 27);
			this->lblCalculations->Name = L"lblCalculations";
			this->lblCalculations->Size = System::Drawing::Size(11, 16);
			this->lblCalculations->TabIndex = 268;
			this->lblCalculations->Text = L" ";
			// 
			// txtboxCalView
			// 
			this->txtboxCalView->BackColor = System::Drawing::SystemColors::Control;
			this->txtboxCalView->Font = (gcnew System::Drawing::Font(L"Sitka Display", 30, System::Drawing::FontStyle::Bold));
			this->txtboxCalView->Location = System::Drawing::Point(17, 18);
			this->txtboxCalView->Multiline = true;
			this->txtboxCalView->Name = L"txtboxCalView";
			this->txtboxCalView->ReadOnly = true;
			this->txtboxCalView->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtboxCalView->Size = System::Drawing::Size(344, 67);
			this->txtboxCalView->TabIndex = 267;
			this->txtboxCalView->Text = L"0";
			this->txtboxCalView->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtboxCalView->TextChanged += gcnew System::EventHandler(this, &Calculator::txtboxCalView_TextChanged);
			// 
			// listHistory
			// 
			this->listHistory->BackColor = System::Drawing::SystemColors::Control;
			this->listHistory->FormattingEnabled = true;
			this->listHistory->Location = System::Drawing::Point(18, 372);
			this->listHistory->Name = L"listHistory";
			this->listHistory->Size = System::Drawing::Size(343, 121);
			this->listHistory->TabIndex = 305;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(372, 503);
			this->Controls->Add(this->listHistory);
			this->Controls->Add(this->btnBracketTwo);
			this->Controls->Add(this->btnBracketOne);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnHexC);
			this->Controls->Add(this->btnLetterD);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnF);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnXOR);
			this->Controls->Add(this->btnOR);
			this->Controls->Add(this->btnNot);
			this->Controls->Add(this->btnAnd);
			this->Controls->Add(this->radioBin);
			this->Controls->Add(this->radioHex);
			this->Controls->Add(this->radioOct);
			this->Controls->Add(this->radioDec);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnNumber0);
			this->Controls->Add(this->btnTimes);
			this->Controls->Add(this->btnNumber3);
			this->Controls->Add(this->btnNumber2);
			this->Controls->Add(this->btnNumber1);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnNumber6);
			this->Controls->Add(this->btnNumber5);
			this->Controls->Add(this->btnNumber4);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnNumber9);
			this->Controls->Add(this->btnNumber8);
			this->Controls->Add(this->btnNumber7);
			this->Controls->Add(this->BtnC);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->lblCalculations);
			this->Controls->Add(this->txtboxCalView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->Text = L"Calculator - By Eljon Hoxha";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Void btn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// Prints text of buttons in textbox
		Button^ Number = (Button^) sender;

		if (txtboxCalView->Text == "0")
		{
			txtboxCalView->Text = Number->Text;
		}
		else
		{
			txtboxCalView->Text = txtboxCalView->Text + Number->Text;
		}
	}


	System::Void btnLettersPress(System::Object^  sender, System::EventArgs^  e)
	{
		// Prints text of buttons in textbox
		Button^ Letters = safe_cast<Button^>(sender);

		if (txtboxCalView->Text == "0")
		{
			txtboxCalView->Text = Letters->Text;
		}
		else
		{
			txtboxCalView->Text = txtboxCalView->Text + Letters->Text;
		}

	}

	System::Void Operations(System::Object^  sender, System::EventArgs^  e)
	{
		// Prints the operators
		Button ^ whatOperators = safe_cast<Button^> (sender);
		firstValue = new Number(txtboxCalView->Text, this->mode);
		txtboxCalView->Text = "";
		whatOperator = whatOperators->Text;
		lblCalculations->Text = gcnew String(firstValue->getValue().c_str()) + " " + whatOperator;
	}

	System::Void txtboxCalView_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		// No Code
	}

	System::Void BtnD_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (!txtboxCalView->Text->Contains("."))
		{
			txtboxCalView->Text = txtboxCalView->Text + ".";
		}
	}

	System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		// Backspace to erase last number
		if (txtboxCalView->Text->Length > 0)
		{
			txtboxCalView->Text = txtboxCalView->Text->Remove(txtboxCalView->Text->Length - 1, 1);
		}
	}

	System::Void BtnC_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		txtboxCalView->Text = "0";
		lblCalculations->Text = "";
	}

	System::Void BtnEqual_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		secValue = new Number(txtboxCalView->Text, this->mode);
		calculate = new Calculate(firstValue, secValue, mode);

		// Separate if function for NOT operator
		if (whatOperator == "NOT")
		{
			result = calculate->CalculateNOT();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
			return;
		}

		// LblCalculations will show the calculations
		lblCalculations->Text = gcnew String(firstValue->getValue().c_str()) + " " + whatOperator + " " + gcnew String(secValue->getValue().c_str());

		// Listhistory will show the past calculations
		listHistory->Items->Add(gcnew String(firstValue->getValue().c_str()) + " " + whatOperator + " " + gcnew String(secValue->getValue().c_str()));

		// Finds the operator to complete each of the tasks such as Additions, multiplication, division, subtraction and the other bitwise operators.
		// Able to do the bitwise operators
		if (whatOperator == "+")
		{
			result = calculate->CalculateAdditions();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "-")
		{
			result = calculate->CalculateSubtraction();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "*")
		{
			result = calculate->CalculateMulti();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "/")
		{
			result = calculate->CalculateDivision();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "AND")
		{
			result = calculate->CalculateAND();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "OR")
		{
			result = calculate->CalculateOR();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "XOR")
		{
			result = calculate->CalculateXOR();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
		else if (whatOperator == "MOD")
		{
			result = calculate->CalculateMOD();
			txtboxCalView->Text = gcnew System::String(result->getValue().c_str());
		}
	}

	System::Void calculatorModeDEC(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		showConverted(DEC);

		// Enables/disables buttons for each of the conversions
		this->btnNumber0->Enabled = true;
		this->btnNumber1->Enabled = true;
		this->btnNumber2->Enabled = true;
		this->btnNumber3->Enabled = true;
		this->btnNumber4->Enabled = true;
		this->btnNumber5->Enabled = true;
		this->btnNumber6->Enabled = true;
		this->btnNumber7->Enabled = true;
		this->btnNumber8->Enabled = true;
		this->btnNumber9->Enabled = true;

		this->btnA->Enabled = false;
		this->btnB->Enabled = false;
		this->btnHexC->Enabled = false;
		this->btnLetterD->Enabled = false;
		this->btnE->Enabled = false;
		this->btnF->Enabled = false;

		this->btnAdd->Enabled = true;
		this->btnMinus->Enabled = true;
		this->btnDivide->Enabled = true;
		this->btnTimes->Enabled = true;

		this->btnDot->Enabled = true;
	}

	System::Void calculatorModeOCT(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		showConverted(OCT);

		// Enables/disables buttons for each of the conversions
		this->btnNumber0->Enabled = true;
		this->btnNumber1->Enabled = true;
		this->btnNumber2->Enabled = true;
		this->btnNumber3->Enabled = true;
		this->btnNumber4->Enabled = true;
		this->btnNumber5->Enabled = true;
		this->btnNumber6->Enabled = true;
		this->btnNumber7->Enabled = true;
		this->btnNumber8->Enabled = false;
		this->btnNumber9->Enabled = false;

		this->btnA->Enabled = false;
		this->btnB->Enabled = false;
		this->btnHexC->Enabled = false;
		this->btnLetterD->Enabled = false;
		this->btnE->Enabled = false;
		this->btnF->Enabled = false;

		this->btnAdd->Enabled = true;
		this->btnMinus->Enabled = true;
		this->btnDivide->Enabled = true;
		this->btnTimes->Enabled = true;

		this->btnDot->Enabled = false;

	}
	
	System::Void calculatorModeHEX(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		showConverted(HEX);

		// Enables/disables buttons for each of the conversions
		this->btnNumber0->Enabled = true;
		this->btnNumber1->Enabled = true;
		this->btnNumber2->Enabled = true;
		this->btnNumber3->Enabled = true;
		this->btnNumber4->Enabled = true;
		this->btnNumber5->Enabled = true;
		this->btnNumber6->Enabled = true;
		this->btnNumber7->Enabled = true;
		this->btnNumber8->Enabled = true;
		this->btnNumber9->Enabled = true;

		this->btnA->Enabled = true;
		this->btnB->Enabled = true;
		this->btnHexC->Enabled = true;
		this->btnLetterD->Enabled = true;
		this->btnE->Enabled = true;
		this->btnF->Enabled = true;

		this->btnAdd->Enabled = true;
		this->btnMinus->Enabled = true;
		this->btnDivide->Enabled = true;
		this->btnTimes->Enabled = true;

		this->btnDot->Enabled = false;

	}

	System::Void calculatorModeBIN(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		showConverted(BIN);

		// Enables/disables buttons for each of the conversions
		this->btnNumber0->Enabled = true;
		this->btnNumber1->Enabled = true;
		this->btnNumber2->Enabled = false;
		this->btnNumber3->Enabled = false;
		this->btnNumber4->Enabled = false;
		this->btnNumber5->Enabled = false;
		this->btnNumber6->Enabled = false;
		this->btnNumber7->Enabled = false;
		this->btnNumber8->Enabled = false;
		this->btnNumber9->Enabled = false;

		this->btnA->Enabled = false;
		this->btnB->Enabled = false;
		this->btnHexC->Enabled = false;
		this->btnLetterD->Enabled = false;
		this->btnE->Enabled = false;
		this->btnF->Enabled = false;

		this->btnAdd->Enabled = false;
		this->btnMinus->Enabled = false;
		this->btnDivide->Enabled = false;
		this->btnTimes->Enabled = false;

		this->btnDot->Enabled = false;
	}

	/*
		Steps taken to change mode:
		1. Parse the text in the calculator using the mode that is currently set.
		2. Change the mode to the new mode
		3. Tell the Number class to change it's mode
		4. Display the value in the new mode
	*/
	void showConverted(radix mode)
	{
		Number* val = new Number(txtboxCalView->Text, this->mode);
		this->mode = mode;
		calculate->setMode(this->mode);
		val->setMode(this->mode);
		txtboxCalView->Text = gcnew System::String(val->getValue().c_str());
	}
};
}
