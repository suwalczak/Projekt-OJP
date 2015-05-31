#pragma once

namespace Projekt_OJP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class CeremonialnymieczDeithwen : public System::Windows::Forms::Form
	{
	public:
		CeremonialnymieczDeithwen(void)
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
		~CeremonialnymieczDeithwen()
		{
			if (components)
			{
				delete components;
			}
		}

		/*protected:*/
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	public:

		/*protected:

		protected:
		*/

		/*protected:

		protected:

		protected:*/

	public:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CeremonialnymieczDeithwen::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(98, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(286, 30);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ceremonialny miecz Deithwen";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(69, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(289, 68);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Obra¿enia: -30%\r\nSzansa na efekt krytyczny: Rozbrojenie +60%\r\nSzansa na efekt kry"
				L"tyczny: Precyzyjne trafienie +30%";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(69, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(311, 63);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Miecz mo¿na nabyæ w wielu sklepach; nosi je równie¿ wiêkszoœæ Elfów, z którymi bê"
				L"dziesz musia³ siê rozprawiæ w trakcie gry.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(19, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 19);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Efekty:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(19, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Gdzie:";
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(67, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 49);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Miecz stalowy u¿ywany do walki z ludŸmi. Nieskuteczny w walce z wiêkszoœci¹ potwo"
				L"rów. U¿ywany w wied¿miñskich stylach walki.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(25, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Opis:";
			// 
			// pictureBox1
			// 
			/*this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));*/
			this->pictureBox1->Location = System::Drawing::Point(417, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// CeremonialnymieczDeithwen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 330);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CeremonialnymieczDeithwen";
			this->Text = L"Weapons of Witcher";
			this->Load += gcnew System::EventHandler(this, &CeremonialnymieczDeithwen::CeremonialnymieczDeithwen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	public: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	public: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
public: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CeremonialnymieczDeithwen_Load(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Image = Bitmap::FromFile("Grafika\\Miecze stalowe\\ceremonialny_miecz_deithwen.png");
}
};
}
