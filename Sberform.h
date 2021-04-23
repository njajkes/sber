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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TrackMonth2))->BeginInit();
			this->SuspendLayout();
			// 
			// DateTimePicker
			// 
			this->DateTimePicker->Location = System::Drawing::Point(13, 55);
			this->DateTimePicker->Name = L"DateTimePicker";
			this->DateTimePicker->Size = System::Drawing::Size(409, 20);
			this->DateTimePicker->TabIndex = 13;
			this->DateTimePicker->Visible = false;
			this->DateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Sberform::DateTimePicker_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Введите сумму вклада";
			this->label1->Click += gcnew System::EventHandler(this, &Sberform::label1_Click_1);
			// 
			// Vklad
			// 
			this->Vklad->Enabled = false;
			this->Vklad->Location = System::Drawing::Point(150, 111);
			this->Vklad->Name = L"Vklad";
			this->Vklad->Size = System::Drawing::Size(272, 20);
			this->Vklad->TabIndex = 15;
			this->Vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::Vklad_TextChanged);
			// 
			// Vklad_Box
			// 
			this->Vklad_Box->FormattingEnabled = true;
			this->Vklad_Box->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Вклад Дополнительный процент", L"Вклад Сохраняй",
					L"Вклад Пополняй", L"Вклад Управляй"
			});
			this->Vklad_Box->Location = System::Drawing::Point(13, 12);
			this->Vklad_Box->Name = L"Vklad_Box";
			this->Vklad_Box->Size = System::Drawing::Size(409, 21);
			this->Vklad_Box->TabIndex = 16;
			this->Vklad_Box->Text = L"Выберите вклад";
			this->Vklad_Box->SelectedIndexChanged += gcnew System::EventHandler(this, &Sberform::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(12, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ВЫЧИСЛИТЬ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sberform::button1_Click_1);
			// 
			// Check_Box_Add
			// 
			this->Check_Box_Add->AutoSize = true;
			this->Check_Box_Add->Location = System::Drawing::Point(13, 153);
			this->Check_Box_Add->Name = L"Check_Box_Add";
			this->Check_Box_Add->Size = System::Drawing::Size(198, 17);
			this->Check_Box_Add->TabIndex = 22;
			this->Check_Box_Add->Text = L"Ежемесячное пополнение вклада";
			this->Check_Box_Add->UseVisualStyleBackColor = true;
			this->Check_Box_Add->Visible = false;
			this->Check_Box_Add->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Add_CheckedChanged);
			// 
			// ADD_credit
			// 
			this->ADD_credit->Location = System::Drawing::Point(217, 150);
			this->ADD_credit->Name = L"ADD_credit";
			this->ADD_credit->Size = System::Drawing::Size(205, 20);
			this->ADD_credit->TabIndex = 23;
			this->ADD_credit->Visible = false;
			this->ADD_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::ADD_credit_TextChanged);
			// 
			// Check_Box_Dec
			// 
			this->Check_Box_Dec->AutoSize = true;
			this->Check_Box_Dec->Location = System::Drawing::Point(12, 195);
			this->Check_Box_Dec->Name = L"Check_Box_Dec";
			this->Check_Box_Dec->Size = System::Drawing::Size(247, 17);
			this->Check_Box_Dec->TabIndex = 24;
			this->Check_Box_Dec->Text = L"Ежемесячное частитчное снятие со вклада";
			this->Check_Box_Dec->UseVisualStyleBackColor = true;
			this->Check_Box_Dec->Visible = false;
			this->Check_Box_Dec->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Dec_CheckedChanged);
			// 
			// DEC_credit
			// 
			this->DEC_credit->Location = System::Drawing::Point(265, 195);
			this->DEC_credit->Name = L"DEC_credit";
			this->DEC_credit->Size = System::Drawing::Size(157, 20);
			this->DEC_credit->TabIndex = 25;
			this->DEC_credit->Visible = false;
			this->DEC_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::DEC_credit_TextChanged);
			// 
			// Capitalization
			// 
			this->Capitalization->AutoSize = true;
			this->Capitalization->Location = System::Drawing::Point(12, 264);
			this->Capitalization->Name = L"Capitalization";
			this->Capitalization->Size = System::Drawing::Size(104, 17);
			this->Capitalization->TabIndex = 26;
			this->Capitalization->Text = L"Капитализация";
			this->Capitalization->UseVisualStyleBackColor = true;
			this->Capitalization->Visible = false;
			this->Capitalization->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Capitalization_CheckedChanged);
			// 
			// PrintResult
			// 
			this->PrintResult->Enabled = false;
			this->PrintResult->Location = System::Drawing::Point(208, 374);
			this->PrintResult->Name = L"PrintResult";
			this->PrintResult->Size = System::Drawing::Size(181, 20);
			this->PrintResult->TabIndex = 27;
			this->PrintResult->TextChanged += gcnew System::EventHandler(this, &Sberform::PrintResult_TextChanged);
			// 
			// Pensioner
			// 
			this->Pensioner->AutoSize = true;
			this->Pensioner->Location = System::Drawing::Point(13, 287);
			this->Pensioner->Name = L"Pensioner";
			this->Pensioner->Size = System::Drawing::Size(91, 17);
			this->Pensioner->TabIndex = 28;
			this->Pensioner->Text = L"Я пенсионер";
			this->Pensioner->UseVisualStyleBackColor = true;
			this->Pensioner->Visible = false;
			// 
			// Offline
			// 
			this->Offline->AutoSize = true;
			this->Offline->Location = System::Drawing::Point(12, 310);
			this->Offline->Name = L"Offline";
			this->Offline->Size = System::Drawing::Size(129, 17);
			this->Offline->TabIndex = 29;
			this->Offline->Text = L"Оформить в офисе\?";
			this->Offline->UseVisualStyleBackColor = true;
			this->Offline->Visible = false;
			this->Offline->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Online_CheckedChanged);
			// 
			// min_vklad
			// 
			this->min_vklad->Location = System::Drawing::Point(150, 232);
			this->min_vklad->Name = L"min_vklad";
			this->min_vklad->Size = System::Drawing::Size(272, 20);
			this->min_vklad->TabIndex = 30;
			this->min_vklad->Visible = false;
			this->min_vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::min_vklad_TextChanged);
			// 
			// min_vklad_b
			// 
			this->min_vklad_b->AutoSize = true;
			this->min_vklad_b->Location = System::Drawing::Point(12, 232);
			this->min_vklad_b->Name = L"min_vklad_b";
			this->min_vklad_b->Size = System::Drawing::Size(118, 13);
			this->min_vklad_b->TabIndex = 31;
			this->min_vklad_b->Text = L"Неснижамый остаток";
			this->min_vklad_b->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Накопите всего:";
			this->label2->Click += gcnew System::EventHandler(this, &Sberform::label2_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(102, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Доход по вкладу:";
			// 
			// income
			// 
			this->income->Enabled = false;
			this->income->Location = System::Drawing::Point(208, 404);
			this->income->Name = L"income";
			this->income->Size = System::Drawing::Size(181, 20);
			this->income->TabIndex = 34;
			this->income->TextChanged += gcnew System::EventHandler(this, &Sberform::income_TextChanged);
			// 
			// percLbl
			// 
			this->percLbl->AutoSize = true;
			this->percLbl->Location = System::Drawing::Point(65, 452);
			this->percLbl->Name = L"percLbl";
			this->percLbl->Size = System::Drawing::Size(128, 13);
			this->percLbl->TabIndex = 35;
			this->percLbl->Text = L"Ваш процент по вкладу:";
			this->percLbl->Click += gcnew System::EventHandler(this, &Sberform::label4_Click_4);
			// 
			// percTxtbx
			// 
			this->percTxtbx->Enabled = false;
			this->percTxtbx->Location = System::Drawing::Point(208, 449);
			this->percTxtbx->Name = L"percTxtbx";
			this->percTxtbx->Size = System::Drawing::Size(82, 20);
			this->percTxtbx->TabIndex = 36;
			this->percTxtbx->TextChanged += gcnew System::EventHandler(this, &Sberform::textBox1_TextChanged);
			// 
			// devTools
			// 
			this->devTools->AutoSize = true;
			this->devTools->Location = System::Drawing::Point(343, 468);
			this->devTools->Name = L"devTools";
			this->devTools->Size = System::Drawing::Size(70, 17);
			this->devTools->TabIndex = 40;
			this->devTools->Text = L"devTools";
			this->devTools->UseVisualStyleBackColor = true;
			this->devTools->Visible = false;
			this->devTools->CheckedChanged += gcnew System::EventHandler(this, &Sberform::devTools_CheckedChanged);
			// 
			// morethan3y
			// 
			this->morethan3y->AutoSize = true;
			this->morethan3y->Location = System::Drawing::Point(299, 542);
			this->morethan3y->Name = L"morethan3y";
			this->morethan3y->Size = System::Drawing::Size(66, 17);
			this->morethan3y->TabIndex = 41;
			this->morethan3y->Text = L">3 years";
			this->morethan3y->UseVisualStyleBackColor = true;
			this->morethan3y->CheckedChanged += gcnew System::EventHandler(this, &Sberform::morethan3y_CheckedChanged);
			// 
			// TrackMonth2
			// 
			this->TrackMonth2->Enabled = false;
			this->TrackMonth2->LargeChange = 1;
			this->TrackMonth2->Location = System::Drawing::Point(13, 55);
			this->TrackMonth2->Maximum = 36;
			this->TrackMonth2->Minimum = 1;
			this->TrackMonth2->Name = L"TrackMonth2";
			this->TrackMonth2->Size = System::Drawing::Size(409, 45);
			this->TrackMonth2->TabIndex = 44;
			this->TrackMonth2->Value = 1;
			this->TrackMonth2->Scroll += gcnew System::EventHandler(this, &Sberform::trackBar1_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 45;
			this->label4->Text = L"От 1 месяца";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &Sberform::label4_Click_5);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(371, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 46;
			this->label5->Text = L"До 3 лет";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &Sberform::label5_Click);
			// 
			// tmVklFooLbl
			// 
			this->tmVklFooLbl->AutoSize = true;
			this->tmVklFooLbl->Location = System::Drawing::Point(81, 39);
			this->tmVklFooLbl->Name = L"tmVklFooLbl";
			this->tmVklFooLbl->Size = System::Drawing::Size(144, 13);
			this->tmVklFooLbl->TabIndex = 47;
			this->tmVklFooLbl->Text = L"Вы делаете вклад на срок ";
			this->tmVklFooLbl->Visible = false;
			this->tmVklFooLbl->Click += gcnew System::EventHandler(this, &Sberform::label6_Click);
			// 
			// mLabel
			// 
			this->mLabel->AutoSize = true;
			this->mLabel->Location = System::Drawing::Point(231, 39);
			this->mLabel->Name = L"mLabel";
			this->mLabel->Size = System::Drawing::Size(48, 13);
			this->mLabel->TabIndex = 48;
			this->mLabel->Text = L"1 месяц";
			this->mLabel->Visible = false;
			// 
			// otkatPolzunka
			// 
			this->otkatPolzunka->AutoSize = true;
			this->otkatPolzunka->Location = System::Drawing::Point(299, 519);
			this->otkatPolzunka->Name = L"otkatPolzunka";
			this->otkatPolzunka->Size = System::Drawing::Size(123, 17);
			this->otkatPolzunka->TabIndex = 49;
			this->otkatPolzunka->Text = L"Откатить ползунок";
			this->otkatPolzunka->UseVisualStyleBackColor = true;
			this->otkatPolzunka->CheckedChanged += gcnew System::EventHandler(this, &Sberform::otkatPolzunka_CheckedChanged);
			// 
			// Sberform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 491);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(450, 600);
			this->MinimumSize = System::Drawing::Size(450, 530);
			this->Name = L"Sberform";
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
			ADD_credit->Text = "Пожалуйста, введите число арабскими цифрами"; 
			return; 
		}
		// Далее проверяем поштучно каждый символ строки,
		for (int i = 0; i < txt->Length; i++) { // если он окажется не цифрой, выводим сообщение о просьбе писать арабскими цифрами
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9') {
				ADD_credit->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		add_credit = System::Convert::ToInt32(ADD_credit->Text); // +vklad
	}
	if (DEC_credit->Visible) {
		txt = DEC_credit->Text;
		if (txt == L"") { DEC_credit->Text = "Пожалуйста, введите число арабскими цифрами"; return; }
		for (int i = 0; i < txt->Length; i++) {
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9')
			{
				DEC_credit->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		dec_credit = System::Convert::ToInt32(DEC_credit->Text);// - vklad
	}
	int capitalization = Capitalization->Checked; // капитализация
	int pensioner = Pensioner->Checked; // пенсоинер
	int offline = Offline->Checked; // онлайн вклад

	txt = Vklad->Text;
	if (txt == L"") { Vklad->Text = "Пожалуйста, введите число арабскими цифрами"; return; }
	for (int i = 0; i < txt->Length; i++) {
		if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4'&& 
			txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9')
		{
			Vklad->Text = "Пожалуйста, введите число арабскими цифрами";
			return;
		};
	}
	ppl_vklad = System::Convert::ToDouble(Vklad->Text); // summa vklada
	
	if (min_vklad->Visible) {
		txt = min_vklad->Text;
		if (txt == L"") { min_vklad->Text = "Пожалуйста, введите число арабскими цифрами"; return; }
		for (int i = 0; i < txt->Length; i++) {
			if (txt[i] != L'0' && txt[i] != L'1' && txt[i] != L'2' && txt[i] != L'3' && txt[i] != L'4' &&
				txt[i] != L'5' && txt[i] != L'6' && txt[i] != L'7' && txt[i] != L'8' && txt[i] != L'9')
			{
				min_vklad->Text = "Пожалуйста, введите число арабскими цифрами";
				return;
			};
		}
		Min_vklad = System::Convert::ToDouble(min_vklad->Text); //неснижаемый порог
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
		this->Size = System::Drawing::Size(425, 600);
	}
	else {
		this->Size = System::Drawing::Size(425, 530);
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
private: System::Void label4_Click_5(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void DEC_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Capitalization_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Online_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void PrintResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void min_vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void income_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void ADD_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
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
};
}
