#pragma once

namespace Projekt_OJP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ksi�ycoweostrze
	/// </summary>
	public ref class Ksi�ycoweostrze : public System::Windows::Forms::Form
	{
	public:
		Ksi�ycoweostrze(void)
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
		~Ksi�ycoweostrze()
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
			this->pictureBox1->Location = System::Drawing::Point(418, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 164);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 194;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Display", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(119, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 30);
			this->label7->TabIndex = 193;
			this->label7->Text = L"Ksi�ycowe ostrze";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(68, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(358, 81);
			this->label6->TabIndex = 192;
			this->label6->Text = L"Obra�enia: +100%";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(70, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(311, 62);
			this->label5->TabIndex = 191;
			this->label5->Text = L"Mo�esz otrzyma� go w Akcie V od Wielkiego �owczego Kr�lewskiego, je�li w przeci�g"
				L"u ca�ej gry przynios�e� mu wszystkie dziesi�� trofe�w.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(20, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 19);
			this->label4->TabIndex = 190;
			this->label4->Text = L"Efekty:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(20, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 19);
			this->label3->TabIndex = 189;
			this->label3->Text = L"Gdzie:";
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(70, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 64);
			this->label2->TabIndex = 188;
			this->label2->Text = L"Srebrny miecz u�ywany do walki z potworami. Nieskuteczny w walce z lud�mi.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(26, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 19);
			this->label1->TabIndex = 187;
			this->label1->Text = L"Opis:";
			// 
			// Ksi�ycoweostrze
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
			this->Name = L"Ksi�ycoweostrze";
			this->Text = L"Weapons of Witcher";
			this->Load += gcnew System::EventHandler(this, &Ksi�ycoweostrze::Ksi�ycoweostrze_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ksi�ycoweostrze_Load(System::Object^  sender, System::EventArgs^  e) {

				 pictureBox1->Image = Bitmap::FromFile("Grafika\\Miecze srebrne\\ksiezycowe_ostrze.png");
	}
};
}
