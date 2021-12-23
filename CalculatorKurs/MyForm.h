#pragma once
#include <iostream>
//#include <math.h>
#include <ctgmath>
#include "Header.h"

Number number1;

namespace CalculatorKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		float a, b;
		int oper;
		bool znak = true;
		int co = 0;
		int tr = 0;


	private: System::Void sys()
	{
		if (textBox1->Text->Contains(",") == true)
		{
			textBox1->Text = "Ошибка-возможен перевод только целого числа!";
		}
		else
		{
			if (textBox1->Text->Length >= 11)
			{
				textBox1->Text = "Ошибка - переполнение памяти калькулятора!";
			}
			else
			{
				int i = 0;
				if (tr == 0)
				{
					i = Convert::ToInt32(textBox1->Text);
					tr = i;
					number1.Set(i);
				}
				else
				{
					i = tr;
				}
				switch (co)
				{
				case (1):
					textBox1->Text = Convert::ToString(i, 2);
					break;
				case (2):
					textBox1->Text = Convert::ToString(i, 8);
					break;
				case (3):
					textBox1->Text = Convert::ToString(i, 16);
					break;
				case (4):
					textBox1->Text = Convert::ToString(i, 10);
					break;
				default:
					break;
				}
			}
		}


	};
	private: System::Void calculate()
	{
		double x;
		double x1;
		double x3;
		double x4;
		double c;
		double d;
		double n;
		double n1;
		double n2;
		switch (oper)
		{
		case 1:
			b = a + float::Parse(textBox1->Text);
			number1.Set(b);
			textBox1->Text = number1.Out();
			break;
		case 2:
			b = a - float::Parse(textBox1->Text);
			number1.Set(b);
			textBox1->Text = number1.Out();
			break;
		case 3:
			b = a * float::Parse(textBox1->Text);
			number1.Set(b);
			textBox1->Text = number1.Out();
			break;
		case 4:
			try {
				if (float::Parse(textBox1->Text) == 0)
				{
					throw " ";
				}
				b = a / float::Parse(textBox1->Text);
				number1.Set(b);
				textBox1->Text = number1.Out();
			}
			catch (string) {
				textBox1->Text = "Делить на 0 нельзя!";
			}
			break;
		case 5:
			x = a;
			x1 = 0;
			x1 = Math::Cos(x);
			number1.Set(x1);
			textBox1->Text = number1.Out();
			break;
		case 6:
			x3 = a;
			x4 = 0;
			x4 = Math::Sin(x3);
			number1.Set(x4);
			textBox1->Text = number1.Out();
			break;
		case 7:
			b = 1 / a;
			number1.Set(b);
			textBox1->Text = number1.Out();
			break;
		case 8:
			c = a * 3.14;
			number1.Set(c);
			textBox1->Text = number1.Out();
			break;
		case 9:
			d = 0;
			d = Math::Pow(a, float::Parse(textBox1->Text));
			number1.Set(d);
			textBox1->Text = number1.Out();
			break;
		case 10:
			n = 0;
			n = Math::Sqrt(a);
			number1.Set(n);
			textBox1->Text = number1.Out();
			break;
		case 11:
			n1 = 0;
			n1 = Math::Log(a);
			number1.Set(n1);
			textBox1->Text = number1.Out();
			break;
		case 12:
			n2 = 0;
			n2 = Math::Log(float::Parse(textBox1->Text), a);
			number1.Set(n2);
			textBox1->Text = number1.Out();
			break;
		default:
			break;
		}
	};

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;

	protected:








	private:

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(308, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 38);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(366, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 38);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(424, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(250, 147);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 38);
			this->button5->TabIndex = 7;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(308, 147);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 38);
			this->button6->TabIndex = 8;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(366, 147);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 38);
			this->button7->TabIndex = 9;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(424, 147);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 38);
			this->button8->TabIndex = 10;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(250, 191);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 38);
			this->button9->TabIndex = 11;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(308, 191);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 38);
			this->button10->TabIndex = 12;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(366, 191);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(52, 38);
			this->button11->TabIndex = 13;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(424, 191);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(52, 38);
			this->button12->TabIndex = 14;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(250, 235);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(52, 38);
			this->button13->TabIndex = 15;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(308, 235);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(52, 38);
			this->button14->TabIndex = 16;
			this->button14->Text = L"+/-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(366, 235);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(52, 38);
			this->button15->TabIndex = 17;
			this->button15->Text = L",";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(424, 235);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(52, 38);
			this->button16->TabIndex = 18;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(250, 298);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(52, 38);
			this->button17->TabIndex = 19;
			this->button17->Text = L"cos";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(308, 298);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(52, 38);
			this->button18->TabIndex = 20;
			this->button18->Text = L"Ln";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(366, 298);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(52, 38);
			this->button19->TabIndex = 21;
			this->button19->Text = L"x^y";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(424, 298);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(52, 38);
			this->button20->TabIndex = 22;
			this->button20->Text = L"1/x";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(250, 342);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(52, 38);
			this->button21->TabIndex = 23;
			this->button21->Text = L"sin";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(308, 342);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(52, 38);
			this->button22->TabIndex = 24;
			this->button22->Text = L"log";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(366, 342);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(52, 38);
			this->button23->TabIndex = 25;
			this->button23->Text = L"sqrt";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(424, 342);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(52, 38);
			this->button24->TabIndex = 26;
			this->button24->Text = L"pi";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(250, 398);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(226, 29);
			this->button27->TabIndex = 33;
			this->button27->Text = L"=";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(3, 145);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(112, 17);
			this->radioButton1->TabIndex = 34;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Decimal system";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(3, 168);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(109, 17);
			this->radioButton2->TabIndex = 35;
			this->radioButton2->Text = L"Binary system";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(3, 191);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(109, 17);
			this->radioButton3->TabIndex = 36;
			this->radioButton3->Text = L"Octal system";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(3, 214);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(112, 17);
			this->radioButton4->TabIndex = 37;
			this->radioButton4->Text = L"Hexadecimal system";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(12, 451);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(109, 23);
			this->button28->TabIndex = 38;
			this->button28->Text = L"About developer";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(464, 48);
			this->textBox1->TabIndex = 39;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(16, 84);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(82, 38);
			this->button25->TabIndex = 40;
			this->button25->Text = L"<-";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(104, 84);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(82, 38);
			this->button26->TabIndex = 41;
			this->button26->Text = L"C";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 42;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 486);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(504, 525);
			this->MinimumSize = System::Drawing::Size(504, 525);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator v1.2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
		{

		}
		else
		{
			co = 1;
			sys();

		}
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 1;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 2;
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		calculate();
		label1->Text = "";
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 3;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 4;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 5;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 6;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 7;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 8;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 9;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + 0;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 4;
				label1->Text = number1.Out() + "/";
				znak = true;
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 3;
				label1->Text = number1.Out() + "*";
				znak = true;
			}
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 2;
				label1->Text = number1.Out() + "-";
				znak = true;
			}
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 1;
				label1->Text = number1.Out() + "+";
				znak = true;
			}
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0) {
			if (znak == true)
			{
				textBox1->Text = "-" + textBox1->Text;
				znak = false;
			}
			else if (znak == false)
			{
				textBox1->Text = textBox1->Text->Replace("-", "");
				znak = true;
			}
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				textBox1->Text = textBox1->Text + ",";
			}
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 5;
				label1->Text = "cos(" + number1.Out() + ")";
				znak = true;
			}
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				if (znak == true)
				{
					a = float::Parse(textBox1->Text);
					number1.Set(a);
					textBox1->Clear();
					oper = 11;
					label1->Text = "Ln(" + number1.Out() + ")";
					znak = true;
				}
				else
				{
					textBox1->Text = "Ошибка - аргумент логарифма должен иметь положительное значение!";
				}
			}
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 9;
				label1->Text = number1.Out() + "^";
				znak = true;
			}
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 7;
				label1->Text = "1/" + number1.Out();
				znak = true;
			}
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 6;
				label1->Text = "sin(" + number1.Out() + ")";
				znak = true;
			}
		}
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				if (znak == true)
				{
					a = float::Parse(textBox1->Text);
					number1.Set(a);
					textBox1->Clear();
					oper = 12;
					label1->Text = "Log" + number1.Out() + "( )";
					znak = true;
				}
				else
				{
					textBox1->Text = "Ошибка - аргумент логарифма должен иметь положительное значение!";
				}
			}
		}
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				if (znak == true)
				{
					a = float::Parse(textBox1->Text);
					number1.Set(a);
					textBox1->Clear();
					oper = 10;
					label1->Text = "sqrt(" + number1.Out() + ")";
					znak = true;
				}
				else
				{
					textBox1->Text = "Ошибка - невозможно извлечь корень из отрицательного числа!";
				}
			}
		}
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true || radioButton3->Checked == true || radioButton4->Checked == true)
		{
			textBox1->Text = "Ошибка - перейдите в 10-ную систему счисления!";
		}
		else
		{
			if (textBox1->Text->Length != 0) {
				a = float::Parse(textBox1->Text);
				number1.Set(a);
				textBox1->Clear();
				oper = 8;
				label1->Text = number1.Out() + "pi";
				znak = true;
			}
		}
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		textBox1->Clear();
		for (int i = 0; i < lenght; i++)
		{
			textBox1->Text = textBox1->Text + text[i];
		}
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		label1->Text = "";
		radioButton1->Checked = true;
		tr = 0;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
		{

		}
		else
		{
			co = 4;
			sys();

		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
		{

		}
		else
		{
			co = 2;
			sys();

		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)
		{

		}
		else
		{
			co = 3;
			sys();

		}
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Работу выполнил студент 2-го курса",
			"Информация об авторе",
			MessageBoxButtons::OK);
	}
	};
}
