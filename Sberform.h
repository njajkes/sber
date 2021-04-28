//740: TODO: проверка на значение DEC_credit и проверка на неснижаемый порог  
//820: TODO: Проверка на значение неснижаемого порога с учётом DEC_credit

#pragma once
#include "Functions.h"
#include <ctime>
#include <string>
#include <stdlib.h>
namespace Sber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Sberform
	/// </summary>
	public ref class Sberform : public System::Windows::Forms::Form
	{
	public:
		Sberform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Sberform()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	protected:
	private: System::Windows::Forms::DateTimePicker^ DateTimePicker;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Vklad;
	private: System::Windows::Forms::ComboBox^ Vklad_Box;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ Check_Box_Add;
	private: System::Windows::Forms::TextBox^ ADD_credit;
	private: System::Windows::Forms::CheckBox^ Check_Box_Dec;
	private: System::Windows::Forms::TextBox^ DEC_credit;
	private: System::Windows::Forms::CheckBox^ Capitalization;
	private: System::Windows::Forms::TextBox^ PrintResult;
	private: System::Windows::Forms::CheckBox^ Pensioner;
	private: System::Windows::Forms::CheckBox^ Offline;
	private: System::Windows::Forms::TextBox^ min_vklad;
	private: System::Windows::Forms::Label^ min_vklad_b;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ income;
	private: System::Windows::Forms::Label^ percLbl;
	private: System::Windows::Forms::TextBox^ percTxtbx;
	private: System::Windows::Forms::CheckBox^ devTools;
	private: System::Windows::Forms::CheckBox^ morethan3y;
	private: System::Windows::Forms::TrackBar^ TrackMonth2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ tmVklFooLbl;
	private: System::Windows::Forms::Label^ mLabel;
	private: System::Windows::Forms::CheckBox^ otkatPolzunka;
	private: System::Windows::Forms::Label^ ErrVklad;
	private: System::Windows::Forms::Label^ ErrADD_credit;
	private: System::Windows::Forms::Label^ ErrDEC_credit;
	private: System::Windows::Forms::Label^ ErrMin_Vklad;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Vklad = (gcnew System::Windows::Forms::TextBox());
			this->Vklad_Box = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Check_Box_Add = (gcnew System::Windows::Forms::CheckBox());
			this->ADD_credit = (gcnew System::Windows::Forms::TextBox());
			this->Check_Box_Dec = (gcnew System::Windows::Forms::CheckBox());
			this->DEC_credit = (gcnew System::Windows::Forms::TextBox());
			this->Capitalization = (gcnew System::Windows::Forms::CheckBox());
			this->PrintResult = (gcnew System::Windows::Forms::TextBox());
			this->Pensioner = (gcnew System::Windows::Forms::CheckBox());
			this->Offline = (gcnew System::Windows::Forms::CheckBox());
			this->min_vklad = (gcnew System::Windows::Forms::TextBox());
			this->min_vklad_b = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->income = (gcnew System::Windows::Forms::TextBox());
			this->percLbl = (gcnew System::Windows::Forms::Label());
			this->percTxtbx = (gcnew System::Windows::Forms::TextBox());
			this->devTools = (gcnew System::Windows::Forms::CheckBox());
			this->morethan3y = (gcnew System::Windows::Forms::CheckBox());
			this->TrackMonth2 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tmVklFooLbl = (gcnew System::Windows::Forms::Label());
			this->mLabel = (gcnew System::Windows::Forms::Label());
			this->otkatPolzunka = (gcnew System::Windows::Forms::CheckBox());
			this->ErrVklad = (gcnew System::Windows::Forms::Label());
			this->ErrADD_credit = (gcnew System::Windows::Forms::Label());
			this->ErrDEC_credit = (gcnew System::Windows::Forms::Label());
			this->ErrMin_Vklad = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrackMonth2))->BeginInit();
			this->SuspendLayout();
			// 
			// DateTimePicker
			// 
			this->DateTimePicker->Location = System::Drawing::Point(17, 59);
			this->DateTimePicker->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->DateTimePicker->Name = L"DateTimePicker";
			this->DateTimePicker->Size = System::Drawing::Size(544, 22);
			this->DateTimePicker->TabIndex = 13;
			this->DateTimePicker->Visible = false;
			this->DateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Sberform::DateTimePicker_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 123);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 14);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Введите сумму вклада";
			this->label1->Click += gcnew System::EventHandler(this, &Sberform::label1_Click_1);
			// 
			// Vklad
			// 
			this->Vklad->Enabled = false;
			this->Vklad->ForeColor = System::Drawing::Color::Chocolate;
			this->Vklad->Location = System::Drawing::Point(200, 120);
			this->Vklad->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Vklad->Name = L"Vklad";
			this->Vklad->Size = System::Drawing::Size(428, 22);
			this->Vklad->TabIndex = 15;
			this->Vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::Vklad_TextChanged);
			// 
			// Vklad_Box
			// 
			this->Vklad_Box->BackColor = System::Drawing::Color::White;
			this->Vklad_Box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Vklad_Box->ForeColor = System::Drawing::Color::Chocolate;
			this->Vklad_Box->FormattingEnabled = true;
			this->Vklad_Box->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Вклад Дополнительный процент", L"Вклад Сохраняй",
					L"Вклад Пополняй", L"Вклад Управляй"
			});
			this->Vklad_Box->Location = System::Drawing::Point(17, 13);
			this->Vklad_Box->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Vklad_Box->Name = L"Vklad_Box";
			this->Vklad_Box->Size = System::Drawing::Size(611, 22);
			this->Vklad_Box->TabIndex = 16;
			this->Vklad_Box->Text = L"Выберите вклад";
			this->Vklad_Box->SelectedIndexChanged += gcnew System::EventHandler(this, &Sberform::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Enabled = false;
			this->button1->ForeColor = System::Drawing::Color::DarkGreen;
			this->button1->Location = System::Drawing::Point(16, 380);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 25);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ВЫЧИСЛИТЬ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sberform::button1_Click_1);
			// 
			// Check_Box_Add
			// 
			this->Check_Box_Add->AutoSize = true;
			this->Check_Box_Add->Location = System::Drawing::Point(17, 165);
			this->Check_Box_Add->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Check_Box_Add->Name = L"Check_Box_Add";
			this->Check_Box_Add->Size = System::Drawing::Size(246, 18);
			this->Check_Box_Add->TabIndex = 22;
			this->Check_Box_Add->Text = L"Ежемесячное пополнение вклада";
			this->Check_Box_Add->UseVisualStyleBackColor = true;
			this->Check_Box_Add->Visible = false;
			this->Check_Box_Add->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Add_CheckedChanged);
			// 
			// ADD_credit
			// 
			this->ADD_credit->ForeColor = System::Drawing::Color::Chocolate;
			this->ADD_credit->Location = System::Drawing::Point(289, 162);
			this->ADD_credit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ADD_credit->Name = L"ADD_credit";
			this->ADD_credit->Size = System::Drawing::Size(339, 22);
			this->ADD_credit->TabIndex = 23;
			this->ADD_credit->Visible = false;
			this->ADD_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::ADD_credit_TextChanged);
			// 
			// Check_Box_Dec
			// 
			this->Check_Box_Dec->AutoSize = true;
			this->Check_Box_Dec->Location = System::Drawing::Point(16, 210);
			this->Check_Box_Dec->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Check_Box_Dec->Name = L"Check_Box_Dec";
			this->Check_Box_Dec->Size = System::Drawing::Size(309, 18);
			this->Check_Box_Dec->TabIndex = 24;
			this->Check_Box_Dec->Text = L"Ежемесячное частитчное снятие со вклада";
			this->Check_Box_Dec->UseVisualStyleBackColor = true;
			this->Check_Box_Dec->Visible = false;
			this->Check_Box_Dec->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Dec_CheckedChanged);
			// 
			// DEC_credit
			// 
			this->DEC_credit->ForeColor = System::Drawing::Color::Chocolate;
			this->DEC_credit->Location = System::Drawing::Point(353, 210);
			this->DEC_credit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->DEC_credit->Name = L"DEC_credit";
			this->DEC_credit->Size = System::Drawing::Size(275, 22);
			this->DEC_credit->TabIndex = 25;
			this->DEC_credit->Visible = false;
			this->DEC_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::DEC_credit_TextChanged);
			// 
			// Capitalization
			// 
			this->Capitalization->AutoSize = true;
			this->Capitalization->Location = System::Drawing::Point(16, 305);
			this->Capitalization->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Capitalization->Name = L"Capitalization";
			this->Capitalization->Size = System::Drawing::Size(126, 18);
			this->Capitalization->TabIndex = 26;
			this->Capitalization->Text = L"Капитализация";
			this->Capitalization->UseVisualStyleBackColor = true;
			this->Capitalization->Visible = false;
			this->Capitalization->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Capitalization_CheckedChanged);
			// 
			// PrintResult
			// 
			this->PrintResult->Enabled = false;
			this->PrintResult->ForeColor = System::Drawing::Color::Chocolate;
			this->PrintResult->Location = System::Drawing::Point(277, 411);
			this->PrintResult->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->PrintResult->Name = L"PrintResult";
			this->PrintResult->Size = System::Drawing::Size(351, 22);
			this->PrintResult->TabIndex = 27;
			this->PrintResult->TextChanged += gcnew System::EventHandler(this, &Sberform::PrintResult_TextChanged);
			// 
			// Pensioner
			// 
			this->Pensioner->AutoSize = true;
			this->Pensioner->Location = System::Drawing::Point(17, 330);
			this->Pensioner->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Pensioner->Name = L"Pensioner";
			this->Pensioner->Size = System::Drawing::Size(108, 18);
			this->Pensioner->TabIndex = 28;
			this->Pensioner->Text = L"Я пенсионер";
			this->Pensioner->UseVisualStyleBackColor = true;
			this->Pensioner->Visible = false;
			// 
			// Offline
			// 
			this->Offline->AutoSize = true;
			this->Offline->Location = System::Drawing::Point(16, 355);
			this->Offline->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Offline->Name = L"Offline";
			this->Offline->Size = System::Drawing::Size(156, 18);
			this->Offline->TabIndex = 29;
			this->Offline->Text = L"Оформить в офисе\?";
			this->Offline->UseVisualStyleBackColor = true;
			this->Offline->Visible = false;
			this->Offline->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Online_CheckedChanged);
			// 
			// min_vklad
			// 
			this->min_vklad->ForeColor = System::Drawing::Color::Chocolate;
			this->min_vklad->Location = System::Drawing::Point(200, 271);
			this->min_vklad->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->min_vklad->Name = L"min_vklad";
			this->min_vklad->Size = System::Drawing::Size(428, 22);
			this->min_vklad->TabIndex = 30;
			this->min_vklad->Visible = false;
			this->min_vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::min_vklad_TextChanged);
			// 
			// min_vklad_b
			// 
			this->min_vklad_b->AutoSize = true;
			this->min_vklad_b->Location = System::Drawing::Point(16, 271);
			this->min_vklad_b->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->min_vklad_b->Name = L"min_vklad_b";
			this->min_vklad_b->Size = System::Drawing::Size(145, 14);
			this->min_vklad_b->TabIndex = 31;
			this->min_vklad_b->Text = L"Неснижамый остаток";
			this->min_vklad_b->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 415);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 14);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Накопите всего:";
			this->label2->Click += gcnew System::EventHandler(this, &Sberform::label2_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 447);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 14);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Доход по вкладу:";
			// 
			// income
			// 
			this->income->Enabled = false;
			this->income->ForeColor = System::Drawing::Color::Chocolate;
			this->income->Location = System::Drawing::Point(277, 443);
			this->income->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->income->Name = L"income";
			this->income->Size = System::Drawing::Size(351, 22);
			this->income->TabIndex = 34;
			this->income->TextChanged += gcnew System::EventHandler(this, &Sberform::income_TextChanged);
			// 
			// percLbl
			// 
			this->percLbl->AutoSize = true;
			this->percLbl->Location = System::Drawing::Point(87, 495);
			this->percLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->percLbl->Name = L"percLbl";
			this->percLbl->Size = System::Drawing::Size(167, 14);
			this->percLbl->TabIndex = 35;
			this->percLbl->Text = L"Ваш процент по вкладу:";
			this->percLbl->Click += gcnew System::EventHandler(this, &Sberform::label4_Click_4);
			// 
			// percTxtbx
			// 
			this->percTxtbx->Enabled = false;
			this->percTxtbx->ForeColor = System::Drawing::Color::Chocolate;
			this->percTxtbx->Location = System::Drawing::Point(277, 492);
			this->percTxtbx->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->percTxtbx->Name = L"percTxtbx";
			this->percTxtbx->Size = System::Drawing::Size(135, 22);
			this->percTxtbx->TabIndex = 36;
			this->percTxtbx->TextChanged += gcnew System::EventHandler(this, &Sberform::textBox1_TextChanged);
			// 
			// devTools
			// 
			this->devTools->AutoSize = true;
			this->devTools->Location = System::Drawing::Point(536, 510);
			this->devTools->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->devTools->Name = L"devTools";
			this->devTools->Size = System::Drawing::Size(81, 18);
			this->devTools->TabIndex = 40;
			this->devTools->Text = L"devTools";
			this->devTools->UseVisualStyleBackColor = true;
			this->devTools->Visible = false;
			this->devTools->CheckedChanged += gcnew System::EventHandler(this, &Sberform::devTools_CheckedChanged);
			// 
			// morethan3y
			// 
			this->morethan3y->AutoSize = true;
			this->morethan3y->Location = System::Drawing::Point(399, 583);
			this->morethan3y->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->morethan3y->Name = L"morethan3y";
			this->morethan3y->Size = System::Drawing::Size(82, 18);
			this->morethan3y->TabIndex = 41;
			this->morethan3y->Text = L">3 years";
			this->morethan3y->UseVisualStyleBackColor = true;
			this->morethan3y->CheckedChanged += gcnew System::EventHandler(this, &Sberform::morethan3y_CheckedChanged);
			// 
			// TrackMonth2
			// 
			this->TrackMonth2->Enabled = false;
			this->TrackMonth2->LargeChange = 1;
			this->TrackMonth2->Location = System::Drawing::Point(17, 59);
			this->TrackMonth2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->TrackMonth2->Maximum = 36;
			this->TrackMonth2->Minimum = 1;
			this->TrackMonth2->Name = L"TrackMonth2";
			this->TrackMonth2->Size = System::Drawing::Size(612, 45);
			this->TrackMonth2->TabIndex = 44;
			this->TrackMonth2->Value = 1;
			this->TrackMonth2->Scroll += gcnew System::EventHandler(this, &Sberform::trackBar1_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 93);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 14);
			this->label4->TabIndex = 45;
			this->label4->Text = L"От 1 месяца";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &Sberform::label4_Click_5);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(561, 93);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 14);
			this->label5->TabIndex = 46;
			this->label5->Text = L"До 3 лет";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &Sberform::label5_Click);
			// 
			// tmVklFooLbl
			// 
			this->tmVklFooLbl->AutoSize = true;
			this->tmVklFooLbl->Location = System::Drawing::Point(153, 42);
			this->tmVklFooLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tmVklFooLbl->Name = L"tmVklFooLbl";
			this->tmVklFooLbl->Size = System::Drawing::Size(180, 14);
			this->tmVklFooLbl->TabIndex = 47;
			this->tmVklFooLbl->Text = L"Вы делаете вклад на срок ";
			this->tmVklFooLbl->Visible = false;
			this->tmVklFooLbl->Click += gcnew System::EventHandler(this, &Sberform::label6_Click);
			// 
			// mLabel
			// 
			this->mLabel->AutoSize = true;
			this->mLabel->ForeColor = System::Drawing::Color::Chocolate;
			this->mLabel->Location = System::Drawing::Point(349, 42);
			this->mLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->mLabel->Name = L"mLabel";
			this->mLabel->Size = System::Drawing::Size(57, 14);
			this->mLabel->TabIndex = 48;
			this->mLabel->Text = L"1 месяц";
			this->mLabel->Visible = false;
			// 
			// otkatPolzunka
			// 
			this->otkatPolzunka->AutoSize = true;
			this->otkatPolzunka->Location = System::Drawing::Point(399, 559);
			this->otkatPolzunka->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->otkatPolzunka->Name = L"otkatPolzunka";
			this->otkatPolzunka->Size = System::Drawing::Size(150, 18);
			this->otkatPolzunka->TabIndex = 49;
			this->otkatPolzunka->Text = L"Откатить ползунок";
			this->otkatPolzunka->UseVisualStyleBackColor = true;
			this->otkatPolzunka->CheckedChanged += gcnew System::EventHandler(this, &Sberform::otkatPolzunka_CheckedChanged);
			// 
			// ErrVklad
			// 
			this->ErrVklad->AutoSize = true;
			this->ErrVklad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ErrVklad->ForeColor = System::Drawing::Color::Red;
			this->ErrVklad->Location = System::Drawing::Point(200, 145);
			this->ErrVklad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ErrVklad->Name = L"ErrVklad";
			this->ErrVklad->Size = System::Drawing::Size(47, 16);
			this->ErrVklad->TabIndex = 50;
			this->ErrVklad->Text = L"label6";
			this->ErrVklad->Visible = false;
			// 
			// ErrADD_credit
			// 
			this->ErrADD_credit->AutoSize = true;
			this->ErrADD_credit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ErrADD_credit->ForeColor = System::Drawing::Color::Red;
			this->ErrADD_credit->Location = System::Drawing::Point(200, 187);
			this->ErrADD_credit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ErrADD_credit->Name = L"ErrADD_credit";
			this->ErrADD_credit->Size = System::Drawing::Size(47, 16);
			this->ErrADD_credit->TabIndex = 51;
			this->ErrADD_credit->Text = L"label6";
			this->ErrADD_credit->Visible = false;
			// 
			// ErrDEC_credit
			// 
			this->ErrDEC_credit->AutoSize = true;
			this->ErrDEC_credit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ErrDEC_credit->ForeColor = System::Drawing::Color::Red;
			this->ErrDEC_credit->Location = System::Drawing::Point(200, 233);
			this->ErrDEC_credit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ErrDEC_credit->Name = L"ErrDEC_credit";
			this->ErrDEC_credit->Size = System::Drawing::Size(47, 16);
			this->ErrDEC_credit->TabIndex = 52;
			this->ErrDEC_credit->Text = L"label6";
			this->ErrDEC_credit->Visible = false;
			this->ErrDEC_credit->Click += gcnew System::EventHandler(this, &Sberform::ErrDEC_credit_Click);
			// 
			// ErrMin_Vklad
			// 
			this->ErrMin_Vklad->AutoSize = true;
			this->ErrMin_Vklad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ErrMin_Vklad->ForeColor = System::Drawing::Color::Red;
			this->ErrMin_Vklad->Location = System::Drawing::Point(200, 295);
			this->ErrMin_Vklad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ErrMin_Vklad->Name = L"ErrMin_Vklad";
			this->ErrMin_Vklad->Size = System::Drawing::Size(408, 16);
			this->ErrMin_Vklad->TabIndex = 53;
			this->ErrMin_Vklad->Text = L"Неснижаемый остаток не может быть меньше 30 000 рублей";
			this->ErrMin_Vklad->Visible = false;
			// 
			// Sberform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(645, 529);
			this->Controls->Add(this->ErrMin_Vklad);
			this->Controls->Add(this->ErrDEC_credit);
			this->Controls->Add(this->ErrADD_credit);
			this->Controls->Add(this->ErrVklad);
			this->Controls->Add(this->otkatPolzunka);
			this->Controls->Add(this->mLabel);
			this->Controls->Add(this->tmVklFooLbl);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TrackMonth2);
			this->Controls->Add(this->morethan3y);
			this->Controls->Add(this->devTools);
			this->Controls->Add(this->percTxtbx);
			this->Controls->Add(this->percLbl);
			this->Controls->Add(this->income);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->min_vklad_b);
			this->Controls->Add(this->min_vklad);
			this->Controls->Add(this->Offline);
			this->Controls->Add(this->Pensioner);
			this->Controls->Add(this->PrintResult);
			this->Controls->Add(this->Capitalization);
			this->Controls->Add(this->DEC_credit);
			this->Controls->Add(this->Check_Box_Dec);
			this->Controls->Add(this->ADD_credit);
			this->Controls->Add(this->Check_Box_Add);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Vklad_Box);
			this->Controls->Add(this->Vklad);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DateTimePicker);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximumSize = System::Drawing::Size(661, 643);
			this->MinimumSize = System::Drawing::Size(661, 568);
			this->Name = L"Sberform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sberform";
			this->Load += gcnew System::EventHandler(this, &Sberform::Sberform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrackMonth2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MinMax(void) {
	// Функция задаёт минимальную и максимальную длительность вклада для DateTimeTacker исходя из выбранного вклада согласно условиям
	time_t nw = time(0);
	tm* tme = localtime(&nw);
	switch (Vklad_Box->SelectedIndex) {
	case 0:
		DateTimePicker->MaxDate = System::DateTime(tme->tm_year + 1900 + 3, tme->tm_mon+1, tme->tm_mday, 0, 0, 0, 0);
		DateTimePicker->MinDate = System::DateTime(tme->tm_year + 1900, tme->tm_mon + 3 + 1, tme->tm_mday, 0, 0, 0, 0);
		break;
	case 1:
		DateTimePicker->MaxDate = System::DateTime(tme->tm_year + 1900 + 3, tme->tm_mon+1, tme->tm_mday, 0, 0, 0, 0);
		DateTimePicker->MinDate = System::DateTime(tme->tm_year + 1900, tme->tm_mon + 1 + 1, tme->tm_mday, 0, 0, 0, 0);
		break;
	case 2:
		DateTimePicker->MaxDate = System::DateTime(tme->tm_year + 1900 + 3, tme->tm_mon+1, tme->tm_mday, 0, 0, 0, 0);
		DateTimePicker->MinDate = System::DateTime(tme->tm_year + 1900, tme->tm_mon + 3 + 1, tme->tm_mday, 0, 0, 0, 0);
		break;
	case 3:
		DateTimePicker->MaxDate = System::DateTime(tme->tm_year + 1900 + 3, tme->tm_mon+1, tme->tm_mday, 0, 0, 0, 0);
		DateTimePicker->MinDate = System::DateTime(tme->tm_year + 1900, tme->tm_mon + 3 + 1, tme->tm_mday, 0, 0, 0, 0);
		break;
	}
};
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Открыть текстбоксы и трек для внесения изменений, если выбран SelectedIndex
	if (Vklad_Box->SelectedIndex != -1) {
		TrackMonth2->Enabled = 1;
		Vklad->Enabled = 1;
		button1->Enabled = 1;
		PrintResult->Enabled = 1;
		income->Enabled = 1;
		Offline->Visible = 1;
		percTxtbx->Enabled = 1;
		tmVklFooLbl->Visible = 1; // Это и ниже - текст у трекманса
		mLabel->Visible = 1;
		label4->Visible = 1;
		label5->Visible = 1;
	}

	ErrADD_credit->Visible = 0;
	ErrDEC_credit->Visible = 0;
	ErrMin_Vklad->Visible = 0;
	ErrVklad->Visible = 0;

	if (Vklad_Box->SelectedIndex > 0) {
		TrackMonth2->Maximum = 36;
	}

	// Открывает видимость элементов в соответствии с типом вклада
	switch (Vklad_Box->SelectedIndex) {
	case 0:
		// Чекбоксы у кнопки
		Offline->Visible = 0;
		Pensioner->Visible = 0;
		Capitalization->Visible = 0;
		// Пополнение вклада (Для 3-го и 4-го)
		Check_Box_Add->Visible = 0;
		Check_Box_Add->Checked = 0;
		ADD_credit->Visible = 0;
		// Снятие со счёта (Для 4-го)
		Check_Box_Dec->Visible = 0;
		Check_Box_Dec->Checked = 0;
		DEC_credit->Visible = 0;
		// Минимальный остаток (Для 4-го)
		min_vklad_b->Visible = 0;
		min_vklad->Visible = 0;

		label4->Text = "От 3 месяцев";
		TrackMonth2->Minimum = 1;
		TrackMonth2->Maximum = 5;
		TrackMonth2->Value = 1;
		mLabel->Text = "3 месяца";
		// Интеррапт дальнейших изменений
		break;

	case 1:
		
		Offline->Visible = 1;
		Pensioner->Visible = 1;
		Capitalization->Visible = 1;

		Check_Box_Add->Visible = 0;
		Check_Box_Add->Checked = 0;
		ADD_credit->Visible = 0;

		Check_Box_Dec->Visible = 0;
		Check_Box_Dec->Checked = 0;
		DEC_credit->Visible = 0;

		min_vklad_b->Visible = 0;
		min_vklad->Visible = 0;

		label4->Text = "От 1 месяца";
		TrackMonth2->Minimum = 1;
		TrackMonth2->Value = 1;
		mLabel->Text = "1 месяц";

		break;

	case 2:

		Offline->Visible = 1;
		Pensioner->Visible = 1;
		Capitalization->Visible = 1;

		Check_Box_Add->Visible = 1;
		Check_Box_Add->Checked = 0;
		ADD_credit->Visible = 0;

		Check_Box_Dec->Visible = 0;
		Check_Box_Dec->Checked = 0;
		DEC_credit->Visible = 0;

		min_vklad_b->Visible = 0;
		min_vklad->Visible = 0;

		label4->Text = "От 3 месяцев";
		TrackMonth2->Minimum = 3;
		TrackMonth2->Value = 3;
		mLabel->Text = "3 месяца";

		break;

	case 3:

		Offline->Visible = 1;
		Pensioner->Visible = 0;
		Capitalization->Visible = 1;

		Check_Box_Add->Visible = 1;
		Check_Box_Add->Checked = 0;
		ADD_credit->Visible = 0;

		Check_Box_Dec->Visible = 1;
		Check_Box_Dec->Checked = 0;
		DEC_credit->Visible = 0;

		min_vklad_b->Visible = 1;
		min_vklad->Visible = 1;

		label4->Text = "От 3 месяцев";
		TrackMonth2->Minimum = 3;
		TrackMonth2->Value = 3;
		mLabel->Text = "3 месяца";

		break;
	}
	// Задаёт минимальную и максимальную длительность вклада для DateTimeTacker
	MinMax();
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // Кнопка
	int g_days, g_months, g_years;
	ErrADD_credit->Visible = 0; ErrDEC_credit->Visible = 0; ErrVklad->Visible = 0; ErrMin_Vklad->Visible = 0;
	if (DateTimePicker->Visible) {
		g_days = DateTimePicker->Value.Day; // дни
		g_months = DateTimePicker->Value.Month; // месяцы
		g_years = DateTimePicker->Value.Year;  // года
	}
	else {
		time_t i = time(0);
		tm* tme = localtime(&i);
		if (Vklad_Box->SelectedIndex) {
			g_months = TrackMonth2->Value + tme->tm_mon + 1;
			g_years = g_months / 12 + (tme->tm_year + 1900);
			g_months %= 12;
			g_days = tme->tm_mday;
		}
		else {
			switch (TrackMonth2->Value) {
			case 1:
			case 2:
				g_months = TrackMonth2->Value*3 + tme->tm_mon + 1;
				g_years = g_months / 12 + (tme->tm_year + 1900);
				g_months %= 12;
				g_days = tme->tm_mday;
				break;
			case 3:
			case 4:
			case 5:
				g_months = (TrackMonth2->Value-2)*12 + tme->tm_mon + 1;
				g_years = g_months / 12 + (tme->tm_year + 1900);
				g_months %= 12;
				g_days = tme->tm_mday;
				break;
			}
		}
	}

	int Vklad_Type = Vklad_Box->SelectedIndex + 1; // тип вклада 1 2 3 4
	double add_credit = 0, dec_credit = 0, Min_vklad = 0, ppl_vklad = 0;
	System::String^ txt; // СЛАйшная строка, в которую пихается строка для проверки

	if (ADD_credit->Visible) {
		txt = ADD_credit->Text; // Пихаем строку, которую хотим проверить
		
		if (txt == L"") { // Если строка пустая, выводим это сообщение
			ErrADD_credit->Visible = 1;
			ErrADD_credit->Text = "Пожалуйста, введите число арабскими цифрами"; 
			return; 
		}
		// Далее проверяем поштучно каждый символ строки,
		for (int i = 0; i < txt->Length; i++) { // если он окажется не цифрой, выводим сообщение о просьбе писать арабскими цифрами
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' && txt[i] != L' ' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9' && txt[i] != L',') 
			{
				ErrADD_credit->Visible = 1;
				ErrADD_credit->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		add_credit = System::Convert::ToInt32(ADD_credit->Text); // +vklad
	}

	if (DEC_credit->Visible) {
		txt = DEC_credit->Text;
		if (txt == L"") { // Проверка на символы в снятии вклада
			ErrDEC_credit->Visible = 1;
			ErrDEC_credit->Text = "Пожалуйста, введите число арабскими цифрами"; 
			return; 
		}
		for (int i = 0; i < txt->Length; i++) {
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' && txt[i] != L' ' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9' && txt[i] != L',')
			{
				ErrDEC_credit->Visible = 1;
				ErrDEC_credit->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		dec_credit = System::Convert::ToInt32(DEC_credit->Text);// - vklad
		// TODO: проверка на значение и проверка на неснижаемый порог 
	}
	int capitalization = Capitalization->Checked; // капитализация
	int pensioner = Pensioner->Checked; // пенсоинер
	int offline = Offline->Checked; // онлайн вклад

	// Проверка на символы в сумме вклада
	txt = Vklad->Text;
	if (txt == L"") {
		ErrVklad->Visible = 1;
		ErrVklad->Text = "Пожалуйста, введите число арабскими цифрами"; 
		return; 
	}
	for (int i = 0; i < txt->Length; i++) {
		if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' && txt[i] != L' ' &&
			txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9' && txt[i] != L',')
		{
			ErrVklad->Visible = 1;
			ErrVklad->Text = "Пожалуйста, введите число арабскими цифрами";
			return;
		};
	}
	ppl_vklad = System::Convert::ToDouble(Vklad->Text); // summa vklada
	
	// Проверка на минимальную сумму вклада
	switch (Vklad_Type)
	{
	case 1:
		if (ppl_vklad < 100000) {
			ErrVklad->Visible = 1;
			ErrVklad->Text = "Минимальная сумма для этого вклада: 100 000 рублей";
			return;
		}
		break;
	case 2:
	case 3:
		if (ppl_vklad < 1000) {
			ErrVklad->Visible = 1;
			ErrVklad->Text = "Минимальная сумма для этого вклада: 1 000 рублей";
			return;
		}
		break;
	case 4:
		if (ppl_vklad < 30000) {
			ErrVklad->Visible = 1;
			ErrVklad->Text = "Минимальная сумма для этого вклада: 30 000 рублей";
			return;
		}
		break;
	default:
		break;
	}

	if (min_vklad->Visible) {
		txt = min_vklad->Text;
		if (txt == L"") { 
			ErrMin_Vklad->Visible = 1;
			ErrMin_Vklad->Text = "Пожалуйста, введите число арабскими цифрами";
			return; 
		}
		for (int i = 0; i < txt->Length; i++) {
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' && txt[i] != L' ' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9' && txt[i] != L',')
			{
				ErrMin_Vklad->Visible = 1;
				ErrMin_Vklad->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		Min_vklad = System::Convert::ToDouble(min_vklad->Text); //неснижаемый порог
		// Проверка на значение неснижаемого порога
		if (Min_vklad < 30000) {
			ErrMin_Vklad->Visible = 1;
			ErrMin_Vklad->Text = "Неснижаемый остаток не может быть меньше 30 000 рублей";
			return;
		}
		else if (Min_vklad > ppl_vklad) {
			ErrMin_Vklad->Visible = 1;
			ErrMin_Vklad->Text = "Неснижаемый остаток не может быть больше суммы вклада";
			return;
		}
		if (DEC_credit->Visible) {
			double fooResult = Switcher(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
			if ( !(fooResult+1) ) {
				ErrDEC_credit->Visible = 1;
				ErrDEC_credit->Text = "Слишком большое снятие при таком неснижаемом остатке\nВведите меньшее снятие со счёта";
				return;
			}
		}
	}
	
	double Result = Switcher(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
	PrintResult->Text = System::Convert::ToString(Result);
	double Income = SwitcherIncome(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
	income->Text = System::Convert::ToString(Income);
	double Perc = GetPerc(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
	percTxtbx->Text = System::Convert::ToString(Perc);
}

private: System::Void Check_Box_Add_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Check_Box_Add->Checked && (Vklad_Box->SelectedIndex == 2 || Vklad_Box->SelectedIndex == 3))
	{
		ADD_credit->Visible = 1;
	}
	else
	{
		ADD_credit->Visible = 0;
	}
}
private: System::Void Check_Box_Dec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Check_Box_Dec->Checked && Vklad_Box->SelectedIndex == 3)
	{
		DEC_credit->Visible = 1;
	}
	else
	{
		DEC_credit->Visible = 0;
	}
}

private: System::Void devTools_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (devTools->Checked) {
		this->Size = System::Drawing::Size(661, 643);
	}
	else {
		this->Size = System::Drawing::Size(661, 568);
		devTools->Visible = 0;
	}
}
private: System::Void morethan3y_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (morethan3y->Checked) {
		MinMax();
		DateTimePicker->MaxDate = System::DateTime(9998, 12, 31, 0, 0, 0, 0);
	}
	else {
		MinMax();
	}
}

private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	int years, month, daus;
	
	time_t i = time(0);
	tm* tme = localtime(&i);
	
	if (!Vklad_Box->SelectedIndex) {
		switch (TrackMonth2->Value) {
		case 1:
		case 2:
			month = TrackMonth2->Value * 3;
			years = month / 12;
			month %= 12;
			break;
		case 3:
		case 4:
		case 5:
			month = (TrackMonth2->Value - 2) * 12;
			years = month / 12;
			month %= 12;
			break;
		}
	}
	else {
		month = TrackMonth2->Value;
		years = month / 12;
		month %= 12;
	}

	daus = tme->tm_mday;
	
	System::String^ sklonenieM;
	switch (month) {
	case 1:
		sklonenieM = " месяц";
		break;
	case 2:
	case 3:
	case 4:
		sklonenieM = " месяца";
		break;
	default:
		sklonenieM = " месяцев";
		break;
	}

	if (years) {
		if (years == 1) {
			mLabel->Text = month != 0 ? System::Convert::ToString(years) + " год " + System::Convert::ToString(month) + sklonenieM : System::Convert::ToString(years) + " год";
		}
		else {
			mLabel->Text = month != 0 ? System::Convert::ToString(years) + " года " + System::Convert::ToString(month) + sklonenieM : System::Convert::ToString(years) + " года";
		}
	}
	else {
		mLabel->Text = System::Convert::ToString(month) + sklonenieM;
	}
}
private: System::Void otkatPolzunka_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (otkatPolzunka->Checked) {
		TrackMonth2->Visible = 0;
		DateTimePicker->Visible = 1;
		tmVklFooLbl->Visible = 0;
		mLabel->Visible = 0;
		label4->Visible = 0;
		label5->Visible = 0;
	}
	else {
		TrackMonth2->Visible = 1;
		DateTimePicker->Visible = 0;
		tmVklFooLbl->Visible = 1;
		mLabel->Visible = 1;
		label4->Visible = 1;
		label5->Visible = 1;
	}
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	devTools->Visible = 1;
}
private: System::Void DEC_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ErrDEC_credit->Visible = 0;
}
private: System::Void ADD_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ErrADD_credit->Visible = 0;
}
private: System::Void Vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ErrVklad->Visible = 0;
	ErrDEC_credit->Visible = 0;
}
private: System::Void min_vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ErrMin_Vklad->Visible = 0;
	ErrDEC_credit->Visible = 0;
}
private: System::Void label4_Click_5(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Capitalization_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Online_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void PrintResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void income_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click_4(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void ResMonths_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click_2(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Sberform_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click_3(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void DateTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void ErrDEC_credit_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
