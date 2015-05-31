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



	private: System::Windows::Forms::ToolStripMenuItem^  asdToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^  aerondightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ksiê¿ycoweOstrzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiS³oñcaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wiedŸmiñskiSrebrnyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ciê¿kaMaczugaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kamiennyM³otToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  korbaczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lekkaMaczugaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiM³otBojowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  m³otBojowyZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  m³otBojowyZmutowanegoRycerzaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  morgenszternDwurêcznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pochodniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  œwiêtyM³otBojowyZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiCepBojowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  krasnoludzkiTopórZMahakamuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiTopórDwurêcznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ma³yTopórToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyTopórZGóryCarbonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  siekieraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stalowyTopórDwurêcznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  œwiêtyTopórZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiTopórStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiTopór¯elaznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiSztyletRunicznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZDeithwenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZabójcówToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiSztyletStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiSztylet¯elaznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer2;









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
			this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciê¿kaMaczugaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kamiennyM³otToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->korbaczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lekkaMaczugaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiM³otBojowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m³otBojowyZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->morgenszternDwurêcznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pochodniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiCepBojowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->krasnoludzkiTopórZMahakamuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiTopórDwurêcznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ma³yTopórToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyTopórZGóryCarbonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siekieraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stalowyTopórDwurêcznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œwiêtyTopórZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiTopórStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiTopór¯elaznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiSztyletRunicznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZDeithwenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZabójcówToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiSztyletStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiSztylet¯elaznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Size = System::Drawing::Size(213, 212);
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
			this->asdToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->aerondightToolStripMenuItem,
					this->ksiê¿ycoweOstrzeToolStripMenuItem, this->runicznyMieczToolStripMenuItem, this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem,
					this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem, this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem, this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem,
					this->mieczZTrzemaRunamiZiemiToolStripMenuItem, this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem, this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem,
					this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem, this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem, this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem
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
			this->aerondightToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->aerondightToolStripMenuItem->Text = L"Aerondight";
			// 
			// ksiê¿ycoweOstrzeToolStripMenuItem
			// 
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Name = L"ksiê¿ycoweOstrzeToolStripMenuItem";
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->ksiê¿ycoweOstrzeToolStripMenuItem->Text = L"Ksiê¿ycowe ostrze";
			// 
			// runicznyMieczToolStripMenuItem
			// 
			this->runicznyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyMieczToolStripMenuItem->Name = L"runicznyMieczToolStripMenuItem";
			this->runicznyMieczToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->runicznyMieczToolStripMenuItem->Text = L"Miecz z run¹ ziemi i dwoma runami s³oñca";
			// 
			// mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem
			// 
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Name = L"mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem";
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun¹ZiemiIDwomaRunamiS³oñcaToolStripMenuItem->Text = L"Miecz z run¹ ziemi i dwoma runami s³oñca";
			// 
			// mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem->Name = L"mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem";
			this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun¹S³oñcaIDwomaRunamiZiemiToolStripMenuItem->Text = L"Miecz z run¹ s³oñca i dwoma runami ziemi";
			// 
			// mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem->Name = L"mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem";
			this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZKsiê¿ycow¹Run¹OrazDwomaRunamiZiemiToolStripMenuItem->Text = L"Miecz z ksiê¿ycow¹ run¹ oraz dwoma runami ziemi";
			// 
			// mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem
			// 
			this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem->Name = L"mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem";
			this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun¹ZiemiIDwomaKsiê¿ycowymiRunamiToolStripMenuItem->Text = L"Miecz z run¹ ziemi i dwoma ksiê¿ycowymi runami";
			// 
			// mieczZTrzemaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Name = L"mieczZTrzemaRunamiZiemiToolStripMenuItem";
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Text = L"Miecz z trzema runami ziemi";
			// 
			// mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem
			// 
			this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem->Name = L"mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem";
			this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun¹S³oñcaIDwomaRunamiKsiê¿ycaToolStripMenuItem->Text = L"Miecz z run¹ s³oñca i dwoma runami ksiê¿yca";
			// 
			// mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem
			// 
			this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem->Name = L"mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem";
			this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun¹Ksiê¿ycaIDwomaRunamiS³oñcaToolStripMenuItem->Text = L"Miecz z run¹ ksiê¿yca i dwoma runami s³oñca";
			// 
			// mieczZTrzemaRunamiS³oñcaToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem->Name = L"mieczZTrzemaRunamiS³oñcaToolStripMenuItem";
			this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiS³oñcaToolStripMenuItem->Text = L"Miecz z trzema runami s³oñca";
			// 
			// mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem->Name = L"mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem";
			this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiKsiê¿ycaToolStripMenuItem->Text = L"Miecz z trzema runami ksiê¿yca";
			// 
			// wiedŸmiñskiSrebrnyMieczToolStripMenuItem
			// 
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Name = L"wiedŸmiñskiSrebrnyMieczToolStripMenuItem";
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->wiedŸmiñskiSrebrnyMieczToolStripMenuItem->Text = L"WiedŸmiñski srebrny miecz";
			// 
			// dadToolStripMenuItem
			// 
			this->dadToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->asdToolStripMenuItem5,
					this->ciê¿kaMaczugaToolStripMenuItem, this->kamiennyM³otToolStripMenuItem, this->korbaczToolStripMenuItem, this->lekkaMaczugaToolStripMenuItem,
					this->mahakamskiM³otBojowyToolStripMenuItem, this->m³otBojowyZakonuToolStripMenuItem, this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem,
					this->morgenszternDwurêcznyToolStripMenuItem, this->pochodniaToolStripMenuItem, this->œwiêtyM³otBojowyZakonuToolStripMenuItem,
					this->temerskiCepBojowyToolStripMenuItem
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
			// 
			// ciê¿kaMaczugaToolStripMenuItem
			// 
			this->ciê¿kaMaczugaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ciê¿kaMaczugaToolStripMenuItem->Name = L"ciê¿kaMaczugaToolStripMenuItem";
			this->ciê¿kaMaczugaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->ciê¿kaMaczugaToolStripMenuItem->Text = L"Ciê¿ka maczuga";
			// 
			// kamiennyM³otToolStripMenuItem
			// 
			this->kamiennyM³otToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->kamiennyM³otToolStripMenuItem->Name = L"kamiennyM³otToolStripMenuItem";
			this->kamiennyM³otToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->kamiennyM³otToolStripMenuItem->Text = L"Kamienny m³ot";
			// 
			// korbaczToolStripMenuItem
			// 
			this->korbaczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->korbaczToolStripMenuItem->Name = L"korbaczToolStripMenuItem";
			this->korbaczToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->korbaczToolStripMenuItem->Text = L"Korbacz";
			// 
			// lekkaMaczugaToolStripMenuItem
			// 
			this->lekkaMaczugaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lekkaMaczugaToolStripMenuItem->Name = L"lekkaMaczugaToolStripMenuItem";
			this->lekkaMaczugaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->lekkaMaczugaToolStripMenuItem->Text = L"Lekka maczuga";
			// 
			// mahakamskiM³otBojowyToolStripMenuItem
			// 
			this->mahakamskiM³otBojowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiM³otBojowyToolStripMenuItem->Name = L"mahakamskiM³otBojowyToolStripMenuItem";
			this->mahakamskiM³otBojowyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->mahakamskiM³otBojowyToolStripMenuItem->Text = L"Mahakamski m³ot bojowy";
			// 
			// m³otBojowyZakonuToolStripMenuItem
			// 
			this->m³otBojowyZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->m³otBojowyZakonuToolStripMenuItem->Name = L"m³otBojowyZakonuToolStripMenuItem";
			this->m³otBojowyZakonuToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->m³otBojowyZakonuToolStripMenuItem->Text = L"M³ot bojowy Zakonu";
			// 
			// m³otBojowyZmutowanegoRycerzaToolStripMenuItem
			// 
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Name = L"m³otBojowyZmutowanegoRycerzaToolStripMenuItem";
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->m³otBojowyZmutowanegoRycerzaToolStripMenuItem->Text = L"M³ot bojowy zmutowanego rycerza";
			// 
			// morgenszternDwurêcznyToolStripMenuItem
			// 
			this->morgenszternDwurêcznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->morgenszternDwurêcznyToolStripMenuItem->Name = L"morgenszternDwurêcznyToolStripMenuItem";
			this->morgenszternDwurêcznyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->morgenszternDwurêcznyToolStripMenuItem->Text = L"Morgensztern dwurêczny";
			// 
			// pochodniaToolStripMenuItem
			// 
			this->pochodniaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->pochodniaToolStripMenuItem->Name = L"pochodniaToolStripMenuItem";
			this->pochodniaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->pochodniaToolStripMenuItem->Text = L"Pochodnia";
			// 
			// œwiêtyM³otBojowyZakonuToolStripMenuItem
			// 
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Name = L"œwiêtyM³otBojowyZakonuToolStripMenuItem";
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->œwiêtyM³otBojowyZakonuToolStripMenuItem->Text = L"Œwiêty m³ot bojowy Zakonu";
			// 
			// temerskiCepBojowyToolStripMenuItem
			// 
			this->temerskiCepBojowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiCepBojowyToolStripMenuItem->Name = L"temerskiCepBojowyToolStripMenuItem";
			this->temerskiCepBojowyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->temerskiCepBojowyToolStripMenuItem->Text = L"Temerski cep bojowy";
			// 
			// asdToolStripMenuItem1
			// 
			this->asdToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->asdToolStripMenuItem4,
					this->krasnoludzkiTopórZMahakamuToolStripMenuItem, this->mahakamskiTopórDwurêcznyToolStripMenuItem, this->ma³yTopórToolStripMenuItem,
					this->runicznyTopórZGóryCarbonToolStripMenuItem, this->siekieraToolStripMenuItem, this->stalowyTopórDwurêcznyToolStripMenuItem,
					this->œwiêtyTopórZakonuToolStripMenuItem, this->temerskiTopórStalowyToolStripMenuItem, this->temerskiTopór¯elaznyToolStripMenuItem
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
			// 
			// krasnoludzkiTopórZMahakamuToolStripMenuItem
			// 
			this->krasnoludzkiTopórZMahakamuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->krasnoludzkiTopórZMahakamuToolStripMenuItem->Name = L"krasnoludzkiTopórZMahakamuToolStripMenuItem";
			this->krasnoludzkiTopórZMahakamuToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->krasnoludzkiTopórZMahakamuToolStripMenuItem->Text = L"Krasnoludzki topór z Mahakamu";
			// 
			// mahakamskiTopórDwurêcznyToolStripMenuItem
			// 
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Name = L"mahakamskiTopórDwurêcznyToolStripMenuItem";
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->mahakamskiTopórDwurêcznyToolStripMenuItem->Text = L"Mahakamski topór dwurêczny";
			// 
			// ma³yTopórToolStripMenuItem
			// 
			this->ma³yTopórToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ma³yTopórToolStripMenuItem->Name = L"ma³yTopórToolStripMenuItem";
			this->ma³yTopórToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->ma³yTopórToolStripMenuItem->Text = L"Ma³y topór";
			// 
			// runicznyTopórZGóryCarbonToolStripMenuItem
			// 
			this->runicznyTopórZGóryCarbonToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyTopórZGóryCarbonToolStripMenuItem->Name = L"runicznyTopórZGóryCarbonToolStripMenuItem";
			this->runicznyTopórZGóryCarbonToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->runicznyTopórZGóryCarbonToolStripMenuItem->Text = L"Runiczny topór z Góry Carbon";
			// 
			// siekieraToolStripMenuItem
			// 
			this->siekieraToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->siekieraToolStripMenuItem->Name = L"siekieraToolStripMenuItem";
			this->siekieraToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->siekieraToolStripMenuItem->Text = L"Siekiera";
			// 
			// stalowyTopórDwurêcznyToolStripMenuItem
			// 
			this->stalowyTopórDwurêcznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->stalowyTopórDwurêcznyToolStripMenuItem->Name = L"stalowyTopórDwurêcznyToolStripMenuItem";
			this->stalowyTopórDwurêcznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->stalowyTopórDwurêcznyToolStripMenuItem->Text = L"Stalowy topór dwurêczny";
			// 
			// œwiêtyTopórZakonuToolStripMenuItem
			// 
			this->œwiêtyTopórZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->œwiêtyTopórZakonuToolStripMenuItem->Name = L"œwiêtyTopórZakonuToolStripMenuItem";
			this->œwiêtyTopórZakonuToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->œwiêtyTopórZakonuToolStripMenuItem->Text = L"Œwiêty topór Zakonu";
			// 
			// temerskiTopórStalowyToolStripMenuItem
			// 
			this->temerskiTopórStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiTopórStalowyToolStripMenuItem->Name = L"temerskiTopórStalowyToolStripMenuItem";
			this->temerskiTopórStalowyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->temerskiTopórStalowyToolStripMenuItem->Text = L"Temerski topór stalowy";
			// 
			// temerskiTopór¯elaznyToolStripMenuItem
			// 
			this->temerskiTopór¯elaznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiTopór¯elaznyToolStripMenuItem->Name = L"temerskiTopór¯elaznyToolStripMenuItem";
			this->temerskiTopór¯elaznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->temerskiTopór¯elaznyToolStripMenuItem->Text = L"Temerski topór ¿elazny";
			// 
			// asdToolStripMenuItem2
			// 
			this->asdToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->asdToolStripMenuItem3,
					this->mahakamskiSztyletRunicznyToolStripMenuItem, this->sztyletZDeithwenToolStripMenuItem, this->sztyletZabójcówToolStripMenuItem,
					this->temerskiSztyletStalowyToolStripMenuItem, this->temerskiSztylet¯elaznyToolStripMenuItem
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
			this->asdToolStripMenuItem3->Size = System::Drawing::Size(270, 28);
			this->asdToolStripMenuItem3->Text = L"Mahakamski sztylet";
			// 
			// mahakamskiSztyletRunicznyToolStripMenuItem
			// 
			this->mahakamskiSztyletRunicznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiSztyletRunicznyToolStripMenuItem->Name = L"mahakamskiSztyletRunicznyToolStripMenuItem";
			this->mahakamskiSztyletRunicznyToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->mahakamskiSztyletRunicznyToolStripMenuItem->Text = L"Mahakamski sztylet runiczny";
			// 
			// sztyletZDeithwenToolStripMenuItem
			// 
			this->sztyletZDeithwenToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->sztyletZDeithwenToolStripMenuItem->Name = L"sztyletZDeithwenToolStripMenuItem";
			this->sztyletZDeithwenToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->sztyletZDeithwenToolStripMenuItem->Text = L"Sztylet z Deithwen";
			// 
			// sztyletZabójcówToolStripMenuItem
			// 
			this->sztyletZabójcówToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->sztyletZabójcówToolStripMenuItem->Name = L"sztyletZabójcówToolStripMenuItem";
			this->sztyletZabójcówToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->sztyletZabójcówToolStripMenuItem->Text = L"Sztylet zabójców";
			// 
			// temerskiSztyletStalowyToolStripMenuItem
			// 
			this->temerskiSztyletStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiSztyletStalowyToolStripMenuItem->Name = L"temerskiSztyletStalowyToolStripMenuItem";
			this->temerskiSztyletStalowyToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->temerskiSztyletStalowyToolStripMenuItem->Text = L"Temerski sztylet stalowy";
			// 
			// temerskiSztylet¯elaznyToolStripMenuItem
			// 
			this->temerskiSztylet¯elaznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiSztylet¯elaznyToolStripMenuItem->Name = L"temerskiSztylet¯elaznyToolStripMenuItem";
			this->temerskiSztylet¯elaznyToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->temerskiSztylet¯elaznyToolStripMenuItem->Text = L"Temerski sztylet ¿elazny";
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->BackColor = System::Drawing::Color::Black;
			this->toolStripContainer1->ContentPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->toolStripContainer2);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(540, 276);
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
			this->toolStripContainer2->ContentPanel->Size = System::Drawing::Size(0, 212);
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
};
}

