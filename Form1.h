#pragma once
#include "stdafx.h"
#include "Form2.h"
#include "Ard'aenye.h"
#include "Ceremonialny miecz Deithwen.h"
#include "D'yaebl.h"
#include "Elfi miecz z Niebieskich G�r.h"
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
#include"�wi�ty miecz Zakonu.h"
#include"Temerski miecz stalowy.h"
#include"Wied�mi�ski miecz stalowy.h"
#include"Zardzewia�y miecz.h"



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
	private: System::Windows::Forms::ToolStripMenuItem^  elfiMieczZNiebieskichG�rToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gvalchirMahakamskiRunicznySihillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gwalhirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  harvallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZMeteorytowejStaliToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nielegalnyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyMieczZDolBlathannaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �wi�tyMieczZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiMieczStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wied�mi�skiMieczStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zardzewia�yMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aerondightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ksi�ycoweOstrzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiZiemiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiS�o�caToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mieczZTrzemaRunamiKsi�ycaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wied�mi�skiSrebrnyMieczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ci�kaMaczugaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kamiennyM�otToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  korbaczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lekkaMaczugaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiM�otBojowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  m�otBojowyZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  m�otBojowyZmutowanegoRycerzaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  morgenszternDwur�cznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pochodniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �wi�tyM�otBojowyZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiCepBojowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  krasnoludzkiTop�rZMahakamuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiTop�rDwur�cznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ma�yTop�rToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runicznyTop�rZG�ryCarbonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  siekieraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stalowyTop�rDwur�cznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �wi�tyTop�rZakonuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiTop�rStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiTop�r�elaznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mahakamskiSztyletRunicznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZDeithwenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sztyletZab�jc�wToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiSztyletStalowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  temerskiSztylet�elaznyToolStripMenuItem;
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
			this->elfiMieczZNiebieskichG�rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gvalchirMahakamskiRunicznySihillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gwalhirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->harvallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZMeteorytowejStaliToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nielegalnyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyMieczZDolBlathannaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�wi�tyMieczZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiMieczStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wied�mi�skiMieczStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zardzewia�yMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aerondightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ksi�ycoweOstrzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiS�o�caToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wied�mi�skiSrebrnyMieczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ci�kaMaczugaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kamiennyM�otToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->korbaczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lekkaMaczugaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiM�otBojowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m�otBojowyZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->morgenszternDwur�cznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pochodniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�wi�tyM�otBojowyZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiCepBojowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->krasnoludzkiTop�rZMahakamuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiTop�rDwur�cznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ma�yTop�rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runicznyTop�rZG�ryCarbonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siekieraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stalowyTop�rDwur�cznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�wi�tyTop�rZakonuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiTop�rStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiTop�r�elaznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mahakamskiSztyletRunicznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZDeithwenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sztyletZab�jc�wToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiSztyletStalowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temerskiSztylet�elaznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->ceremonialnyMieczDeithwenToolStripMenuItem, this->dyaeblToolStripMenuItem, this->elfiMieczZNiebieskichG�rToolStripMenuItem,
					this->gvalchirMahakamskiRunicznySihillToolStripMenuItem, this->gwalhirToolStripMenuItem, this->harvallToolStripMenuItem, this->mieczZMeteorytowejStaliToolStripMenuItem,
					this->mieczZMeteorytowejStaliToolStripMenuItem1, this->mieczZMeteorytowejStaliToolStripMenuItem2, this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem,
					this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem, this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem,
					this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem, this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem,
					this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem, this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem,
					this->mieczZakonuToolStripMenuItem, this->nielegalnyMieczToolStripMenuItem, this->runicznyMieczZDolBlathannaToolStripMenuItem,
					this->�wi�tyMieczZakonuToolStripMenuItem, this->temerskiMieczStalowyToolStripMenuItem, this->wied�mi�skiMieczStalowyToolStripMenuItem,
					this->zardzewia�yMieczToolStripMenuItem
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
			// elfiMieczZNiebieskichG�rToolStripMenuItem
			// 
			this->elfiMieczZNiebieskichG�rToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->elfiMieczZNiebieskichG�rToolStripMenuItem->Name = L"elfiMieczZNiebieskichG�rToolStripMenuItem";
			this->elfiMieczZNiebieskichG�rToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->elfiMieczZNiebieskichG�rToolStripMenuItem->Text = L"Elfi miecz z Niebieskich G�r";
			this->elfiMieczZNiebieskichG�rToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::elfiMieczZNiebieskichG�rToolStripMenuItem_Click);
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
			this->mieczZMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z czerwonej, niebieskiej oraz ��tej meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZMeteorytowejStaliToolStripMenuItem1
			// 
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Name = L"mieczZMeteorytowejStaliToolStripMenuItem1";
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Size = System::Drawing::Size(592, 28);
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Text = L"Miecz z jednego niebieskiego i dw�ch ��tych kawa�k�w meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem1_Click);
			// 
			// mieczZMeteorytowejStaliToolStripMenuItem2
			// 
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Name = L"mieczZMeteorytowejStaliToolStripMenuItem2";
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Size = System::Drawing::Size(592, 28);
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Text = L"Miecz z jednego niebieskiego i dw�ch czerwonych kawa�k�w meteorytowej stali";
			this->mieczZMeteorytowejStaliToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::mieczZMeteorytowejStaliToolStripMenuItem2_Click);
			// 
			// mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego czerwonego i dw�ch ��tych kawa�k�w meteorytowej stali";
			this->mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech ��tych kawa�k�w meteorytowej stali";
			this->mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego ��tego i dw�ch czerwonych kawa�k�w meteorytowej stali";
			this->mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech czerwonych kawa�k�w meteorytowej stali";
			this->mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuIte"
				L"m";
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego czerwonego i dw�ch niebieskich kawa�k�w meteorytowej stali";
			this->mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display",
				12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z jednego ��tego i dw�ch niebieskich kawa�k�w meteorytowej stali";
			this->mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
			// 
			// mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem
			// 
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Name = L"mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem";
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Text = L"Miecz z trzech niebieskich kawa�k�w meteorytowej stali";
			this->mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click);
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
			// �wi�tyMieczZakonuToolStripMenuItem
			// 
			this->�wi�tyMieczZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->�wi�tyMieczZakonuToolStripMenuItem->Name = L"�wi�tyMieczZakonuToolStripMenuItem";
			this->�wi�tyMieczZakonuToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->�wi�tyMieczZakonuToolStripMenuItem->Text = L"�wi�ty miecz Zakonu";
			this->�wi�tyMieczZakonuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�wi�tyMieczZakonuToolStripMenuItem_Click);
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
			// wied�mi�skiMieczStalowyToolStripMenuItem
			// 
			this->wied�mi�skiMieczStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->wied�mi�skiMieczStalowyToolStripMenuItem->Name = L"wied�mi�skiMieczStalowyToolStripMenuItem";
			this->wied�mi�skiMieczStalowyToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->wied�mi�skiMieczStalowyToolStripMenuItem->Text = L"Wied�mi�ski miecz stalowy";
			this->wied�mi�skiMieczStalowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wied�mi�skiMieczStalowyToolStripMenuItem_Click);
			// 
			// zardzewia�yMieczToolStripMenuItem
			// 
			this->zardzewia�yMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->zardzewia�yMieczToolStripMenuItem->Name = L"zardzewia�yMieczToolStripMenuItem";
			this->zardzewia�yMieczToolStripMenuItem->Size = System::Drawing::Size(592, 28);
			this->zardzewia�yMieczToolStripMenuItem->Text = L"Zardzewia�y miecz";
			this->zardzewia�yMieczToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zardzewia�yMieczToolStripMenuItem_Click);
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->aerondightToolStripMenuItem,
					this->ksi�ycoweOstrzeToolStripMenuItem, this->runicznyMieczToolStripMenuItem, this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem,
					this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem, this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem, this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem,
					this->mieczZTrzemaRunamiZiemiToolStripMenuItem, this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem, this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem,
					this->mieczZTrzemaRunamiS�o�caToolStripMenuItem, this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem, this->wied�mi�skiSrebrnyMieczToolStripMenuItem
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
			// ksi�ycoweOstrzeToolStripMenuItem
			// 
			this->ksi�ycoweOstrzeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ksi�ycoweOstrzeToolStripMenuItem->Name = L"ksi�ycoweOstrzeToolStripMenuItem";
			this->ksi�ycoweOstrzeToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->ksi�ycoweOstrzeToolStripMenuItem->Text = L"Ksi�ycowe ostrze";
			// 
			// runicznyMieczToolStripMenuItem
			// 
			this->runicznyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyMieczToolStripMenuItem->Name = L"runicznyMieczToolStripMenuItem";
			this->runicznyMieczToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->runicznyMieczToolStripMenuItem->Text = L"Miecz z run� ziemi i dwoma runami s�o�ca";
			// 
			// mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem
			// 
			this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem->Name = L"mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem";
			this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun�ZiemiIDwomaRunamiS�o�caToolStripMenuItem->Text = L"Miecz z run� ziemi i dwoma runami s�o�ca";
			// 
			// mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem->Name = L"mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem";
			this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun�S�o�caIDwomaRunamiZiemiToolStripMenuItem->Text = L"Miecz z run� s�o�ca i dwoma runami ziemi";
			// 
			// mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem->Name = L"mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem";
			this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZKsi�ycow�Run�OrazDwomaRunamiZiemiToolStripMenuItem->Text = L"Miecz z ksi�ycow� run� oraz dwoma runami ziemi";
			// 
			// mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem
			// 
			this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem->Name = L"mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem";
			this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun�ZiemiIDwomaKsi�ycowymiRunamiToolStripMenuItem->Text = L"Miecz z run� ziemi i dwoma ksi�ycowymi runami";
			// 
			// mieczZTrzemaRunamiZiemiToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Name = L"mieczZTrzemaRunamiZiemiToolStripMenuItem";
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiZiemiToolStripMenuItem->Text = L"Miecz z trzema runami ziemi";
			// 
			// mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem
			// 
			this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem->Name = L"mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem";
			this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun�S�o�caIDwomaRunamiKsi�ycaToolStripMenuItem->Text = L"Miecz z run� s�o�ca i dwoma runami ksi�yca";
			// 
			// mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem
			// 
			this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem->Name = L"mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem";
			this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZRun�Ksi�ycaIDwomaRunamiS�o�caToolStripMenuItem->Text = L"Miecz z run� ksi�yca i dwoma runami s�o�ca";
			// 
			// mieczZTrzemaRunamiS�o�caToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiS�o�caToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiS�o�caToolStripMenuItem->Name = L"mieczZTrzemaRunamiS�o�caToolStripMenuItem";
			this->mieczZTrzemaRunamiS�o�caToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiS�o�caToolStripMenuItem->Text = L"Miecz z trzema runami s�o�ca";
			// 
			// mieczZTrzemaRunamiKsi�ycaToolStripMenuItem
			// 
			this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem->Name = L"mieczZTrzemaRunamiKsi�ycaToolStripMenuItem";
			this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->mieczZTrzemaRunamiKsi�ycaToolStripMenuItem->Text = L"Miecz z trzema runami ksi�yca";
			// 
			// wied�mi�skiSrebrnyMieczToolStripMenuItem
			// 
			this->wied�mi�skiSrebrnyMieczToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->wied�mi�skiSrebrnyMieczToolStripMenuItem->Name = L"wied�mi�skiSrebrnyMieczToolStripMenuItem";
			this->wied�mi�skiSrebrnyMieczToolStripMenuItem->Size = System::Drawing::Size(414, 28);
			this->wied�mi�skiSrebrnyMieczToolStripMenuItem->Text = L"Wied�mi�ski srebrny miecz";
			// 
			// dadToolStripMenuItem
			// 
			this->dadToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->asdToolStripMenuItem5,
					this->ci�kaMaczugaToolStripMenuItem, this->kamiennyM�otToolStripMenuItem, this->korbaczToolStripMenuItem, this->lekkaMaczugaToolStripMenuItem,
					this->mahakamskiM�otBojowyToolStripMenuItem, this->m�otBojowyZakonuToolStripMenuItem, this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem,
					this->morgenszternDwur�cznyToolStripMenuItem, this->pochodniaToolStripMenuItem, this->�wi�tyM�otBojowyZakonuToolStripMenuItem,
					this->temerskiCepBojowyToolStripMenuItem
			});
			this->dadToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dadToolStripMenuItem->Name = L"dadToolStripMenuItem";
			this->dadToolStripMenuItem->Size = System::Drawing::Size(206, 43);
			this->dadToolStripMenuItem->Text = L"Bro� obuchowa";
			// 
			// asdToolStripMenuItem5
			// 
			this->asdToolStripMenuItem5->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->asdToolStripMenuItem5->Name = L"asdToolStripMenuItem5";
			this->asdToolStripMenuItem5->Size = System::Drawing::Size(310, 28);
			this->asdToolStripMenuItem5->Text = L"Bu�awa �a�cuchowa";
			// 
			// ci�kaMaczugaToolStripMenuItem
			// 
			this->ci�kaMaczugaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ci�kaMaczugaToolStripMenuItem->Name = L"ci�kaMaczugaToolStripMenuItem";
			this->ci�kaMaczugaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->ci�kaMaczugaToolStripMenuItem->Text = L"Ci�ka maczuga";
			// 
			// kamiennyM�otToolStripMenuItem
			// 
			this->kamiennyM�otToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->kamiennyM�otToolStripMenuItem->Name = L"kamiennyM�otToolStripMenuItem";
			this->kamiennyM�otToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->kamiennyM�otToolStripMenuItem->Text = L"Kamienny m�ot";
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
			// mahakamskiM�otBojowyToolStripMenuItem
			// 
			this->mahakamskiM�otBojowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiM�otBojowyToolStripMenuItem->Name = L"mahakamskiM�otBojowyToolStripMenuItem";
			this->mahakamskiM�otBojowyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->mahakamskiM�otBojowyToolStripMenuItem->Text = L"Mahakamski m�ot bojowy";
			// 
			// m�otBojowyZakonuToolStripMenuItem
			// 
			this->m�otBojowyZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->m�otBojowyZakonuToolStripMenuItem->Name = L"m�otBojowyZakonuToolStripMenuItem";
			this->m�otBojowyZakonuToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->m�otBojowyZakonuToolStripMenuItem->Text = L"M�ot bojowy Zakonu";
			// 
			// m�otBojowyZmutowanegoRycerzaToolStripMenuItem
			// 
			this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem->Name = L"m�otBojowyZmutowanegoRycerzaToolStripMenuItem";
			this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->m�otBojowyZmutowanegoRycerzaToolStripMenuItem->Text = L"M�ot bojowy zmutowanego rycerza";
			// 
			// morgenszternDwur�cznyToolStripMenuItem
			// 
			this->morgenszternDwur�cznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->morgenszternDwur�cznyToolStripMenuItem->Name = L"morgenszternDwur�cznyToolStripMenuItem";
			this->morgenszternDwur�cznyToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->morgenszternDwur�cznyToolStripMenuItem->Text = L"Morgensztern dwur�czny";
			// 
			// pochodniaToolStripMenuItem
			// 
			this->pochodniaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->pochodniaToolStripMenuItem->Name = L"pochodniaToolStripMenuItem";
			this->pochodniaToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->pochodniaToolStripMenuItem->Text = L"Pochodnia";
			// 
			// �wi�tyM�otBojowyZakonuToolStripMenuItem
			// 
			this->�wi�tyM�otBojowyZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->�wi�tyM�otBojowyZakonuToolStripMenuItem->Name = L"�wi�tyM�otBojowyZakonuToolStripMenuItem";
			this->�wi�tyM�otBojowyZakonuToolStripMenuItem->Size = System::Drawing::Size(310, 28);
			this->�wi�tyM�otBojowyZakonuToolStripMenuItem->Text = L"�wi�ty m�ot bojowy Zakonu";
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
					this->krasnoludzkiTop�rZMahakamuToolStripMenuItem, this->mahakamskiTop�rDwur�cznyToolStripMenuItem, this->ma�yTop�rToolStripMenuItem,
					this->runicznyTop�rZG�ryCarbonToolStripMenuItem, this->siekieraToolStripMenuItem, this->stalowyTop�rDwur�cznyToolStripMenuItem,
					this->�wi�tyTop�rZakonuToolStripMenuItem, this->temerskiTop�rStalowyToolStripMenuItem, this->temerskiTop�r�elaznyToolStripMenuItem
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
			this->asdToolStripMenuItem4->Text = L"Krasnoludzki top�r z G�ry Carbon";
			// 
			// krasnoludzkiTop�rZMahakamuToolStripMenuItem
			// 
			this->krasnoludzkiTop�rZMahakamuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->krasnoludzkiTop�rZMahakamuToolStripMenuItem->Name = L"krasnoludzkiTop�rZMahakamuToolStripMenuItem";
			this->krasnoludzkiTop�rZMahakamuToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->krasnoludzkiTop�rZMahakamuToolStripMenuItem->Text = L"Krasnoludzki top�r z Mahakamu";
			// 
			// mahakamskiTop�rDwur�cznyToolStripMenuItem
			// 
			this->mahakamskiTop�rDwur�cznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->mahakamskiTop�rDwur�cznyToolStripMenuItem->Name = L"mahakamskiTop�rDwur�cznyToolStripMenuItem";
			this->mahakamskiTop�rDwur�cznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->mahakamskiTop�rDwur�cznyToolStripMenuItem->Text = L"Mahakamski top�r dwur�czny";
			// 
			// ma�yTop�rToolStripMenuItem
			// 
			this->ma�yTop�rToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->ma�yTop�rToolStripMenuItem->Name = L"ma�yTop�rToolStripMenuItem";
			this->ma�yTop�rToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->ma�yTop�rToolStripMenuItem->Text = L"Ma�y top�r";
			// 
			// runicznyTop�rZG�ryCarbonToolStripMenuItem
			// 
			this->runicznyTop�rZG�ryCarbonToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->runicznyTop�rZG�ryCarbonToolStripMenuItem->Name = L"runicznyTop�rZG�ryCarbonToolStripMenuItem";
			this->runicznyTop�rZG�ryCarbonToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->runicznyTop�rZG�ryCarbonToolStripMenuItem->Text = L"Runiczny top�r z G�ry Carbon";
			// 
			// siekieraToolStripMenuItem
			// 
			this->siekieraToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->siekieraToolStripMenuItem->Name = L"siekieraToolStripMenuItem";
			this->siekieraToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->siekieraToolStripMenuItem->Text = L"Siekiera";
			// 
			// stalowyTop�rDwur�cznyToolStripMenuItem
			// 
			this->stalowyTop�rDwur�cznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->stalowyTop�rDwur�cznyToolStripMenuItem->Name = L"stalowyTop�rDwur�cznyToolStripMenuItem";
			this->stalowyTop�rDwur�cznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->stalowyTop�rDwur�cznyToolStripMenuItem->Text = L"Stalowy top�r dwur�czny";
			// 
			// �wi�tyTop�rZakonuToolStripMenuItem
			// 
			this->�wi�tyTop�rZakonuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->�wi�tyTop�rZakonuToolStripMenuItem->Name = L"�wi�tyTop�rZakonuToolStripMenuItem";
			this->�wi�tyTop�rZakonuToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->�wi�tyTop�rZakonuToolStripMenuItem->Text = L"�wi�ty top�r Zakonu";
			// 
			// temerskiTop�rStalowyToolStripMenuItem
			// 
			this->temerskiTop�rStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiTop�rStalowyToolStripMenuItem->Name = L"temerskiTop�rStalowyToolStripMenuItem";
			this->temerskiTop�rStalowyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->temerskiTop�rStalowyToolStripMenuItem->Text = L"Temerski top�r stalowy";
			// 
			// temerskiTop�r�elaznyToolStripMenuItem
			// 
			this->temerskiTop�r�elaznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiTop�r�elaznyToolStripMenuItem->Name = L"temerskiTop�r�elaznyToolStripMenuItem";
			this->temerskiTop�r�elaznyToolStripMenuItem->Size = System::Drawing::Size(305, 28);
			this->temerskiTop�r�elaznyToolStripMenuItem->Text = L"Temerski top�r �elazny";
			// 
			// asdToolStripMenuItem2
			// 
			this->asdToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->asdToolStripMenuItem3,
					this->mahakamskiSztyletRunicznyToolStripMenuItem, this->sztyletZDeithwenToolStripMenuItem, this->sztyletZab�jc�wToolStripMenuItem,
					this->temerskiSztyletStalowyToolStripMenuItem, this->temerskiSztylet�elaznyToolStripMenuItem
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
			// sztyletZab�jc�wToolStripMenuItem
			// 
			this->sztyletZab�jc�wToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->sztyletZab�jc�wToolStripMenuItem->Name = L"sztyletZab�jc�wToolStripMenuItem";
			this->sztyletZab�jc�wToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->sztyletZab�jc�wToolStripMenuItem->Text = L"Sztylet zab�jc�w";
			// 
			// temerskiSztyletStalowyToolStripMenuItem
			// 
			this->temerskiSztyletStalowyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiSztyletStalowyToolStripMenuItem->Name = L"temerskiSztyletStalowyToolStripMenuItem";
			this->temerskiSztyletStalowyToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->temerskiSztyletStalowyToolStripMenuItem->Text = L"Temerski sztylet stalowy";
			// 
			// temerskiSztylet�elaznyToolStripMenuItem
			// 
			this->temerskiSztylet�elaznyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Sitka Display", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->temerskiSztylet�elaznyToolStripMenuItem->Name = L"temerskiSztylet�elaznyToolStripMenuItem";
			this->temerskiSztylet�elaznyToolStripMenuItem->Size = System::Drawing::Size(270, 28);
			this->temerskiSztylet�elaznyToolStripMenuItem->Text = L"Temerski sztylet �elazny";
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

		toolStripContainer1->ContentPanel->BackgroundImage = Bitmap::FromFile("Grafika\\t�o1.png");
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
private: System::Void elfiMieczZNiebieskichG�rToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Projekt_OJP::ElfimieczzNiebieskichG�r^ Dane = gcnew Projekt_OJP::ElfimieczzNiebieskichG�r();
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
private: System::Void mieczZJednegoCzerwonegoIDw�ch��tychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
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

private: System::Void mieczZTrzech��tychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali5();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednego��tegoIDw�chCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
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
private: System::Void mieczZTrzechCzerwonychKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Mieczzmeteorytowejstali7();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void mieczZJednegoCzerwonegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
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
private: System::Void mieczZJednego��tegoIDw�chNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender,
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
private: System::Void mieczZTrzechNiebieskichKawa�k�wMeteorytowejStaliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

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
private: System::Void �wi�tyMieczZakonuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::�wi�tymieczZakonu();
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
private: System::Void wied�mi�skiMieczStalowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Wied�mi�skimieczstalowy();
			 Dane->Show();

			 Button ^ zamknij = gcnew Button;

			 zamknij->AutoSize;
			 zamknij->Text = "Zamknij";
			 zamknij->Click += gcnew System::EventHandler(this, &Form1::zamknij_Click);

			 zamknij->Location = Point(190, 300);

			 Dane->Controls->Add(zamknij);
}
private: System::Void zardzewia�yMieczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 auto Dane = gcnew Projekt_OJP::Zardzewia�ymiecz();
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

