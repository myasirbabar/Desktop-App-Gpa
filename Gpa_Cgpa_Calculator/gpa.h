#pragma once

namespace Gpa_Cgpa_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;
	using namespace System::IO;


	/// <summary>
	/// Summary for gpa
	/// </summary>
	public ref class gpa : public System::Windows::Forms::Form
	{
	public:
		gpa(void)
		{
			InitializeComponent();
			output->Hide();
			move->Hide();
			transcript->Hide();
			namebox->Hide();
			download->Hide();
			dataGridView1->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gpa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ enter;
	private: System::Windows::Forms::GroupBox^ mainbox;
	private: System::Windows::Forms::TextBox^ number;

	private: int num, x , y, a ,b ,c, d ,el ,f;

	private: array<Label^>^ arr = gcnew array<Label^>(num);
	private: array<TextBox^>^ marks = gcnew array<TextBox^>(num);
	private: array<TextBox^>^ name = gcnew array<TextBox^>(num);
	private: array<TextBox^>^ credit = gcnew array<TextBox^>(num);
	private: array<TextBox^>^ grade = gcnew array<TextBox^>(num);
	private: array<TextBox^>^ ob = gcnew array<TextBox^>(num);
	private: GroupBox^ subjects = gcnew GroupBox();
	private: GroupBox^ transcript = gcnew GroupBox();

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal;
	private: System::Windows::Forms::GroupBox^ output;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ status;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ move;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ gpa_transcript;
	private: System::Windows::Forms::Button^ download;
	private: System::Windows::Forms::GroupBox^ namebox;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ sturollno;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ stuname;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


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
			this->enter = (gcnew System::Windows::Forms::Button());
			this->mainbox = (gcnew System::Windows::Forms::GroupBox());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::GroupBox());
			this->status = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->move = (gcnew System::Windows::Forms::GroupBox());
			this->gpa_transcript = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->download = (gcnew System::Windows::Forms::Button());
			this->namebox = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sturollno = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->stuname = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->mainbox->SuspendLayout();
			this->output->SuspendLayout();
			this->move->SuspendLayout();
			this->namebox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// enter
			// 
			this->enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->enter->Location = System::Drawing::Point(182, 128);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(77, 41);
			this->enter->TabIndex = 0;
			this->enter->Text = L"Enter";
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &gpa::enter_Click);
			// 
			// mainbox
			// 
			this->mainbox->AutoSize = true;
			this->mainbox->Controls->Add(this->number);
			this->mainbox->Controls->Add(this->label1);
			this->mainbox->Controls->Add(this->enter);
			this->mainbox->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.75F));
			this->mainbox->Location = System::Drawing::Point(178, 120);
			this->mainbox->Name = L"mainbox";
			this->mainbox->Size = System::Drawing::Size(418, 199);
			this->mainbox->TabIndex = 1;
			this->mainbox->TabStop = false;
			this->mainbox->Text = L"No of Subjects";
			// 
			// number
			// 
			this->number->Location = System::Drawing::Point(273, 55);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(100, 31);
			this->number->TabIndex = 2;
			this->number->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &gpa::number_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Number Of Subjects";
			// 
			// cal
			// 
			this->cal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cal->Location = System::Drawing::Point(30, 77);
			this->cal->Name = L"cal";
			this->cal->Size = System::Drawing::Size(94, 40);
			this->cal->TabIndex = 3;
			this->cal->Text = L"Calculate";
			this->cal->UseVisualStyleBackColor = true;
			this->cal->Click += gcnew System::EventHandler(this, &gpa::cal_Click);
			// 
			// output
			// 
			this->output->Controls->Add(this->status);
			this->output->Controls->Add(this->label3);
			this->output->Controls->Add(this->label2);
			this->output->Controls->Add(this->textBox1);
			this->output->Controls->Add(this->cal);
			this->output->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->Location = System::Drawing::Point(808, 104);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(394, 215);
			this->output->TabIndex = 2;
			this->output->TabStop = false;
			this->output->Text = L"Output";
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(124, 157);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(0, 26);
			this->status->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(249, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"GPA";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(175, 30);
			this->textBox1->TabIndex = 4;
			// 
			// move
			// 
			this->move->Controls->Add(this->gpa_transcript);
			this->move->Controls->Add(this->back);
			this->move->Controls->Add(this->exit);
			this->move->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->move->Location = System::Drawing::Point(808, 335);
			this->move->Name = L"move";
			this->move->Size = System::Drawing::Size(329, 69);
			this->move->TabIndex = 3;
			this->move->TabStop = false;
			// 
			// gpa_transcript
			// 
			this->gpa_transcript->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gpa_transcript->Location = System::Drawing::Point(198, 19);
			this->gpa_transcript->Name = L"gpa_transcript";
			this->gpa_transcript->Size = System::Drawing::Size(99, 44);
			this->gpa_transcript->TabIndex = 3;
			this->gpa_transcript->Text = L"Generate Transcript";
			this->gpa_transcript->UseVisualStyleBackColor = true;
			this->gpa_transcript->Click += gcnew System::EventHandler(this, &gpa::gpa_transcript_Click);
			// 
			// back
			// 
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Location = System::Drawing::Point(6, 19);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(80, 44);
			this->back->TabIndex = 1;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &gpa::back_Click);
			// 
			// exit
			// 
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exit->Location = System::Drawing::Point(98, 19);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(76, 44);
			this->exit->TabIndex = 0;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &gpa::exit_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Minion Pro", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1004, 445);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 19);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Powered By MYB Software House";
			// 
			// download
			// 
			this->download->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->download->Location = System::Drawing::Point(808, 410);
			this->download->Name = L"download";
			this->download->Size = System::Drawing::Size(99, 44);
			this->download->TabIndex = 4;
			this->download->Text = L"Download";
			this->download->UseVisualStyleBackColor = true;
			this->download->Click += gcnew System::EventHandler(this, &gpa::download_Click);
			// 
			// namebox
			// 
			this->namebox->Controls->Add(this->listBox2);
			this->namebox->Controls->Add(this->label4);
			this->namebox->Controls->Add(this->sturollno);
			this->namebox->Controls->Add(this->label5);
			this->namebox->Controls->Add(this->label6);
			this->namebox->Controls->Add(this->stuname);
			this->namebox->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namebox->Location = System::Drawing::Point(741, 102);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(461, 211);
			this->namebox->TabIndex = 8;
			this->namebox->TabStop = false;
			this->namebox->Text = L"Name";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8" });
			this->listBox2->Location = System::Drawing::Point(176, 146);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(232, 49);
			this->listBox2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Select Semester";
			// 
			// sturollno
			// 
			this->sturollno->Location = System::Drawing::Point(176, 103);
			this->sturollno->Name = L"sturollno";
			this->sturollno->Size = System::Drawing::Size(232, 30);
			this->sturollno->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Enter Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 26);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Enter Roll No";
			// 
			// stuname
			// 
			this->stuname->Location = System::Drawing::Point(176, 47);
			this->stuname->Name = L"stuname";
			this->stuname->Size = System::Drawing::Size(232, 30);
			this->stuname->TabIndex = 4;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->ShowHelp = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(621, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(619, 73);
			this->dataGridView1->TabIndex = 9;
			// 
			// gpa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1261, 479);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->download);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->move);
			this->Controls->Add(this->output);
			this->Controls->Add(this->mainbox);
			this->Name = L"gpa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GPA Calculator";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &gpa::gpa_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &gpa::gpa_KeyPress);
			this->mainbox->ResumeLayout(false);
			this->mainbox->PerformLayout();
			this->output->ResumeLayout(false);
			this->output->PerformLayout();
			this->move->ResumeLayout(false);
			this->namebox->ResumeLayout(false);
			this->namebox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (number->Text == "") {
			MessageBox::Show("Enter Subjects", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		try {
			mainbox->Hide();
			num = Convert::ToInt32(number->Text);
			 x = 24, y = 100;
			 a = 130, b = 100;
			 c = 310, d = 100;
			 el = 480, f = 100;
			 arr = gcnew array<Label^>(num);
			 marks = gcnew array<TextBox^>(num);
			 credit = gcnew array<TextBox^>(num);
			 ob = gcnew array<TextBox^>(num);
			 subjects = gcnew GroupBox();	

			this->Controls->Add(subjects);
			subjects->Text = "Data Input Box";
			subjects->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14));
			subjects->Size = System::Drawing::Size(500, 100);
			subjects->Location = System::Drawing::Point(120, 78);
			subjects->AutoSize = true;

			Label^ mar = gcnew Label(); Label^ obmarks = gcnew Label(); Label^ ch = gcnew Label();
			mar->Text = "Total Marks"; obmarks->Text = "Obtained Marks"; ch->Text = "Credit Hours";
			mar->Size = System::Drawing::Size(106, 26); obmarks->Size = System::Drawing::Size(160, 26); ch->Size = System::Drawing::Size(160, 26);
			mar->Location = System::Drawing::Point(130,59); obmarks->Location = System::Drawing::Point(300, 59); ch->Location = System::Drawing::Point(480,59);
			subjects->Controls->Add(mar); subjects->Controls->Add(obmarks); subjects->Controls->Add(ch);

			
			for (int i = 0; i < num; i++) {
				arr[i] = gcnew Label();
				arr[i]->Size = System::Drawing::Size(90, 26);
				arr[i]->Location = System::Drawing::Point(x, y);
				arr[i]->Text = "Subject " + (i+1);
				subjects->Controls->Add(arr[i]);

				marks[i] = gcnew TextBox();
				marks[i]->Size = System::Drawing::Size(100, 26);
				marks[i]->Location = System::Drawing::Point(a, b);
				marks[i]->AutoSize = true;
				subjects->Controls->Add(marks[i]);
		
				ob[i] = gcnew TextBox();
				ob[i]->Size = System::Drawing::Size(100, 26);
				ob[i]->Location = System::Drawing::Point(c, d);
				ob[i]->AutoSize = true;
				subjects->Controls->Add(ob[i]);

				credit[i] = gcnew TextBox();
				credit[i]->Size = System::Drawing::Size(100, 26);
				credit[i]->Location = System::Drawing::Point(el, f);
				credit[i]->AutoSize = true;
				subjects->Controls->Add(credit[i]);

				y += 35;
				b += 35;
				d += 35;
				f += 35;

				if (marks[i]->Text != "100.0") {
					marks[i]->Text = "100.0";
				}
				if (credit[i]->Text != "0") {
					credit[i]->Text = "0";
				}
				if (ob[i]->Text != "0") {
					ob[i]->Text = "0";
				}
			}
			subjects->Show();
			cal->Show();
			output->Show();
			move->Show();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void gpa_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
	}
	private: System::Void number_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (e->KeyChar == (char)13)
				enter->PerformClick();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void gpa_Load(System::Object^ sender, System::EventArgs^ e) {
		cal->Hide();
	}
	private: System::Void cal_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < num; i++) {
			if (marks[i]->Text == "") {
				marks[i]->Text = "100.0";
			}
			if (credit[i]->Text == "") {
				credit[i]->Text = "0";
			}
			if (ob[i]->Text == "") {
				ob[i]->Text = "0.0";
			}
		}

		int check = 0, check2 = 0 , check3 = 0;
		double sumch = 0, sumqp = 0, qualitypoints = 0, GPA = 0;
		double percentage = 0;
		for (int i = 0; i < num; i++) {
			if ((System::Text::RegularExpressions::Regex::IsMatch(marks[i]->Text, "[^0-9.]")) || marks[i]->Text->IndexOf('.') != marks[i]->Text->LastIndexOf('.'))
			{
				check = 1;
				marks[i]->ResetText();
			}
			if ((System::Text::RegularExpressions::Regex::IsMatch(ob[i]->Text, "[^0-9.]")) || ob[i]->Text->IndexOf('.') != ob[i]->Text->LastIndexOf('.'))
			{
				check2 = 1;
				ob[i]->ResetText();
			}
			if ((System::Text::RegularExpressions::Regex::IsMatch(credit[i]->Text, "[^0-9]")) || credit[i]->Text->IndexOf('.') != credit[i]->Text->LastIndexOf('.'))
			{
				check3 = 1;
				credit[i]->ResetText();
			}
		}
		if (check == 1 || check2 == 1 || check3 == 1) {
			MessageBox::Show("Please Enter Numbers Only.", "Cation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		for (int index = 0; index < num; index++) {
			sumch += Convert::ToInt32(credit[index]->Text);

			percentage = (Convert::ToDouble(ob[index]->Text) / Convert::ToDouble(marks[index]->Text) ) * 100;

			if (percentage <= 100 && percentage >= 85)
			{
				qualitypoints = 4 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 85 && percentage >= 80) {
				qualitypoints = 3.70 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 80 && percentage >= 75) {
				qualitypoints = 3.30 * Convert::ToInt32(credit[index]->Text);
			}
			else if (percentage < 75 && percentage >= 70) {

				qualitypoints = 3.00 * Convert::ToInt32(credit[index]->Text);
			}
			else if (percentage < 70 && percentage >= 65) {
				qualitypoints = 2.70 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 65 && percentage >= 61) {
				qualitypoints = 2.30 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 61 && percentage >= 58) {
				qualitypoints = 2.00 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 58 && percentage >= 55) {
				qualitypoints = 1.70 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 55 && percentage >= 50) {
				qualitypoints = 1.00 * Convert::ToInt32(credit[index]->Text);

			}
			else if (percentage < 50 && percentage >= 0) {
				qualitypoints = 0.00 * Convert::ToInt32(credit[index]->Text);
			}

			sumqp = sumqp + qualitypoints;
		}
		GPA = sumqp / sumch;
		GPA = Math::Round(GPA, 2);
		textBox1->Text = Convert::ToString(GPA);

		if (GPA < 2.00 && GPA >= 1.70) {
			status->ResetText();
			status->Text = "Probation";

		}
		else if (GPA >= 2.00) {
			status->ResetText();
			status->Text = "Congrats you are Passed";
		}
		else if (GPA < 1.70) {
			status->ResetText();
			status->Text = "Fail. Better luck next time";
		}
	}
	
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to quit", "Quit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No) {
			return;
		}
		Application::Exit();
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		
		output->Hide();
		move->Hide();
		cal->Hide();
		subjects->Hide();
		status->ResetText();
		textBox1->ResetText();
		number->ResetText();
		mainbox->Show();
	}

	private: System::Void gpa_transcript_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			num = Convert::ToInt32(number->Text);
			el = 480, f = 100;
			a = 130, b = 100;
			grade = gcnew array<TextBox^>(num);
			name = gcnew array<TextBox^>(num);
			mainbox->Hide();
			output->Hide();
			subjects->Hide();
			move->Hide();
			
			transcript = gcnew GroupBox();

			this->Controls->Add(transcript);
			transcript->Text = "Data Input Box";
			transcript->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14));
			transcript->Size = System::Drawing::Size(500, 100);
			transcript->Location = System::Drawing::Point(120, 78);
			transcript->AutoSize = true;

			Label^ mar = gcnew Label(); Label^ obmarks = gcnew Label(); Label^ ch = gcnew Label();
			mar->Text = "Subject name"; obmarks->Text = "Obtained Marks"; ch->Text = "Grade";
			mar->Size = System::Drawing::Size(160, 26); obmarks->Size = System::Drawing::Size(160, 26); ch->Size = System::Drawing::Size(160, 26);
			mar->Location = System::Drawing::Point(130, 59); obmarks->Location = System::Drawing::Point(300, 59); ch->Location = System::Drawing::Point(480, 59);
			transcript->Controls->Add(mar); transcript->Controls->Add(obmarks); transcript->Controls->Add(ch);


			for (int i = 0; i < num; i++) {
				transcript->Controls->Add(arr[i]);

				name[i] = gcnew TextBox();
				name[i]->Size = System::Drawing::Size(100, 26);
				name[i]->Location = System::Drawing::Point(a, b);
				name[i]->AutoSize = true;
				transcript->Controls->Add(name[i]);

				ob[i]->ReadOnly = true;
				transcript->Controls->Add(ob[i]);	

				grade[i] = gcnew TextBox();
				grade[i]->Size = System::Drawing::Size(100, 26);
				grade[i]->Location = System::Drawing::Point(el, f);
				grade[i]->AutoSize = true;
				transcript->Controls->Add(grade[i]);

				f += 35;
				b += 35;

				if (marks[i]->Text != "")
					marks[i]->Text = "";
			}

			for (int index = 0; index < num; index++) {
				if (Convert::ToDouble(ob[index]->Text) == 0 && Convert::ToInt32(ob[index]->Text) <= 49) {
					grade[index]->Text = "F";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 50 && Convert::ToInt32(ob[index]->Text) <= 54) {
					grade[index]->Text = "D";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 55 && Convert::ToInt32(ob[index]->Text) <= 57) {
					grade[index]->Text = "C-";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 58 && Convert::ToInt32(ob[index]->Text) <= 60) {
					grade[index]->Text = "C";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 61 && Convert::ToInt32(ob[index]->Text) <= 64) {
					grade[index]->Text = "C+";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 65 && Convert::ToInt32(ob[index]->Text) <= 69) {
					grade[index]->Text = "B-";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 70 && Convert::ToInt32(ob[index]->Text) <= 74) {
					grade[index]->Text = "B";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 75 && Convert::ToInt32(ob[index]->Text) <= 79) {
					grade[index]->Text = "B+";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 80 && Convert::ToInt32(ob[index]->Text) <= 84) {
					grade[index]->Text = "A-";
				}
				else if (Convert::ToInt32(ob[index]->Text) >= 85 && Convert::ToInt32(ob[index]->Text) <= 100) {
					grade[index]->Text = "A";
				}
				grade[index]->ReadOnly = true;
			}
			transcript->Show();
			namebox->Show();
			download->Show();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	
	private: System::Void download_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			num = Convert::ToInt32(number->Text);
			DataTable^ dt = gcnew DataTable();
			DataColumn^ dataColumn1 = gcnew DataColumn();
			DataColumn^ dataColumn2 = gcnew DataColumn();
			DataColumn^ dataColumn3 = gcnew DataColumn();
			DataColumn^ dataColumn4 = gcnew DataColumn();

			dataColumn1->ColumnName = "Subject";
			dataColumn2->ColumnName = "Marks";
			dataColumn3->ColumnName = "Credit Hours";
			dataColumn4->ColumnName = "Grade";
			
			dt->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^ >(4){dataColumn1, dataColumn2, dataColumn3, dataColumn4});
			
			for (int i = 0; i < num; i++) 
				dt->Rows->Add(name[i]->Text, ob[i]->Text, credit[i]->Text, grade[i]->Text);
			
			//dataGridView1->AllowUserToAddRows
			this->dataGridView1->DataSource = dt;

			iTextSharp::text::pdf::PdfPTable^ t1 = gcnew iTextSharp::text::pdf::PdfPTable(dataGridView1->ColumnCount);
			t1->WidthPercentage = 100;

			for each (DataGridViewColumn ^ var in dataGridView1->Columns)
			{
				t1->AddCell(var->HeaderText);
			}
			t1->CompleteRow();

			for each (DataGridViewRow ^ row in dataGridView1->Rows)
			{
				for each (DataGridViewCell ^ cell in row->Cells)
				{
					t1->AddCell(cell->Value->ToString());
				}
				t1->CompleteRow();
			}

			Document^ doc = gcnew Document(PageSize::A4, 40, 20, 42, 35);


			saveFileDialog1->InitialDirectory = "C:\\Desktop";
			saveFileDialog1->Title = "Save File In";
			saveFileDialog1->FileName = sturollno->Text + " GPA.pdf";
			saveFileDialog1->Filter = "PDF |*.pdf";

			if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
				PdfWriter^ w = PdfWriter::GetInstance(doc, gcnew FileStream(saveFileDialog1->FileName, FileMode::Create));
			}
			doc->Open();
			doc->AddAuthor("Auto Generated File");
			doc->AddSubject("PDF file");

			
			String^ name = ("Name : " + stuname->Text);
			Paragraph^ p1 = gcnew Paragraph(name);
			p1->Font->Size = 10;p1->Font->SetStyle(1);p1->Alignment = Element::ALIGN_LEFT;p1->Font->SetFamily("Times New Roman");

			String^ r = ("Roll no : " + sturollno->Text);
			Paragraph^ p2 = gcnew Paragraph(r);
			p2->Font->Size = 10;p2->Font->SetStyle(1);p2->Alignment = Element::ALIGN_LEFT;p2->Font->SetFamily("Times New Roman");

			String^ t = "TRANSCRIPT SEMESTER " + listBox2->SelectedItem;
			Paragraph^ p3 = gcnew Paragraph(t);
			p3->Font->Size = 10;p3->Font->SetStyle(1); p3->Alignment = Element::ALIGN_CENTER;p3->Font->SetFamily("Times New Roman");

			Paragraph^ p4 = gcnew Paragraph(("GPA  : " + textBox1->Text));
			p4->Font->Size = 10; p4->Font->SetStyle(1); p4->Alignment = Element::ALIGN_LEFT; p4->Font->SetFamily("Times New Roman");

			Paragraph^ p5 = gcnew Paragraph(("Status: " + status->Text));
			p5->Font->Size = 10; p5->Font->SetStyle(1); p5->Alignment = Element::ALIGN_LEFT; p5->Font->SetFamily("Times New Roman");


			doc->AddTitle(sturollno->Text + " GPA.pdf");
			doc->AddCreationDate();
			doc->Add(p1);
			doc->Add(p2);
			doc->Add(gcnew Paragraph("\r\n"));
			doc->Add(p3);
			doc->Add(gcnew Paragraph("\r\n"));
			doc->Add(t1);
			doc->Add(gcnew Paragraph("\r\n"));
			doc->Add(p4);
			doc->Add(p5);
			doc->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
