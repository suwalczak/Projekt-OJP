#pragma once

namespace Projekt_OJP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for �wi�tytop�rZakonu
	/// </summary>
	public ref class �wi�tytop�rZakonu : public System::Windows::Forms::Form
	{
	public:
		�wi�tytop�rZakonu(void)
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
		~�wi�tytop�rZakonu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	public: System::Windows::Forms::Label^  label7;
	private:
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(392, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 290;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(139, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 30);
			this->label7->TabIndex = 289;
			this->label7->Text = L"�wi�ty top�r Zakonu";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(66, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(358, 57);
			this->label6->TabIndex = 288;
			this->label6->Text = L"Obra�enia: 5-10\r\nSzansa na efekt krytyczny: Rozbrojenie +30%";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(68, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(318, 61);
			this->label5->TabIndex = 287;
			this->label5->Text = L"Do kupienia u Harena Brogga w jego domu na Podgrodziu Wyzimy, u p�atnerzy w Wyzim"
				L"ie Klasztornej, u p�atnerza w Wyzimie Handlowej oraz u syna kowala we wsi Odm�ty"
				L".";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(18, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 19);
			this->label4->TabIndex = 286;
			this->label4->Text = L"Efekty:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(18, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 19);
			this->label3->TabIndex = 285;
			this->label3->Text = L"Gdzie:";
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(68, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 64);
			this->label2->TabIndex = 284;
			this->label2->Text = L"Bro� nie jest stosowana w po��czeniu z wied�mi�skimi stylami walki.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(24, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 19);
			this->label1->TabIndex = 283;
			this->label1->Text = L"Opis:";
			// 
			// �wi�tytop�rZakonu
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
			this->Name = L"�wi�tytop�rZakonu";
			this->Text = L"Wepons of Witcher";
			this->Load += gcnew System::EventHandler(this, &�wi�tytop�rZakonu::�wi�tytop�rZakonu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �wi�tytop�rZakonu_Load(System::Object^  sender, System::EventArgs^  e) {

				 pictureBox1->Image = Bitmap::FromFile("Grafika\\Topory\\swiety_topor_zakonu.png");
	}
};
}
