#pragma once
#include "Functions.h"
#include <ctime>

namespace Sber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Sberform
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ devTools;
	private: System::Windows::Forms::CheckBox^ morethan3y;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->devTools = (gcnew System::Windows::Forms::CheckBox());
			this->morethan3y = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// DateTimePicker
			// 
			this->DateTimePicker->Location = System::Drawing::Point(13, 50);
			this->DateTimePicker->Name = L"DateTimePicker";
			this->DateTimePicker->Size = System::Drawing::Size(376, 20);
			this->DateTimePicker->TabIndex = 13;
			this->DateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Sberform::DateTimePicker_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"¬ведите сумму вклада";
			this->label1->Click += gcnew System::EventHandler(this, &Sberform::label1_Click_1);
			// 
			// Vklad
			// 
			this->Vklad->Location = System::Drawing::Point(217, 85);
			this->Vklad->Name = L"Vklad";
			this->Vklad->Size = System::Drawing::Size(172, 20);
			this->Vklad->TabIndex = 15;
			this->Vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::Vklad_TextChanged);
			// 
			// Vklad_Box
			// 
			this->Vklad_Box->FormattingEnabled = true;
			this->Vklad_Box->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"¬клад ƒополнительный процент", L"¬клад —охран€й",
					L"¬клад ѕополн€й", L"¬клад ”правл€й"
			});
			this->Vklad_Box->Location = System::Drawing::Point(13, 12);
			this->Vklad_Box->Name = L"Vklad_Box";
			this->Vklad_Box->Size = System::Drawing::Size(376, 21);
			this->Vklad_Box->TabIndex = 16;
			this->Vklad_Box->Text = L"¬ыберите вклад";
			this->Vklad_Box->SelectedIndexChanged += gcnew System::EventHandler(this, &Sberform::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"¬џ„»—Ћ»“№";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sberform::button1_Click_1);
			// 
			// Check_Box_Add
			// 
			this->Check_Box_Add->AutoSize = true;
			this->Check_Box_Add->Location = System::Drawing::Point(13, 127);
			this->Check_Box_Add->Name = L"Check_Box_Add";
			this->Check_Box_Add->Size = System::Drawing::Size(198, 17);
			this->Check_Box_Add->TabIndex = 22;
			this->Check_Box_Add->Text = L"≈жемес€чное пополнение вклада";
			this->Check_Box_Add->UseVisualStyleBackColor = true;
			this->Check_Box_Add->Visible = false;
			this->Check_Box_Add->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Add_CheckedChanged);
			// 
			// ADD_credit
			// 
			this->ADD_credit->Location = System::Drawing::Point(217, 124);
			this->ADD_credit->Name = L"ADD_credit";
			this->ADD_credit->Size = System::Drawing::Size(172, 20);
			this->ADD_credit->TabIndex = 23;
			this->ADD_credit->Visible = false;
			this->ADD_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::ADD_credit_TextChanged);
			// 
			// Check_Box_Dec
			// 
			this->Check_Box_Dec->AutoSize = true;
			this->Check_Box_Dec->Location = System::Drawing::Point(12, 169);
			this->Check_Box_Dec->Name = L"Check_Box_Dec";
			this->Check_Box_Dec->Size = System::Drawing::Size(247, 17);
			this->Check_Box_Dec->TabIndex = 24;
			this->Check_Box_Dec->Text = L"≈жемес€чное частитчное сн€тие со вклада";
			this->Check_Box_Dec->UseVisualStyleBackColor = true;
			this->Check_Box_Dec->Visible = false;
			this->Check_Box_Dec->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Check_Box_Dec_CheckedChanged);
			// 
			// DEC_credit
			// 
			this->DEC_credit->Location = System::Drawing::Point(278, 169);
			this->DEC_credit->Name = L"DEC_credit";
			this->DEC_credit->Size = System::Drawing::Size(111, 20);
			this->DEC_credit->TabIndex = 25;
			this->DEC_credit->Visible = false;
			this->DEC_credit->TextChanged += gcnew System::EventHandler(this, &Sberform::DEC_credit_TextChanged);
			// 
			// Capitalization
			// 
			this->Capitalization->AutoSize = true;
			this->Capitalization->Location = System::Drawing::Point(12, 238);
			this->Capitalization->Name = L"Capitalization";
			this->Capitalization->Size = System::Drawing::Size(104, 17);
			this->Capitalization->TabIndex = 26;
			this->Capitalization->Text = L" апитализаци€";
			this->Capitalization->UseVisualStyleBackColor = true;
			this->Capitalization->Visible = false;
			this->Capitalization->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Capitalization_CheckedChanged);
			// 
			// PrintResult
			// 
			this->PrintResult->Location = System::Drawing::Point(208, 348);
			this->PrintResult->Name = L"PrintResult";
			this->PrintResult->Size = System::Drawing::Size(181, 20);
			this->PrintResult->TabIndex = 27;
			this->PrintResult->TextChanged += gcnew System::EventHandler(this, &Sberform::PrintResult_TextChanged);
			// 
			// Pensioner
			// 
			this->Pensioner->AutoSize = true;
			this->Pensioner->Location = System::Drawing::Point(13, 261);
			this->Pensioner->Name = L"Pensioner";
			this->Pensioner->Size = System::Drawing::Size(91, 17);
			this->Pensioner->TabIndex = 28;
			this->Pensioner->Text = L"я пенсионер";
			this->Pensioner->UseVisualStyleBackColor = true;
			this->Pensioner->Visible = false;
			// 
			// Offline
			// 
			this->Offline->AutoSize = true;
			this->Offline->Location = System::Drawing::Point(12, 284);
			this->Offline->Name = L"Offline";
			this->Offline->Size = System::Drawing::Size(129, 17);
			this->Offline->TabIndex = 29;
			this->Offline->Text = L"ќформить в офисе\?";
			this->Offline->UseVisualStyleBackColor = true;
			this->Offline->CheckedChanged += gcnew System::EventHandler(this, &Sberform::Online_CheckedChanged);
			// 
			// min_vklad
			// 
			this->min_vklad->Location = System::Drawing::Point(278, 206);
			this->min_vklad->Name = L"min_vklad";
			this->min_vklad->Size = System::Drawing::Size(111, 20);
			this->min_vklad->TabIndex = 30;
			this->min_vklad->Visible = false;
			this->min_vklad->TextChanged += gcnew System::EventHandler(this, &Sberform::min_vklad_TextChanged);
			// 
			// min_vklad_b
			// 
			this->min_vklad_b->AutoSize = true;
			this->min_vklad_b->Location = System::Drawing::Point(12, 206);
			this->min_vklad_b->Name = L"min_vklad_b";
			this->min_vklad_b->Size = System::Drawing::Size(118, 13);
			this->min_vklad_b->TabIndex = 31;
			this->min_vklad_b->Text = L"Ќеснижамый остаток";
			this->min_vklad_b->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Ќакопите всего:";
			this->label2->Click += gcnew System::EventHandler(this, &Sberform::label2_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(102, 381);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"ƒоход по вкладу:";
			// 
			// income
			// 
			this->income->Location = System::Drawing::Point(208, 378);
			this->income->Name = L"income";
			this->income->Size = System::Drawing::Size(181, 20);
			this->income->TabIndex = 34;
			this->income->TextChanged += gcnew System::EventHandler(this, &Sberform::income_TextChanged);
			// 
			// percLbl
			// 
			this->percLbl->AutoSize = true;
			this->percLbl->Location = System::Drawing::Point(65, 426);
			this->percLbl->Name = L"percLbl";
			this->percLbl->Size = System::Drawing::Size(128, 13);
			this->percLbl->TabIndex = 35;
			this->percLbl->Text = L"¬аш процент по вкладу:";
			this->percLbl->Click += gcnew System::EventHandler(this, &Sberform::label4_Click_4);
			// 
			// percTxtbx
			// 
			this->percTxtbx->Location = System::Drawing::Point(208, 423);
			this->percTxtbx->Name = L"percTxtbx";
			this->percTxtbx->Size = System::Drawing::Size(82, 20);
			this->percTxtbx->TabIndex = 36;
			this->percTxtbx->TextChanged += gcnew System::EventHandler(this, &Sberform::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 481);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(105, 17);
			this->checkBox1->TabIndex = 39;
			this->checkBox1->Text = L"maxmin->maxmin";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Sberform::checkBox1_CheckedChanged);
			this->checkBox1->Visible = 0;
			// 
			// devTools
			// 
			this->devTools->AutoSize = true;
			this->devTools->Location = System::Drawing::Point(343, 442);
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
			this->morethan3y->Location = System::Drawing::Point(309, 481);
			this->morethan3y->Name = L"morethan3y";
			this->morethan3y->Size = System::Drawing::Size(66, 17);
			this->morethan3y->TabIndex = 41;
			this->morethan3y->Text = L">3 years";
			this->morethan3y->UseVisualStyleBackColor = true;
			this->morethan3y->CheckedChanged += gcnew System::EventHandler(this, &Sberform::morethan3y_CheckedChanged);
			// 
			// Sberform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 461);
			this->Controls->Add(this->morethan3y);
			this->Controls->Add(this->devTools);
			this->Controls->Add(this->checkBox1);
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
			this->MaximumSize = System::Drawing::Size(425, 540);
			this->MinimumSize = System::Drawing::Size(425, 500);
			this->Name = L"Sberform";
			this->Text = L"Sberform";
			this->Load += gcnew System::EventHandler(this, &Sberform::Sberform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ResMonths_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Sberform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DateTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	devTools->Visible = 1;
}
private: System::Void MinMax(void) {
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
		
		if (Vklad_Box->SelectedIndex == 0) {
			Offline->Visible = 0;
		}
		else {
			Offline->Visible = 1;
		}

		if (Vklad_Box->SelectedIndex == 1)
		{
			Capitalization->Visible = 1;
		}
		else
			if (Vklad_Box->SelectedIndex == 2 || Vklad_Box->SelectedIndex == 3)
			{
				Check_Box_Add->Visible = 1;
				Capitalization->Visible = 1;
			}
		else
		{
			Check_Box_Add->Visible = 0;
			ADD_credit->Visible = 0;
			Check_Box_Add->Checked = 0;
			Capitalization->Visible = 0;
		}
		
		if (Vklad_Box->SelectedIndex == 3)
		{
			Check_Box_Dec->Visible = 1;
			min_vklad_b->Visible = 1;
			min_vklad->Visible = 1;
		}
		else
		{
			Check_Box_Dec->Visible = 0;
			DEC_credit->Visible = 0;
			Check_Box_Dec->Checked = 0;
			min_vklad_b->Visible = 0;
			min_vklad->Visible = 0;
		}

		if (Vklad_Box->SelectedIndex > 0 && Vklad_Box->SelectedIndex < 3)
		{
			Pensioner->Visible = 1;
		}
		else
		{
			Pensioner->Visible = 0;
		}

		MinMax();
}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //  нопка
		int g_days = DateTimePicker->Value.Day; // дни
		int g_months = DateTimePicker->Value.Month; // мес€цы
		int g_years = DateTimePicker->Value.Year;  // года
		int Vklad_Type = Vklad_Box->SelectedIndex + 1; // тип вклада 1 2 3 4
		double add_credit = 0, dec_credit = 0, Min_vklad = 0, ppl_vklad = 0;
		if (ADD_credit->Visible) {
			add_credit = System::Convert::ToInt32(ADD_credit->Text); // +vklad
		}
		if (DEC_credit->Visible) {
			dec_credit = System::Convert::ToInt32(DEC_credit->Text);// - vklad
		}
		int capitalization = Capitalization->Checked; // капитализаци€
		int pensioner = Pensioner->Checked; // пенсоинер
		int offline = Offline->Checked; // онлайн вклад
		ppl_vklad = System::Convert::ToDouble(Vklad->Text); // summa vklada
		if (min_vklad->Visible) {
			Min_vklad = System::Convert::ToDouble(min_vklad->Text); //неснижаемый порог
		}
		double Result = Switcher(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
		PrintResult->Text = System::Convert::ToString(Result);
		double Income = SwitcherIncome(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
		income->Text = System::Convert::ToString(Income);
		double Perc = GetPerc(ppl_vklad, Vklad_Type, g_years, g_months, g_days, add_credit, dec_credit, pensioner, capitalization, offline, Min_vklad);
		percTxtbx->Text = System::Convert::ToString(Perc);
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void DEC_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Capitalization_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Online_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PrintResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void min_vklad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void income_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ADD_credit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_4(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		DateTimePicker->MinDate = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
		DateTimePicker->MaxDate = System::DateTime(9998, 12, 31, 0, 0, 0, 0);
	}
	else {
		MinMax();
	}
}
private: System::Void devTools_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (devTools->Checked) {
		this->Size = System::Drawing::Size(425, 540);
	}
	else {
		this->Size = System::Drawing::Size(425, 500);
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
};
}
