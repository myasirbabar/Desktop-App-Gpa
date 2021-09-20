#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Gpa_Cgpa_Calculator {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







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
			this->SuspendLayout();
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(1244, 525);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
