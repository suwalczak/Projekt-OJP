#pragma once
#include "stdafx.h"
#include "Form2.h"
#include "Ard'aenye.h"
#include "Ceremonialny miecz Deithwen.h"
#include "D'yaebl.h"
#include "Elfi miecz z Niebieskich Gór.h"
#include "G'valchir mahakamski runiczny Sihill.h"
#include "Gwalhir.h"
#include "Harvall.h"
#include "Miecz z meteorytowej stali 1.h"
#include "Miecz z meteorytowej stali 2.h"
#include "Miecz z meteorytowej stali 3.h"
#include "Miecz z metorytowej stali 4.h"
#include "Miecz z meteorytowej stali 5.h"
#include "Miecz z meteorytowej stali 6.h"
#include "Miecz z meteorytowej stali 7.h"
#include "Miecz z meteorytowej stali 8.h"
#include "Miecz z meteorytowej stali 9.h"
#include "Miecz z meteorytowej stali 10.h"
#include"Miecz Zakonu.h"
#include"Nielegalny miecz.h"
#include"Runiczny miecz z Dol Blathanna.h"
#include"Œwiêty miecz Zakonu.h"
#include"Temerski miecz stalowy.h"
#include"WiedŸmiñski miecz stalowy.h"
#include"Zardzewia³y miecz.h"
#include"Aerondight.h"
#include"Ksiê¿ycowe ostrze.h"
#include "Runiczny miecz 1.h"
#include "Runiczny miecz 2h.h"
#include "WiedŸmiñski srebrny miecz.h"
#include "Bu³awa ³añcuchowa.h"
#include "Mahakamski m³ot bojowy.h"
#include "M³ot bojowy zmutowanego rycerza.h"
#include "Pochodnia.h"
#include "Œwiêty m³ot bojowy Zakonu.h"
#include "Krasnoludzki topór z Góry Carbon.h"
#include "Mahakamski topór dwurêczny.h"
#include "Siekiera.h"
#include "Œwiêty topór Zakonu.h"
#include "Mahakamski sztylet.h"
#include "Sztylet z Deithwen.h"
#include "Sztylet zabójców.h"


namespace WindowsFormApplication1 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  mieczeStaloweToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  dadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  ardaenyeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ceremonialnyMieczDeithwenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dyaeblToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  elfiMieczZNiebieskichGórToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gvalchirMahakamskiRunicznySihillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gwalhirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  harvallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nielegalnyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyMieczZDolBlathannaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  œwiêtyMieczZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiMieczStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wiedŸmiñskiMieczStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zardzewia³yMieczToolStripMenuItem;

















	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiM³otBojowyToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  m³otBojowyZmutowanegoRycerzaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  pochodniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  œwiêtyM³otBojowyZakonuToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiTopórDwurêcznyToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  siekieraToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  œwiêtyTopórZakonuToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZDeithwenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZabójcówToolStripMenuItem;


	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer2;
	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aerondightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ksiê¿ycoweOstrzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wiedŸmiñskiSrebrnyMieczToolStripMenuItem;









	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mieczeStaloweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ardaenyeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ceremonialnyMieczDeithwenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dyaeblToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elfiMieczZNiebieskichGórToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gwalhirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->harvallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nielegalnyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyMieczZDolBlathannaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œwiêtyMieczZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiMieczStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zardzewia³yMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aerondightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ksiê¿ycoweOstrzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiM³otBojowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pochodniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiTopórDwurêcznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siekieraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œwiêtyTopórZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZDeithwenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZabójcówToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->toolStripContainer2 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->menuStrip1->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->toolStripContainer2->LeftToolStripPanel->SuspendLayout();
			this->toolStripContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Black;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mieczeStaloweToolStripMenuItem,
					this->asdToolStripMenuItem, this->dadToolStripMenuItem, this->asdToolStripMenuItem1, this->asdToolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(213, 237);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mieczeStaloweToolStripMenuItem
			// 
			this->mieczeStaloweToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(24) {
				this->ardaenyeToolStripMenuItem,
					this->ceremonialnyMieczDeithwenToolStripMenuItem, this->dyaeblToolStripMenuItem, this->elfiMieczZNiebieskichGórToolStripMenuItem,
					this->gvalchirMahakamskiRunicznySihillToolStripMenuItem, this->gwalhirToolStripMenuItem, this->harvallToolStripMenuItem, this->mieczZMeteorytowejStaliToolStripMenuItem,
					this->mieczZMeteorytowejStaliToolStripMenuItem1, this->mieczZMeteorytowejStaliToolStripMenuItem2, this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem,
					this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem, this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem,
					this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem, this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem,
					this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem, this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem,
					this->mieczZakonuToolStripMenuItem, this->nielegalnyMieczToolStripMenuItem, this->runicznyMieczZDolBlathannaToolStripMenuItem,
					this->œwiêtyMieczZakonuToolStripMenuItem, this->temerskiMieczStalowyToolStripMenuItem, this->wiedŸmiñskiMieczStalowyToolStripMenuItem,
					this->zardzewia³yMieczToolStripMenuItem
			});
			this->mieczeStaloweToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->mieczeStaloweToolStripMenuItem->Name = L"mieczeStaloweToolStripMenuItem";
			this->mieczeStaloweToolStripMenuItem->Size = System::Drawing::Size(206, 43);
			this->mieczeStaloweToolStripMenuItem->Text = L"Miecze stalowe";
			this->mieczeStaloweToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczeStaloweToolStripMenuItem_Click_1);
			// 
			// ardaenyeToolStripMenuItem
			// 
			this->ardaenyeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ardaenyeToolStripMenuItem->Name = L"ardaenyeToolStripMenuItem";
			this->ardaenyeToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->ardaenyeToolStripMenuItem->Text = L"Ard\'aenye";
			this->ardaenyeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ardaenyeToolStripMenuItem_Click);
			// 
			// ceremonialnyMieczDeithwenToolStripMenuItem
			// 
			this->ceremonialnyMieczDeithwenToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ceremonialnyMieczDeithwenToolStripMenuItem->Name = L"ceremonialnyMieczDeithwenToolStripMenuItem";
			this->ceremonialnyMieczDeithwenToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->ceremonialnyMieczDeithwenToolStripMenuItem->Text = L"Ceremonialny miecz Deithwen";
			this->ceremonialnyMieczDeithwenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ceremonialnyMieczDeithwenToolStripMenuItem_Click);
			// 
			// dyaeblToolStripMenuItem
			// 
			this->dyaeblToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dyaeblToolStripMenuItem->Name = L"dyaeblToolStripMenuItem";
			this->dyaeblToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->dyaeblToolStripMenuItem->Text = L"D\'yaebl";
			this->dyaeblToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dyaeblToolStripMenuItem_Click);
			// 
			// elfiMieczZNiebieskichGórToolStripMenuItem
			// 
			this->elfiMieczZNiebieskichGórToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->elfiMieczZNiebieskichGórToolStripMenuItem->Name = L"elfiMieczZNiebieskichGórToolStripMenuItem";
			this->elfiMieczZNiebieskichGórToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->elfiMieczZNiebieskichGórToolStripMenuItem->Text = L"Elfi miecz z Niebieskich Gór";
			this->elfiMieczZNiebieskichGórToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::elfiMieczZNiebieskichGórToolStripMenuItem_Click);
			// 
			// gvalchirMahakamskiRunicznySihillToolStripMenuItem
			// 
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem->Name = L"gvalchirMahakamskiRunicznySihillToolStripMenuItem";
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem->Text = L"G\'valchir: mahakamski runiczny Sihill";
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::gvalchirMahakamskiRunicznySihillToolStripMenuItem_Click);
			// 
			// gwalhirToolStripMenuItem
			// 
			this->gwalhirToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gwalhirToolStripMenuItem->Name = L"gwalhirToolStripMenuItem";
			this->gwalhirToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->gwalhirToolStripMenuItem->Text = L"Gwalhir";
			this->gwalhirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::gwalhirToolStripMenuItem_Click);
			// 
			// harvallToolStripMenuItem
			// 
			this->harvallToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->harvallToolStripMenuItem->Name = L"harvallToolStripMenuItem";
			this->harvallToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->harvallToolStripMenuItem->Text = L"Harvall";
			this->harvallToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::harvallToolStripMenuItem_Click);
			// 
			// mieczZMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZMeteorytowejStaliToolStripMenuItem->Name = L"mieczZMeteorytowejStaliToolStripMenuItem";
			this->mieczZMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z czerwonej, niebieskiej oraz ¿ó³tej meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZMeteorytowejStaliToolStripMenuItem1
			// 
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Name = L"mieczZMeteorytowejStaliToolStripMenuItem1";
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Size = System::Drawing::Size(592, 28);
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Text = L"Miecz z jednego niebieskiego i dwóch ¿ó³tych kawa³ków meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem1_Click);
			// 
			// mieczZMeteorytowejStaliToolStripMenuItem2
			// 
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Name = L"mieczZMeteorytowejStaliToolStripMenuItem2";
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Size = System::Drawing::Size(592, 28);
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Text = L"Miecz z jednego niebieskiego i dwóch czerwonych kawa³ków meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem2_Click);
			// 
			// mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego czerwonego i dwóch ¿ó³tych kawa³ków meteorytowej stali";
			this->mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech ¿ó³tych kawa³ków meteorytowej stali";
			this->mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego ¿ó³tego i dwóch czerwonych kawa³ków meteorytowej stali";
			this->mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech czerwonych kawa³ków meteorytowej stali";
			this->mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuIte"
				L"m";
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego czerwonego i dwóch niebieskich kawa³ków meteorytowej stali";
			this->mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego ¿ó³tego i dwóch niebieskich kawa³ków meteorytowej stali";
			this->mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech niebieskich kawa³ków meteorytowej stali";
			this->mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZakonuToolStripMenuItem
			// 
			this->mieczZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZakonuToolStripMenuItem->Name = L"mieczZakonuToolStripMenuItem";
			this->mieczZakonuToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZakonuToolStripMenuItem->Text = L"Miecz Zakonu";
			this->mieczZakonuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZakonuToolStripMenuItem_Click);
			// 
			// nielegalnyMieczToolStripMenuItem
			// 
			this->nielegalnyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->nielegalnyMieczToolStripMenuItem->Name = L"nielegalnyMieczToolStripMenuItem";
			this->nielegalnyMieczToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->nielegalnyMieczToolStripMenuItem->Text = L"Nielegalny miecz";
			this->nielegalnyMieczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nielegalnyMieczToolStripMenuItem_Click);
			// 
			// runicznyMieczZDolBlathannaToolStripMenuItem
			// 
			this->runicznyMieczZDolBlathannaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyMieczZDolBlathannaToolStripMenuItem->Name = L"runicznyMieczZDolBlathannaToolStripMenuItem";
			this->runicznyMieczZDolBlathannaToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->runicznyMieczZDolBlathannaToolStripMenuItem->Text = L"Runiczny miecz z Dol Blathanna";
			this->runicznyMieczZDolBlathannaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::runicznyMieczZDolBlathannaToolStripMenuItem_Click);
			// 
			// œwiêtyMieczZakonuToolStripMenuItem
			// 
			this->œwiêtyMieczZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->œwiêtyMieczZakonuToolStripMenuItem->Name = L"œwiêtyMieczZakonuToolStripMenuItem";
			this->œwiêtyMieczZakonuToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->œwiêtyMieczZakonuToolStripMenuItem->Text = L"Œwiêty miecz Zakonu";
			this->œwiêtyMieczZakonuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::œwiêtyMieczZakonuToolStripMenuItem_Click);
			// 
			// temerskiMieczStalowyToolStripMenuItem
			// 
			this->temerskiMieczStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiMieczStalowyToolStripMenuItem->Name = L"temerskiMieczStalowyToolStripMenuItem";
			this->temerskiMieczStalowyToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->temerskiMieczStalowyToolStripMenuItem->Text = L"Temerski miecz stalowy";
			this->temerskiMieczStalowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::temerskiMieczStalowyToolStripMenuItem_Click);
			// 
			// wiedŸmiñskiMieczStalowyToolStripMenuItem
			// 
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem->Name = L"wiedŸmiñskiMieczStalowyToolStripMenuItem";
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem->Text = L"WiedŸmiñski miecz stalowy";
			this->wiedŸmiñskiMieczStalowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wiedŸmiñskiMieczStalowyToolStripMenuItem_Click);
			// 
			// zardzewia³yMieczToolStripMenuItem
			// 
			this->zardzewia³yMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->zardzewia³yMieczToolStripMenuItem->Name = L"zardzewia³yMieczToolStripMenuItem";
			this->zardzewia³yMieczToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->zardzewia³yMieczToolStripMenuItem->Text = L"Zardzewia³y miecz";
			this->zardzewia³yMieczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zardzewia³yMieczToolStripMenuItem_Click);
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->aerondightToolStripMenuItem,
					this->ksiê¿ycoweOstrzeToolStripMenuItem, this->runicznyMieczToolStripMenuItem, this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem,
					this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem
			});
			this->asdToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->asdToolStripMenuItem->Name = L"asdToolStripMenuItem";
			this->asdToolStripMenuItem->Size = System::Drawing::Size(206, 43);
			this->asdToolStripMenuItem->Text = L"Miecze srebrne";
			// 
			// aerondightToolStripMenuItem
			// 
			this->aerondightToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->aerondightToolStripMenuItem->Name = L"aerondightToolStripMenuItem";
			this->aerondightToolStripMenuItem->Size = System::Drawing::Size(358, 28);
			this->aerondightToolStripMenuItem->Text = L"Aerondight";
			this->aerondightToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aerondightToolStripMenuItem_Click);
			// 
			// ksiê¿ycoweOstrzeToolStripMenuItem
			// 
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Name = L"ksiê¿ycoweOstrzeToolStripMenuItem";
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Size = System::Drawing::Size(358, 28);
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Text = L"Ksiê¿ycowe ostrze";
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ksiê¿ycoweOstrzeToolStripMenuItem_Click);
			// 
			// runicznyMieczToolStripMenuItem
			// 
			this->runicznyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyMieczToolStripMenuItem->Name = L"runicznyMieczToolStripMenuItem";
			this->runicznyMieczToolStripMenuItem->Size = System::Drawing::Size(358, 28);
			this->runicznyMieczToolStripMenuItem->Text = L"Miecz z run¹ ziemi i dwoma runami s³oñca";
			this->runicznyMieczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::runicznyMieczToolStripMenuItem_Click);
			// 
			// mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem
			// 
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Name = L"mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem";
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Size = System::Drawing::Size(358, 28);
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Text = L"Miecz z run¹ ziemi i dwoma runami s³oñca";
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem_Click);
			// 
			// wiedŸmiñskiSrebrnyMieczToolStripMenuItem
			// 
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Name = L"wiedŸmiñskiSrebrnyMieczToolStripMenuItem";
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Size = System::Drawing::Size(358, 28);
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Text = L"WiedŸmiñski srebrny miecz";
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wiedŸmiñskiSrebrnyMieczToolStripMenuItem_Click);
			// 
			// dadToolStripMenuItem
			// 
			this->dadToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->asdToolStripMenuItem5,
					this->mahakamskiM³otBojowyToolStripMenuItem, this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem, this->pochodniaToolStripMenuItem,
					this->œwiêtyM³otBojowyZakonuToolStripMenuItem
			});
			this->dadToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dadToolStripMenuItem->Name = L"dadToolStripMenuItem";
			this->dadToolStripMenuItem->Size = System::Drawing::Size(206, 43);
			this->dadToolStripMenuItem->Text = L"Broñ obuchowa";
			// 
			// asdToolStripMenuItem5
			// 
			this->asdToolStripMenuItem5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->asdToolStripMenuItem5->Name = L"asdToolStripMenuItem5";
			this->asdToolStripMenuItem5->Size = System::Drawing::Size(310, 28);
			this->asdToolStripMenuItem5->Text = L"Bu³awa ³añcuchowa";
			this->asdToolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::asdToolStripMenuItem5_Click);
			// 
			// mahakamskiM³otBojowyToolStripMenuItem
			// 
			this->mahakamskiM³otBojowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiM³otBojowyToolStripMenuItem->Name = L"mahakamskiM³otBojowyToolStripMenuItem";
			this->mahakamskiM³otBojowyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->mahakamskiM³otBojowyToolStripMenuItem->Text = L"Mahakamski m³ot bojowy";
			this->mahakamskiM³otBojowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mahakamskiM³otBojowyToolStripMenuItem_Click);
			// 
			// m³otBojowyZmutowanegoRycerzaToolStripMenuItem
			// 
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Name = L"m³otBojowyZmutowanegoRycerzaToolStripMenuItem";
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Text = L"M³ot bojowy zmutowanego rycerza";
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::m³otBojowyZmutowanegoRycerzaToolStripMenuItem_Click);
			// 
			// pochodniaToolStripMenuItem
			// 
			this->pochodniaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->pochodniaToolStripMenuItem->Name = L"pochodniaToolStripMenuItem";
			this->pochodniaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->pochodniaToolStripMenuItem->Text = L"Pochodnia";
			this->pochodniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pochodniaToolStripMenuItem_Click);
			// 
			// œwiêtyM³otBojowyZakonuToolStripMenuItem
			// 
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Name = L"œwiêtyM³otBojowyZakonuToolStripMenuItem";
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Text = L"Œwiêty m³ot bojowy Zakonu";
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::œwiêtyM³otBojowyZakonuToolStripMenuItem_Click);
			// 
			// asdToolStripMenuItem1
			// 
			this->asdToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->asdToolStripMenuItem4,
					this->mahakamskiTopórDwurêcznyToolStripMenuItem, this->siekieraToolStripMenuItem, this->œwiêtyTopórZakonuToolStripMenuItem
			});
			this->asdToolStripMenuItem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->asdToolStripMenuItem1->Name = L"asdToolStripMenuItem1";
			this->asdToolStripMenuItem1->Size = System::Drawing::Size(206, 43);
			this->asdToolStripMenuItem1->Text = L"Topory";
			// 
			// asdToolStripMenuItem4
			// 
			this->asdToolStripMenuItem4->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->asdToolStripMenuItem4->Name = L"asdToolStripMenuItem4";
			this->asdToolStripMenuItem4->Size = System::Drawing::Size(305, 28);
			this->asdToolStripMenuItem4->Text = L"Krasnoludzki topór z Góry Carbon";
			this->asdToolStripMenuItem4->Click += gcnew System::EventHandler(this, &Form1::asdToolStripMenuItem4_Click);
			// 
			// mahakamskiTopórDwurêcznyToolStripMenuItem
			// 
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Name = L"mahakamskiTopórDwurêcznyToolStripMenuItem";
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Text = L"Mahakamski topór dwurêczny";
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mahakamskiTopórDwurêcznyToolStripMenuItem_Click);
			// 
			// siekieraToolStripMenuItem
			// 
			this->siekieraToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->siekieraToolStripMenuItem->Name = L"siekieraToolStripMenuItem";
			this->siekieraToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->siekieraToolStripMenuItem->Text = L"Siekiera";
			this->siekieraToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::siekieraToolStripMenuItem_Click);
			// 
			// œwiêtyTopórZakonuToolStripMenuItem
			// 
			this->œwiêtyTopórZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->œwiêtyTopórZakonuToolStripMenuItem->Name = L"œwiêtyTopórZakonuToolStripMenuItem";
			this->œwiêtyTopórZakonuToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->œwiêtyTopórZakonuToolStripMenuItem->Text = L"Œwiêty topór Zakonu";
			this->œwiêtyTopórZakonuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::œwiêtyTopórZakonuToolStripMenuItem_Click);
			// 
			// asdToolStripMenuItem2
			// 
			this->asdToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->asdToolStripMenuItem3,
					this->sztyletZDeithwenToolStripMenuItem, this->sztyletZabójcówToolStripMenuItem
			});
			this->asdToolStripMenuItem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->asdToolStripMenuItem2->Name = L"asdToolStripMenuItem2";
			this->asdToolStripMenuItem2->Size = System::Drawing::Size(206, 43);
			this->asdToolStripMenuItem2->Text = L"Sztylety";
			// 
			// asdToolStripMenuItem3
			// 
			this->asdToolStripMenuItem3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->asdToolStripMenuItem3->Name = L"asdToolStripMenuItem3";
			this->asdToolStripMenuItem3->Size = System::Drawing::Size(212, 28);
			this->asdToolStripMenuItem3->Text = L"Mahakamski sztylet";
			this->asdToolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::asdToolStripMenuItem3_Click);
			// 
			// sztyletZDeithwenToolStripMenuItem
			// 
			this->sztyletZDeithwenToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->sztyletZDeithwenToolStripMenuItem->Name = L"sztyletZDeithwenToolStripMenuItem";
			this->sztyletZDeithwenToolStripMenuItem->Size = System::Drawing::Size(212, 28);
			this->sztyletZDeithwenToolStripMenuItem->Text = L"Sztylet z Deithwen";
			this->sztyletZDeithwenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sztyletZDeithwenToolStripMenuItem_Click);
			// 
			// sztyletZabójcówToolStripMenuItem
			// 
			this->sztyletZabójcówToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->sztyletZabójcówToolStripMenuItem->Name = L"sztyletZabójcówToolStripMenuItem";
			this->sztyletZabójcówToolStripMenuItem->Size = System::Drawing::Size(212, 28);
			this->sztyletZabójcówToolStripMenuItem->Text = L"Sztylet zabójców";
			this->sztyletZabójcówToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sztyletZabójcówToolStripMenuItem_Click);
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->BackColor = System::Drawing::Color::Black;
			this->toolStripContainer1->ContentPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->toolStripContainer2);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(540, 301);
			this->toolStripContainer1->ContentPanel->Load += gcnew System::EventHandler(this, &Form1::toolStripContainer1_ContentPanel_Load);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(540, 301);
			this->toolStripContainer1->TabIndex = 1;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Click += gcnew System::EventHandler(this, &Form1::toolStripContainer1_TopToolStripPanel_Click);
			// 
			// toolStripContainer2
			// 
			// 
			// toolStripContainer2.ContentPanel
			// 
			this->toolStripContainer2->ContentPanel->Size = System::Drawing::Size(0, 237);
			// 
			// toolStripContainer2.LeftToolStripPanel
			// 
			this->toolStripContainer2->LeftToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer2->Location = System::Drawing::Point(12, 45);
			this->toolStripContainer2->Name = L"toolStripContainer2";
			this->toolStripContainer2->Size = System::Drawing::Size(212, 237);
			this->toolStripContainer2->TabIndex = 2;
			this->toolStripContainer2->Text = L"toolStripContainer2";
			// 
			// toolStripContainer2.TopToolStripPanel
			// 
			this->toolStripContainer2->TopToolStripPanel->Click += gcnew System::EventHandler(this, &Form1::toolStripContainer2_TopToolStripPanel_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(540, 301);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"Form1";
			this->Text = L"Weapons of Witcher";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->toolStripContainer2->LeftToolStripPanel->ResumeLayout(false);
			this->toolStripContainer2->LeftToolStripPanel->PerformLayout();
			this->toolStripContainer2->ResumeLayout(false);
			this->toolStripContainer2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void mieczeStaloweToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^  sender, System::EventArgs^  e) {

		toolStripContainer1->ContentPanel->BackgroundImage = Bitmap::FromFile("Grafika\\t³o1.png");
	}
	private: System::Void mieczZMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 Projekt_OJP::Mieczzmeteorytowejstali1^ Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali1();
				 Dane->Show();

				 Button ^ zamknij = gcnew Button;

				 zamknij->AutoSize;
				 zamknij->Text = "Zamknij";
				 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

				 zamknij->Location = Point(190, 290);

				 Dane->Controls->Add(zamknij);
	}
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ardaenyeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Ardaenye();
			 Dane->Show();
/*
			 Form2::button1_Click_1^ zamknij = gcnew Form2::button1_Click_1();*/
			
			 Button ^ zamknij = gcnew Button;


			 Label ^ Pole_tekst = gcnew Label;
			 Label^ Pole_tekst1 = gcnew Label;
			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);
			 /*this->Hide();*/

			 /*Pole_tekst->Font=(gcnew System::Drawing::Font(L"Sitka Display", 14.25F, System::Drawing::FontStyle::Regular,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			 Pole_tekst->Text = "Cechy:";
			 Pole_tekst->Location = Point(100, 100);*/
			 
			 zamknij->Location = Point(190, 290);


			 Dane->Controls->Add(Pole_tekst);
			 Dane->Controls->Add(Pole_tekst1);
			 Dane->Controls->Add(zamknij);

			 

}
	private: System::Void zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
				 ((Form^)((Button^)sender)->Parent)->Close();
}
private: System::Void mieczeStaloweToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void ceremonialnyMieczDeithwenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::CeremonialnymieczDeithwen^ Dane = gcnew Projekt_OJP::CeremonialnymieczDeithwen();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);
			
			 zamknij->Location = Point(190, 290);

			 Dane->Controls->Add(zamknij);
}
private: System::Void dyaeblToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::Dyaebl^ Dane = gcnew Projekt_OJP::Dyaebl();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);
			 
			 zamknij->Location = Point(190, 290);

			 Dane->Controls->Add(zamknij);

			 
}
private: System::Void elfiMieczZNiebieskichGórToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::ElfimieczzNiebieskichGór^ Dane = gcnew Projekt_OJP::ElfimieczzNiebieskichGór();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);
			 
			 zamknij->Location = Point(190, 290);

			 Dane->Controls->Add(zamknij);
}
private: System::Void gvalchirMahakamskiRunicznySihillToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::GvalchirmahakamskirunicznySihill^ Dane = gcnew Projekt_OJP::GvalchirmahakamskirunicznySihill();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 310);

			 Dane->Controls->Add(zamknij);
}
private: System::Void gwalhirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::Gwalhir^ Dane = gcnew Projekt_OJP::Gwalhir();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 290);

			 Dane->Controls->Add(zamknij);
}
private: System::Void harvallToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::Harvall^ Dane = gcnew Projekt_OJP::Harvall();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZMeteorytowejStaliToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::Mieczzmeteorytowejstali2^ Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali2();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZMeteorytowejStaliToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::Mieczzmeteorytowejstali3^ Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali3();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednegoCzerwonegoIDwóch¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
	System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmetorytowejstali4();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);

			 ///*this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));*/
			 //Projekt_OJP::Mieczzmetorytowejstali4::pictureBox1->Image = Bitmap::FromFile("obrazek.jpg");
			 //Projekt_OJP::pictureBox1->Image = Bitmap::FromFile("obrazek.jpg");
}

private: System::Void mieczZTrzech¯ó³tychKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali5();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednego¯ó³tegoIDwóchCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
	System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali6();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZTrzechCzerwonychKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali7();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednegoCzerwonegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
	System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali8();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednego¯ó³tegoIDwóchNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
	System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali9();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZTrzechNiebieskichKawa³kówMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali10();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZakonuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::MieczZakonu();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void nielegalnyMieczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Nielegalnymiecz();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void runicznyMieczZDolBlathannaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::RunicznymieczzDolBlathanna();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);

}
private: System::Void œwiêtyMieczZakonuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::ŒwiêtymieczZakonu();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void temerskiMieczStalowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Temerskimieczstalowy();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void wiedŸmiñskiMieczStalowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::WiedŸmiñskimieczstalowy();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void zardzewia³yMieczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Zardzewia³ymiecz();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void aerondightToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Aerondight();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void ksiê¿ycoweOstrzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Ksiê¿ycoweostrze();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void runicznyMieczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Runicznymiecz1();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Runicznymiecz2h();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void wiedŸmiñskiSrebrnyMieczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::WiedŸmiñskisrebrnymiecz();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);

}
private: System::Void asdToolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Bu³awa³añcuchowa();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mahakamskiM³otBojowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mahakamskim³otbojowy();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void m³otBojowyZmutowanegoRycerzaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::M³otbojowyzmutowanegorycerza();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void pochodniaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Pochodnia();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void œwiêtyM³otBojowyZakonuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Œwiêtym³otbojowyZakonu();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);

}
private: System::Void asdToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::KrasnoludzkitopórzGóryCarbon();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mahakamskiTopórDwurêcznyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mahakamskitopórdwurêczny();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void siekieraToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Siekiera();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void œwiêtyTopórZakonuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::ŒwiêtytopórZakonu();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void toolStripContainer2_TopToolStripPanel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void asdToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mahakamskisztylet();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void sztyletZDeithwenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::SztyletzDeithwen();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void sztyletZabójcówToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Sztyletzabójców();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
};
}

