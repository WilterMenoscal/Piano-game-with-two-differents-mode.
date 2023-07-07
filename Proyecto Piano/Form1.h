#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	protected:

	protected:

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

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	protected:


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
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			this->BackgroundImage = Image::FromFile("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Fondo.jpg");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(23, 105);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 272);
			this->button1->TabIndex = 0;
			this->button1->Text = L"C";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(88, 105);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 272);
			this->button2->TabIndex = 1;
			this->button2->Text = L"D";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(154, 105);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 272);
			this->button3->TabIndex = 2;
			this->button3->Text = L"E";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(219, 105);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 272);
			this->button4->TabIndex = 3;
			this->button4->Text = L"F";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Cyan;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(284, 105);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 272);
			this->button5->TabIndex = 4;
			this->button5->Text = L"G";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(350, 105);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 272);
			this->button6->TabIndex = 5;
			this->button6->Text = L"A";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(415, 105);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 272);
			this->button7->TabIndex = 6;
			this->button7->Text = L"B";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Fuchsia;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(480, 105);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 272);
			this->button8->TabIndex = 7;
			this->button8->Text = L"C1";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(545, 105);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 272);
			this->button9->TabIndex = 8;
			this->button9->Text = L"D1";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(610, 105);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 272);
			this->button10->TabIndex = 9;
			this->button10->Text = L"E1";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(676, 105);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(61, 272);
			this->button11->TabIndex = 10;
			this->button11->Text = L"F1";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(56, 105);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(61, 160);
			this->button12->TabIndex = 11;
			this->button12->Text = L"C#";
			this->button12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(122, 105);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(61, 160);
			this->button13->TabIndex = 12;
			this->button13->Text = L"D#";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(252, 105);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 160);
			this->button14->TabIndex = 13;
			this->button14->Text = L"F#";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(317, 105);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 160);
			this->button15->TabIndex = 14;
			this->button15->Text = L"G#";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(382, 105);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(61, 160);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Bb";
			this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(513, 105);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(61, 160);
			this->button17->TabIndex = 16;
			this->button17->Text = L"C#1";
			this->button17->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(578, 105);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(61, 160);
			this->button18->TabIndex = 17;
			this->button18->Text = L"D#1";
			this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton2->Location = System::Drawing::Point(168, 37);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(97, 17);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Nota musical";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton3->Location = System::Drawing::Point(397, 37);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(168, 17);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Nota del tambor de acero";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(760, 427);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (radioButton2->Checked) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C.wav");
			player->Load();
			player->PlaySync();
		}
		if (radioButton3->Checked) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C_Drum.wav");
			player->Load();
			player->PlaySync();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/E.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/E_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/F.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/F_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/G.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/G_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/A.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/A_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/B.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/B_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C1_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D1_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/E1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/E1_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/F1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/F1_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C_s.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Cq_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D_s.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Dq_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/F_s.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Fq_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/G_s.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Gq_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Bb.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Bb_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/C_s1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Cq1_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	if (radioButton2->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/D_s1.wav");
		player->Load();
		player->PlaySync();
	}
	if (radioButton3->Checked) {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C:/Users/wilte/OneDrive/Escritorio/Proyecto Piano/Notas musicales/Dq_Drum.wav");
		player->Load();
		player->PlaySync();
	}
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
