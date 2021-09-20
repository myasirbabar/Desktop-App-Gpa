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
	/// Summary for cgpa
	/// </summary>
	public ref class cgpa : public System::Windows::Forms::Form
	{
	public:
		cgpa(void)
		{
			InitializeComponent();
			output->Hide();
			move->Hide();
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
		~cgpa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::GroupBox^ move;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::GroupBox^ output;
	private: System::Windows::Forms::Label^ status;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ cal;
	private: System::Windows::Forms::GroupBox^ mainbox;
	private: System::Windows::Forms::TextBox^ number;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ enter;

	private: int num, x, y, a, b, c, d, el, f;

	private: array<Label^>^ arr = gcnew array<Label^>(num);
	private: array<TextBox^>^ gpa = gcnew array<TextBox^>(num);
	private: array<TextBox^>^ credit = gcnew array<TextBox^>(num);
	private: GroupBox^ subjects = gcnew GroupBox();
	private: System::Windows::Forms::Label^ grade;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ cgpa_transcript;
	private: System::Windows::Forms::Button^ download;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ namebox;
	private: System::Windows::Forms::TextBox^ sturollno;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ stuname;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->move = (gcnew System::Windows::Forms::GroupBox());
			this->cgpa_transcript = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::GroupBox());
			this->grade = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->status = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cal = (gcnew System::Windows::Forms::Button());
			this->mainbox = (gcnew System::Windows::Forms::GroupBox());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->download = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->namebox = (gcnew System::Windows::Forms::GroupBox());
			this->sturollno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->stuname = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->move->SuspendLayout();
			this->output->SuspendLayout();
			this->mainbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->namebox->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Minion Pro", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(936, 443);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Powered By MYB Software House";
			// 
			// move
			// 
			this->move->Controls->Add(this->cgpa_transcript);
			this->move->Controls->Add(this->back);
			this->move->Controls->Add(this->exit);
			this->move->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->move->Location = System::Drawing::Point(740, 343);
			this->move->Name = L"move";
			this->move->Size = System::Drawing::Size(311, 69);
			this->move->TabIndex = 8;
			this->move->TabStop = false;
			// 
			// cgpa_transcript
			// 
			this->cgpa_transcript->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cgpa_transcript->Location = System::Drawing::Point(200, 19);
			this->cgpa_transcript->Name = L"cgpa_transcript";
			this->cgpa_transcript->Size = System::Drawing::Size(99, 44);
			this->cgpa_transcript->TabIndex = 2;
			this->cgpa_transcript->Text = L"Generate Transcript";
			this->cgpa_transcript->UseVisualStyleBackColor = true;
			this->cgpa_transcript->Click += gcnew System::EventHandler(this, &cgpa::cgpa_transcript_Click);
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
			this->back->Click += gcnew System::EventHandler(this, &cgpa::back_Click);
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
			this->exit->Click += gcnew System::EventHandler(this, &cgpa::exit_Click);
			// 
			// output
			// 
			this->output->Controls->Add(this->grade);
			this->output->Controls->Add(this->label4);
			this->output->Controls->Add(this->status);
			this->output->Controls->Add(this->label3);
			this->output->Controls->Add(this->label2);
			this->output->Controls->Add(this->textBox1);
			this->output->Controls->Add(this->cal);
			this->output->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->Location = System::Drawing::Point(740, 62);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(394, 243);
			this->output->TabIndex = 7;
			this->output->TabStop = false;
			this->output->Text = L"Output";
			// 
			// grade
			// 
			this->grade->AutoSize = true;
			this->grade->Location = System::Drawing::Point(153, 153);
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(0, 26);
			this->grade->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Grade";
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(153, 199);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(0, 26);
			this->status->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 26);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(238, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"CGPA";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(175, 30);
			this->textBox1->TabIndex = 4;
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
			this->cal->Click += gcnew System::EventHandler(this, &cgpa::cal_Click_1);
			// 
			// mainbox
			// 
			this->mainbox->AutoSize = true;
			this->mainbox->Controls->Add(this->number);
			this->mainbox->Controls->Add(this->label1);
			this->mainbox->Controls->Add(this->enter);
			this->mainbox->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.75F));
			this->mainbox->Location = System::Drawing::Point(110, 79);
			this->mainbox->Name = L"mainbox";
			this->mainbox->Size = System::Drawing::Size(418, 199);
			this->mainbox->TabIndex = 6;
			this->mainbox->TabStop = false;
			this->mainbox->Text = L"No of Semesters";
			// 
			// number
			// 
			this->number->Location = System::Drawing::Point(276, 55);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(100, 31);
			this->number->TabIndex = 2;
			this->number->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &cgpa::number_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Number Of Semesters";
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
			this->enter->Click += gcnew System::EventHandler(this, &cgpa::enter_Click_1);
			// 
			// download
			// 
			this->download->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->download->Location = System::Drawing::Point(746, 429);
			this->download->Name = L"download";
			this->download->Size = System::Drawing::Size(99, 44);
			this->download->TabIndex = 5;
			this->download->Text = L"Download";
			this->download->UseVisualStyleBackColor = true;
			this->download->Click += gcnew System::EventHandler(this, &cgpa::download_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(314, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(329, 48);
			this->dataGridView1->TabIndex = 11;
			// 
			// namebox
			// 
			this->namebox->Controls->Add(this->sturollno);
			this->namebox->Controls->Add(this->label6);
			this->namebox->Controls->Add(this->label7);
			this->namebox->Controls->Add(this->stuname);
			this->namebox->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namebox->Location = System::Drawing::Point(740, 88);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(461, 211);
			this->namebox->TabIndex = 10;
			this->namebox->TabStop = false;
			this->namebox->Text = L"Name";
			// 
			// sturollno
			// 
			this->sturollno->Location = System::Drawing::Point(176, 103);
			this->sturollno->Name = L"sturollno";
			this->sturollno->Size = System::Drawing::Size(232, 30);
			this->sturollno->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 26);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Enter Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 26);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Enter Roll No";
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
			this->saveFileDialog1->HelpRequest += gcnew System::EventHandler(this, &cgpa::saveFileDialog1_HelpRequest);
			// 
			// cgpa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1244, 484);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->namebox);
			this->Controls->Add(this->download);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->move);
			this->Controls->Add(this->output);
			this->Controls->Add(this->mainbox);
			this->Name = L"cgpa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CGPA Calculator";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &cgpa::cgpa_Load);
			this->move->ResumeLayout(false);
			this->output->ResumeLayout(false);
			this->output->PerformLayout();
			this->mainbox->ResumeLayout(false);
			this->mainbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->namebox->ResumeLayout(false);
			this->namebox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void cal_Click(System::Object^ sender, System::EventArgs^ e) {
			
	}
	
	private: System::Void enter_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (number->Text == "") {
			MessageBox::Show("Enter Semesters", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Warning);
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
			gpa = gcnew array<TextBox^>(num);
			credit = gcnew array<TextBox^>(num);
			subjects = gcnew GroupBox();

			this->Controls->Add(subjects);
			subjects->Text = "Data Input Box";
			subjects->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14));
			subjects->Size = System::Drawing::Size(500, 100);
			subjects->Location = System::Drawing::Point(120, 78);
			subjects->AutoSize = true;

			Label^ mar = gcnew Label(); Label^ obmarks = gcnew Label();
			mar->Text = "GPA"; obmarks->Text = "Credit Hours";
			mar->Size = System::Drawing::Size(106, 26); obmarks->Size = System::Drawing::Size(160, 26);
			mar->Location = System::Drawing::Point(130, 59); obmarks->Location = System::Drawing::Point(300, 59);
			subjects->Controls->Add(mar); subjects->Controls->Add(obmarks);


			for (int i = 0; i < num; i++) {
				arr[i] = gcnew Label();
				arr[i]->Size = System::Drawing::Size(95, 26);
				arr[i]->Location = System::Drawing::Point(x, y);
				arr[i]->Text = "Semester " + (i + 1);
				subjects->Controls->Add(arr[i]);

				gpa[i] = gcnew TextBox();
				gpa[i]->Size = System::Drawing::Size(100, 26);
				gpa[i]->Location = System::Drawing::Point(a, b);
				gpa[i]->AutoSize = true;
				subjects->Controls->Add(gpa[i]);

				credit[i] = gcnew TextBox();
				credit[i]->Size = System::Drawing::Size(100, 26);
				credit[i]->Location = System::Drawing::Point(c, d);
				credit[i]->AutoSize = true;
				subjects->Controls->Add(credit[i]);

				y += 35;
				b += 35;
				d += 35;

				if (gpa[i]->Text == "") {
					gpa[i]->Text = "0.0";
				}
				if (credit[i]->Text == "") {
					credit[i]->Text = "0";
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

	private: System::Void number_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (e->KeyChar == (char)13)
				enter->PerformClick();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		output->Hide();
		move->Hide();
		cal->Hide();
		subjects->Hide();
		status->ResetText();
		textBox1->ResetText();
		grade->ResetText();
		number->ResetText();
		mainbox->Show();
	
	}

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to quit", "Quit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No) {
			return;
		}
		Application::Exit();
	}

	private: System::Void cgpa_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void cal_Click_1(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < num; i++) {
			if (gpa[i]->Text == "") {
				gpa[i]->Text = "0.0";
			}
			if (credit[i]->Text == "") {
				credit[i]->Text = "0";
			}
		}
		try {
			int check = 0, check2 = 0, check3 = 0;
			String^ grade2;
			double sumcredithours, sumGPA, CGPA;
			sumcredithours = 0;
			sumGPA = 0;

			for (int i = 0; i < num; i++) {
				if ((System::Text::RegularExpressions::Regex::IsMatch(gpa[i]->Text, "[^0-9.]")) || gpa[i]->Text->IndexOf('.') != gpa[i]->Text->LastIndexOf('.'))
				{
					check = 1;
					gpa[i]->ResetText();
				}
				if ((System::Text::RegularExpressions::Regex::IsMatch(credit[i]->Text, "[^0-9.]")) || credit[i]->Text->IndexOf('.') != credit[i]->Text->LastIndexOf('.'))
				{
					check2 = 1;
					credit[i]->ResetText();
				}

			}
			if (check == 1 || check2 == 1 || check3 == 1) {
				MessageBox::Show("Please Enter Numbers Only.", "Cation", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			for (int index = 0; index < num; index++) {

				sumcredithours = sumcredithours + Convert::ToInt32(credit[index]->Text);
				sumGPA = sumGPA + (Convert::ToDouble(gpa[index]->Text) * Convert::ToInt32(credit[index]->Text));
			}

			CGPA = sumGPA / sumcredithours;
			CGPA = Math::Round(CGPA, 2);

			if (CGPA >= 0.00 && CGPA <= 0.99) {
				grade2 = "F";
			}
			else if (CGPA >= 1.00 && CGPA <= 1.69) {
				grade2 = "D";
			}
			else if (CGPA >= 1.70 && CGPA <= 1.99) {
				grade2 = "C-";
			}
			else if (CGPA >= 2.00 && CGPA <= 2.29) {
				grade2 = "C";
			}
			else if (CGPA >= 2.30 && CGPA <= 2.69) {
				grade2 = "C+";
			}
			else if (CGPA >= 2.70 && CGPA <= 2.99) {
				grade2 = "B-";
			}
			else if (CGPA >= 3.00 && CGPA <= 3.29) {
				grade2 = "B";
			}
			else if (CGPA >= 3.30 && CGPA <= 3.69) {
				grade2 = "B+";
			}
			else if (CGPA >= 3.70 && CGPA <= 3.99) {
				grade2 = "A-";
			}
			else if (CGPA >= 4.00) {
				grade2 = "A";
			}

			textBox1->Text = Convert::ToString(CGPA);
			grade->Text = "' " + grade2 + " '";

			if (CGPA < 2.00 && CGPA >= 1.70) {
				status->ResetText();
				status->Text = "Prcreditation";

			}
			else if (CGPA >= 2.00) {
				status->ResetText();
				status->Text = "Congrats you are Passed";
			}
			else if (CGPA < 1.70) {
				status->ResetText();
				status->Text = "Fail. Better luck next time";
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void cgpa_transcript_Click(System::Object^ sender, System::EventArgs^ e) {
		move->Hide();
		mainbox->Hide();
		output->Hide();
		namebox->Show();
		download->Show();
	}

	private: System::Void download_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			num = Convert::ToInt32(number->Text);
			DataTable^ dt = gcnew DataTable();
			DataColumn^ dataColumn1 = gcnew DataColumn();
			DataColumn^ dataColumn2 = gcnew DataColumn();
			DataColumn^ dataColumn3 = gcnew DataColumn();

			dataColumn1->ColumnName = "Semester";
			dataColumn2->ColumnName = "GPA";
			dataColumn3->ColumnName = "Credit Hours";

			dt->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^ >(3) { dataColumn1, dataColumn2, dataColumn3});

			for (int i = 0; i < num; i++)
				dt->Rows->Add(arr[i]->Text, gpa[i]->Text, credit[i]->Text);

			this->dataGridView1->DataSource = dt;

			iTextSharp::text::pdf::PdfPTable^ t1 = gcnew iTextSharp::text::pdf::PdfPTable(dataGridView1->ColumnCount);
			t1->WidthPercentage = 80;

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
			saveFileDialog1->Title = "Save File In ";
			saveFileDialog1->FileName = sturollno->Text + " CGPA.pdf";
			saveFileDialog1->Filter = "PDF |*.pdf";

			if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
				PdfWriter^ w = PdfWriter::GetInstance(doc, gcnew FileStream(saveFileDialog1->FileName, FileMode::Create));
			}
			doc->Open();
			doc->AddAuthor("Auto Generated File");
			doc->AddSubject("PDF file");


			String^ name = ("Name : " + stuname->Text);
			Paragraph^ p1 = gcnew Paragraph(name);
			p1->Font->Size = 10; p1->Font->SetStyle(1); p1->Alignment = Element::ALIGN_LEFT; p1->Font->SetFamily("Times New Roman");

			String^ r = ("Roll no : " + sturollno->Text);
			Paragraph^ p2 = gcnew Paragraph(r);
			p2->Font->Size = 10; p2->Font->SetStyle(1); p2->Alignment = Element::ALIGN_LEFT; p2->Font->SetFamily("Times New Roman");

			String^ t = "TRANSCRIPT";
			Paragraph^ p3 = gcnew Paragraph(t);
			p3->Font->Size = 10; p3->Font->SetStyle(1); p3->Alignment = Element::ALIGN_CENTER; p3->Font->SetFamily("Times New Roman");

			Paragraph^ p4 = gcnew Paragraph(("CGPA  : " + textBox1->Text));
			p4->Font->Size = 10; p4->Font->SetStyle(1); p4->Alignment = Element::ALIGN_LEFT; p4->Font->SetFamily("Times New Roman");

			Paragraph^ p5 = gcnew Paragraph(("Grade : ' " + grade->Text + " '"));
			p5->Font->Size = 10; p5->Font->SetStyle(1); p5->Alignment = Element::ALIGN_LEFT; p5->Font->SetFamily("Times New Roman");

			Paragraph^ p6 = gcnew Paragraph(("Status: " + status->Text));
			p6->Font->Size = 10; p6->Font->SetStyle(1); p6->Alignment = Element::ALIGN_LEFT; p6->Font->SetFamily("Times New Roman");


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
			doc->Add(p6);
			doc->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void saveFileDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
