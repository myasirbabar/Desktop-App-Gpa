#pragma once
#include"gpa.h"
#include"cgpa.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ enter;
	protected:
	private: System::Windows::Forms::ListBox^ option;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->enter = (gcnew System::Windows::Forms::Button());
			this->option = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// enter
			// 
			this->enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->enter->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F));
			this->enter->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->enter->Location = System::Drawing::Point(509, 344);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(107, 46);
			this->enter->TabIndex = 8;
			this->enter->Text = L"Enter";
			this->enter->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &Form1::enter_Click);
			// 
			// option
			// 
			this->option->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->option->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->option->FormattingEnabled = true;
			this->option->ItemHeight = 20;
			this->option->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"GPA Calculator", L"CGPA Calculator" });
			this->option->Location = System::Drawing::Point(513, 249);
			this->option->Name = L"option";
			this->option->Size = System::Drawing::Size(137, 44);
			this->option->TabIndex = 7;
			this->option->DoubleClick += gcnew System::EventHandler(this, &Form1::option_DoubleClick);
			this->option->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::option_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(356, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Select An Option";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(509, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 26);
			this->label2->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Minion Pro", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(753, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 19);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Powered By MYB Software House";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(323, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(439, 49);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Welcome To Score Calculator";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(991, 461);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->option);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
		if (this->option->SelectedItem == "GPA Calculator") {
			Gpa_Cgpa_Calculator::gpa^ ngpa = gcnew Gpa_Cgpa_Calculator::gpa();
			ngpa->ShowDialog();
			label2->ResetText();
		}
		else if (this->option->SelectedItem == "CGPA Calculator") {
			Gpa_Cgpa_Calculator::cgpa^ ncgpa = gcnew Gpa_Cgpa_Calculator::cgpa();
			ncgpa->ShowDialog();
			label2->ResetText();

		}
		else if (this->option->SelectedIndex == -1) {
			label2->Text = "Select an Option";
		}
			option->ClearSelected();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void option_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (e->KeyChar == (char)13)
				enter->PerformClick();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void option_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try {
			enter->PerformClick();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}
