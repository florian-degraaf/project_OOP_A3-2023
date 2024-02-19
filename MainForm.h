#pragma once
#include "personnel.h"
#include "RegisterForm.h"
#include "LoginForm.h"
#include "formclient.h"
#include "formarticle.h"
#include "formcommande.h"
#include "forminfoarticle.h"
#include "Formpaiement.h"
#include "formlignecommand.h"
#include "formpersonnel.h"
#include "formtva.h"

namespace bdd_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		bool^ modifyRightsStore = false;
		MainForm(personnel^ employee)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			bool registerState;
			if (employee->DROITS_MODIFICATION == 1) {
				registerState = true;
			}
			else {
				registerState = false;
			}
			lbUserInfo->Text = "Bonjour " + employee->NOM;
			this->btnRegister->Visible = registerState;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ modiferToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supprimerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ afficherToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierToolStripMenuItem;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;

	private: System::Windows::Forms::ToolStripMenuItem^ clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ commandeToolStripMenuItem;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem1;




	private: System::Windows::Forms::ToolStripMenuItem^ aRTICLESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem4;



	private: System::Windows::Forms::ToolStripMenuItem^ sOCIETEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem7;

	private: System::Windows::Forms::ToolStripMenuItem^ lIGNESDECOMMANDESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ pAIEMENTSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ pRIXARTICLESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ tVAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ pERSONNELToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aFFICHERToolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ mODIFIERToolStripMenuItem5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ hACKLANASaToolStripMenuItem;


	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;

	private: System::Windows::Forms::Button^ btnLogout;

	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::ToolStripMenuItem^ sTATISTIQUESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pRODUITSSOUSLESEUILToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pRODUITSTOP10ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pRODUITSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vALEURCOMMERCIALToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vALEURDACHATToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mONTANTTOTALPARCLIENTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cHIFFREToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pANIERMOYENToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->modiferToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->afficherToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->commandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lIGNESDECOMMANDESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pAIEMENTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aRTICLESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRIXARTICLESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tVAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sOCIETEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pERSONNELToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aFFICHERToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mODIFIERToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sTATISTIQUESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUITSSOUSLESEUILToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUITSTOP10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUITSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vALEURCOMMERCIALToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vALEURDACHATToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mONTANTTOTALPARCLIENTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cHIFFREToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pANIERMOYENToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hACKLANASaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(17, 50);
			this->lbUserInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(86, 31);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->modiferToolStripMenuItem,
					this->afficherToolStripMenuItem, this->supprimerToolStripMenuItem, this->ajouterToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(148, 100);
			// 
			// modiferToolStripMenuItem
			// 
			this->modiferToolStripMenuItem->Name = L"modiferToolStripMenuItem";
			this->modiferToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			this->modiferToolStripMenuItem->Text = L"Modifer";
			// 
			// afficherToolStripMenuItem
			// 
			this->afficherToolStripMenuItem->Name = L"afficherToolStripMenuItem";
			this->afficherToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			this->afficherToolStripMenuItem->Text = L"afficher";
			this->afficherToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::afficherToolStripMenuItem_Click);
			// 
			// supprimerToolStripMenuItem
			// 
			this->supprimerToolStripMenuItem->Name = L"supprimerToolStripMenuItem";
			this->supprimerToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			this->supprimerToolStripMenuItem->Text = L"Supprimer";
			// 
			// ajouterToolStripMenuItem
			// 
			this->ajouterToolStripMenuItem->Name = L"ajouterToolStripMenuItem";
			this->ajouterToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			this->ajouterToolStripMenuItem->Text = L"Ajouter";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->afficherToolStripMenuItem1,
					this->modifierToolStripMenuItem, this->aRTICLESToolStripMenuItem, this->sOCIETEToolStripMenuItem, this->sTATISTIQUESToolStripMenuItem,
					this->hACKLANASaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1557, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// afficherToolStripMenuItem1
			// 
			this->afficherToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clientToolStripMenuItem,
					this->commandeToolStripMenuItem
			});
			this->afficherToolStripMenuItem1->Name = L"afficherToolStripMenuItem1";
			this->afficherToolStripMenuItem1->Size = System::Drawing::Size(70, 24);
			this->afficherToolStripMenuItem1->Text = L"CLIENT";
			this->afficherToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::afficherToolStripMenuItem1_Click);
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->clientToolStripMenuItem->Text = L"AFFICHER";
			this->clientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::clientToolStripMenuItem_Click);
			// 
			// commandeToolStripMenuItem
			// 
			this->commandeToolStripMenuItem->Name = L"commandeToolStripMenuItem";
			this->commandeToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->commandeToolStripMenuItem->Text = L"MODIF. TABLE";
			this->commandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::commandeToolStripMenuItem_Click);
			// 
			// modifierToolStripMenuItem
			// 
			this->modifierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->aFFICHERToolStripMenuItem2,
					this->mODIFIERToolStripMenuItem1, this->lIGNESDECOMMANDESToolStripMenuItem, this->pAIEMENTSToolStripMenuItem
			});
			this->modifierToolStripMenuItem->Name = L"modifierToolStripMenuItem";
			this->modifierToolStripMenuItem->Size = System::Drawing::Size(117, 24);
			this->modifierToolStripMenuItem->Text = L"COMMANDES";
			this->modifierToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::modifierToolStripMenuItem_Click);
			// 
			// aFFICHERToolStripMenuItem2
			// 
			this->aFFICHERToolStripMenuItem2->Name = L"aFFICHERToolStripMenuItem2";
			this->aFFICHERToolStripMenuItem2->Size = System::Drawing::Size(261, 26);
			this->aFFICHERToolStripMenuItem2->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem2_Click);
			// 
			// mODIFIERToolStripMenuItem1
			// 
			this->mODIFIERToolStripMenuItem1->Name = L"mODIFIERToolStripMenuItem1";
			this->mODIFIERToolStripMenuItem1->Size = System::Drawing::Size(261, 26);
			this->mODIFIERToolStripMenuItem1->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem1_Click);
			// 
			// lIGNESDECOMMANDESToolStripMenuItem
			// 
			this->lIGNESDECOMMANDESToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aFFICHERToolStripMenuItem10,
					this->mODIFIERToolStripMenuItem9
			});
			this->lIGNESDECOMMANDESToolStripMenuItem->Name = L"lIGNESDECOMMANDESToolStripMenuItem";
			this->lIGNESDECOMMANDESToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->lIGNESDECOMMANDESToolStripMenuItem->Text = L"LIGNES DE COMMANDES";
			// 
			// aFFICHERToolStripMenuItem10
			// 
			this->aFFICHERToolStripMenuItem10->Name = L"aFFICHERToolStripMenuItem10";
			this->aFFICHERToolStripMenuItem10->Size = System::Drawing::Size(159, 26);
			this->aFFICHERToolStripMenuItem10->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem10->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem10_Click);
			// 
			// mODIFIERToolStripMenuItem9
			// 
			this->mODIFIERToolStripMenuItem9->Name = L"mODIFIERToolStripMenuItem9";
			this->mODIFIERToolStripMenuItem9->Size = System::Drawing::Size(159, 26);
			this->mODIFIERToolStripMenuItem9->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem9->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem9_Click);
			// 
			// pAIEMENTSToolStripMenuItem
			// 
			this->pAIEMENTSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aFFICHERToolStripMenuItem4,
					this->mODIFIERToolStripMenuItem3
			});
			this->pAIEMENTSToolStripMenuItem->Name = L"pAIEMENTSToolStripMenuItem";
			this->pAIEMENTSToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->pAIEMENTSToolStripMenuItem->Text = L"PAIEMENTS";
			// 
			// aFFICHERToolStripMenuItem4
			// 
			this->aFFICHERToolStripMenuItem4->Name = L"aFFICHERToolStripMenuItem4";
			this->aFFICHERToolStripMenuItem4->Size = System::Drawing::Size(159, 26);
			this->aFFICHERToolStripMenuItem4->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem4_Click);
			// 
			// mODIFIERToolStripMenuItem3
			// 
			this->mODIFIERToolStripMenuItem3->Name = L"mODIFIERToolStripMenuItem3";
			this->mODIFIERToolStripMenuItem3->Size = System::Drawing::Size(159, 26);
			this->mODIFIERToolStripMenuItem3->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem3_Click);
			// 
			// aRTICLESToolStripMenuItem
			// 
			this->aRTICLESToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aFFICHERToolStripMenuItem5,
					this->mODIFIERToolStripMenuItem4, this->pRIXARTICLESToolStripMenuItem
			});
			this->aRTICLESToolStripMenuItem->Name = L"aRTICLESToolStripMenuItem";
			this->aRTICLESToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->aRTICLESToolStripMenuItem->Text = L"ARTICLES";
			// 
			// aFFICHERToolStripMenuItem5
			// 
			this->aFFICHERToolStripMenuItem5->Name = L"aFFICHERToolStripMenuItem5";
			this->aFFICHERToolStripMenuItem5->Size = System::Drawing::Size(191, 26);
			this->aFFICHERToolStripMenuItem5->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem5_Click);
			// 
			// mODIFIERToolStripMenuItem4
			// 
			this->mODIFIERToolStripMenuItem4->Name = L"mODIFIERToolStripMenuItem4";
			this->mODIFIERToolStripMenuItem4->Size = System::Drawing::Size(191, 26);
			this->mODIFIERToolStripMenuItem4->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem4_Click);
			// 
			// pRIXARTICLESToolStripMenuItem
			// 
			this->pRIXARTICLESToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aFFICHERToolStripMenuItem3,
					this->mODIFIERToolStripMenuItem2, this->tVAToolStripMenuItem1
			});
			this->pRIXARTICLESToolStripMenuItem->Name = L"pRIXARTICLESToolStripMenuItem";
			this->pRIXARTICLESToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->pRIXARTICLESToolStripMenuItem->Text = L"INFO ARTICLES";
			// 
			// aFFICHERToolStripMenuItem3
			// 
			this->aFFICHERToolStripMenuItem3->Name = L"aFFICHERToolStripMenuItem3";
			this->aFFICHERToolStripMenuItem3->Size = System::Drawing::Size(159, 26);
			this->aFFICHERToolStripMenuItem3->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem3_Click);
			// 
			// mODIFIERToolStripMenuItem2
			// 
			this->mODIFIERToolStripMenuItem2->Name = L"mODIFIERToolStripMenuItem2";
			this->mODIFIERToolStripMenuItem2->Size = System::Drawing::Size(159, 26);
			this->mODIFIERToolStripMenuItem2->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem2_Click);
			// 
			// tVAToolStripMenuItem1
			// 
			this->tVAToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aFFICHERToolStripMenuItem9,
					this->mODIFIERToolStripMenuItem8
			});
			this->tVAToolStripMenuItem1->Name = L"tVAToolStripMenuItem1";
			this->tVAToolStripMenuItem1->Size = System::Drawing::Size(159, 26);
			this->tVAToolStripMenuItem1->Text = L"TVA";
			// 
			// aFFICHERToolStripMenuItem9
			// 
			this->aFFICHERToolStripMenuItem9->Name = L"aFFICHERToolStripMenuItem9";
			this->aFFICHERToolStripMenuItem9->Size = System::Drawing::Size(159, 26);
			this->aFFICHERToolStripMenuItem9->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem9->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem9_Click);
			// 
			// mODIFIERToolStripMenuItem8
			// 
			this->mODIFIERToolStripMenuItem8->Name = L"mODIFIERToolStripMenuItem8";
			this->mODIFIERToolStripMenuItem8->Size = System::Drawing::Size(159, 26);
			this->mODIFIERToolStripMenuItem8->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem8->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem8_Click);
			// 
			// sOCIETEToolStripMenuItem
			// 
			this->sOCIETEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aFFICHERToolStripMenuItem7,
					this->pERSONNELToolStripMenuItem1
			});
			this->sOCIETEToolStripMenuItem->Name = L"sOCIETEToolStripMenuItem";
			this->sOCIETEToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->sOCIETEToolStripMenuItem->Text = L"SOCIETE";
			// 
			// aFFICHERToolStripMenuItem7
			// 
			this->aFFICHERToolStripMenuItem7->Name = L"aFFICHERToolStripMenuItem7";
			this->aFFICHERToolStripMenuItem7->Size = System::Drawing::Size(173, 26);
			this->aFFICHERToolStripMenuItem7->Text = L"AFFICHER ";
			this->aFFICHERToolStripMenuItem7->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem7_Click);
			// 
			// pERSONNELToolStripMenuItem1
			// 
			this->pERSONNELToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aFFICHERToolStripMenuItem6,
					this->mODIFIERToolStripMenuItem5
			});
			this->pERSONNELToolStripMenuItem1->Name = L"pERSONNELToolStripMenuItem1";
			this->pERSONNELToolStripMenuItem1->Size = System::Drawing::Size(173, 26);
			this->pERSONNELToolStripMenuItem1->Text = L"PERSONNEL";
			// 
			// aFFICHERToolStripMenuItem6
			// 
			this->aFFICHERToolStripMenuItem6->Name = L"aFFICHERToolStripMenuItem6";
			this->aFFICHERToolStripMenuItem6->Size = System::Drawing::Size(159, 26);
			this->aFFICHERToolStripMenuItem6->Text = L"AFFICHER";
			this->aFFICHERToolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainForm::aFFICHERToolStripMenuItem6_Click);
			// 
			// mODIFIERToolStripMenuItem5
			// 
			this->mODIFIERToolStripMenuItem5->Name = L"mODIFIERToolStripMenuItem5";
			this->mODIFIERToolStripMenuItem5->Size = System::Drawing::Size(159, 26);
			this->mODIFIERToolStripMenuItem5->Text = L"MODIFIER";
			this->mODIFIERToolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainForm::mODIFIERToolStripMenuItem5_Click);
			// 
			// sTATISTIQUESToolStripMenuItem
			// 
			this->sTATISTIQUESToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->pRODUITSSOUSLESEUILToolStripMenuItem,
					this->pRODUITSTOP10ToolStripMenuItem, this->pRODUITSToolStripMenuItem, this->vALEURCOMMERCIALToolStripMenuItem, this->vALEURDACHATToolStripMenuItem,
					this->mONTANTTOTALPARCLIENTToolStripMenuItem, this->cHIFFREToolStripMenuItem, this->pANIERMOYENToolStripMenuItem
			});
			this->sTATISTIQUESToolStripMenuItem->Name = L"sTATISTIQUESToolStripMenuItem";
			this->sTATISTIQUESToolStripMenuItem->Size = System::Drawing::Size(116, 24);
			this->sTATISTIQUESToolStripMenuItem->Text = L"STATISTIQUES";
			// 
			// pRODUITSSOUSLESEUILToolStripMenuItem
			// 
			this->pRODUITSSOUSLESEUILToolStripMenuItem->Name = L"pRODUITSSOUSLESEUILToolStripMenuItem";
			this->pRODUITSSOUSLESEUILToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->pRODUITSSOUSLESEUILToolStripMenuItem->Text = L"PRODUITS SOUS LE SEUIL";
			this->pRODUITSSOUSLESEUILToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pRODUITSSOUSLESEUILToolStripMenuItem_Click);
			// 
			// pRODUITSTOP10ToolStripMenuItem
			// 
			this->pRODUITSTOP10ToolStripMenuItem->Name = L"pRODUITSTOP10ToolStripMenuItem";
			this->pRODUITSTOP10ToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->pRODUITSTOP10ToolStripMenuItem->Text = L"PRODUITS MIEUX VENDUS";
			this->pRODUITSTOP10ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pRODUITSTOP10ToolStripMenuItem_Click);
			// 
			// pRODUITSToolStripMenuItem
			// 
			this->pRODUITSToolStripMenuItem->Name = L"pRODUITSToolStripMenuItem";
			this->pRODUITSToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->pRODUITSToolStripMenuItem->Text = L"PRODUITS MOINS BIEN VENDUS";
			this->pRODUITSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pRODUITSToolStripMenuItem_Click);
			// 
			// vALEURCOMMERCIALToolStripMenuItem
			// 
			this->vALEURCOMMERCIALToolStripMenuItem->Name = L"vALEURCOMMERCIALToolStripMenuItem";
			this->vALEURCOMMERCIALToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->vALEURCOMMERCIALToolStripMenuItem->Text = L"VALEUR COMMERCIALE";
			this->vALEURCOMMERCIALToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::vALEURCOMMERCIALToolStripMenuItem_Click);
			// 
			// vALEURDACHATToolStripMenuItem
			// 
			this->vALEURDACHATToolStripMenuItem->Name = L"vALEURDACHATToolStripMenuItem";
			this->vALEURDACHATToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->vALEURDACHATToolStripMenuItem->Text = L"VALEUR D\'ACHAT";
			this->vALEURDACHATToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::vALEURDACHATToolStripMenuItem_Click);
			// 
			// mONTANTTOTALPARCLIENTToolStripMenuItem
			// 
			this->mONTANTTOTALPARCLIENTToolStripMenuItem->Name = L"mONTANTTOTALPARCLIENTToolStripMenuItem";
			this->mONTANTTOTALPARCLIENTToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->mONTANTTOTALPARCLIENTToolStripMenuItem->Text = L"MONTANT TOTAL PAR CLIENT";
			this->mONTANTTOTALPARCLIENTToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::mONTANTTOTALPARCLIENTToolStripMenuItem_Click);
			// 
			// cHIFFREToolStripMenuItem
			// 
			this->cHIFFREToolStripMenuItem->Name = L"cHIFFREToolStripMenuItem";
			this->cHIFFREToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->cHIFFREToolStripMenuItem->Text = L"CHIFFRE D\'AFFAIRE PAR MOIS ";
			this->cHIFFREToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::cHIFFREToolStripMenuItem_Click);
			// 
			// pANIERMOYENToolStripMenuItem
			// 
			this->pANIERMOYENToolStripMenuItem->Name = L"pANIERMOYENToolStripMenuItem";
			this->pANIERMOYENToolStripMenuItem->Size = System::Drawing::Size(309, 26);
			this->pANIERMOYENToolStripMenuItem->Text = L"PANIER MOYEN";
			this->pANIERMOYENToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pANIERMOYENToolStripMenuItem_Click);
			// 
			// hACKLANASaToolStripMenuItem
			// 
			this->hACKLANASaToolStripMenuItem->Name = L"hACKLANASaToolStripMenuItem";
			this->hACKLANASaToolStripMenuItem->Size = System::Drawing::Size(126, 24);
			this->hACKLANASaToolStripMenuItem->Text = L"HACK LA NASA";
			this->hACKLANASaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::hACKLANASaToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(937, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(162, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(755, 265);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// btnLogout
			// 
			this->btnLogout->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnLogout->Location = System::Drawing::Point(1060, 429);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(114, 25);
			this->btnLogout->TabIndex = 7;
			this->btnLogout->Text = L"Déconnexion";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(559, 49);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(75, 23);
			this->btnRegister->TabIndex = 9;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Visible = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MainForm::btnRegister_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CancelButton = this->btnLogout;
			this->ClientSize = System::Drawing::Size(1557, 668);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MENU PRINCIPAL";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public:
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		bdd_test::RegisterForm registerForm;
		registerForm.ShowDialog();
	}
	private: System::Void afficherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void afficherToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void clientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Columns->Clear();
		this->dataGridView1->Columns->Add("ID", "ID");
		this->dataGridView1->Columns->Add("PRENOM", "PENOM");
		this->dataGridView1->Columns->Add("NOM", "NOM");
		this->dataGridView1->Columns->Add("DATE DE NAISSANCE", "DATE DE NAISSANCE");

		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "SELECT ID_CLIENT, PRENOM, NOM, DATE_NAISSANCE FROM [desktop-o5e812k].[master].[dbo].[CLIENT]";
		SqlCommand command(sqlquery, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		while (reader->Read()) {
			this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetString(1), reader->GetString(2), reader->GetDateTime(3));
		}
		sqlConn.Close();



	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Columns->Clear();

	}
	private: System::Void commandeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bdd_test::formclient^ f1 = gcnew bdd_test::formclient();
		f1->ShowDialog();
		this->dataGridView1->Columns->Clear();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void modifierToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void hACKLANASaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("VEYEZ PAYER LE DLC AU PRIX DE 9999,99€", "FONCTIONNALITÉ BLOQUÉ", MessageBoxButtons::OKCancel);
	}
	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->btnRegister->Visible = false;

}
private: System::Void mODIFIERToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::formarticle formarticle;
	formarticle.ShowDialog();
}
private: System::Void mODIFIERToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::formcommande formcommande;
	formcommande.ShowDialog();
}
private: System::Void mODIFIERToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::forminfoarticle forminfoarticle;
	forminfoarticle.ShowDialog();
}
private: System::Void mODIFIERToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::Formpaiement Formpaiement;
	Formpaiement.ShowDialog();
}
private: System::Void mODIFIERToolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::formlignecommand formlignecommand;
	formlignecommand.ShowDialog();
}
private: System::Void aFFICHERToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID", "ID");
	this->dataGridView1->Columns->Add("DATE_EMISSION", "DATE_EMISSION");
	this->dataGridView1->Columns->Add("DATE_LIVRAISON", "DATE_LIVRAISON");
	this->dataGridView1->Columns->Add("DATE_FACTURATION", "DATE_FACTURATION");
	this->dataGridView1->Columns->Add("DATE_REGLEMENT", "DATE_REGLEMENT");
	this->dataGridView1->Columns->Add("ID_CLIENT", "ID_CLIENT");
	this->dataGridView1->Columns->Add("ID_SOCIETE", "ID_SOCIETE");

	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[COMMANDE]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetDateTime(1), reader->GetDateTime(2), reader->GetDateTime(3), reader->GetDateTime(4), reader->GetInt32(5), reader->GetInt32(6));
	}
	sqlConn.Close();
}
private: System::Void aFFICHERToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_ARTICLE", "ID_ARTICLE");
	this->dataGridView1->Columns->Add("NOM_ARTICLE", "NOM_ARTICLE");
	this->dataGridView1->Columns->Add("SEUIL_REAPRO", "SEUIL_REAPRO");


	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[ARTICLE]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetString(1), reader->GetInt32(2));
	}
	sqlConn.Close();
}
private: System::Void aFFICHERToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_PERSONNEL", "ID_PERSONNEL");
	this->dataGridView1->Columns->Add("PRENOM", "PRENOM");
	this->dataGridView1->Columns->Add("NOM", "NOM");
	this->dataGridView1->Columns->Add("MDP", "MDP");
	this->dataGridView1->Columns->Add("ID_SUPERIEUR", "ID_SUPERIEUR");
	this->dataGridView1->Columns->Add("DATE_EMBAUCHE", "DATE_EMBAUCHE");
	this->dataGridView1->Columns->Add("ADDRESSE", "ADRESSE");
	this->dataGridView1->Columns->Add("MAIL", "MAIL");
	this->dataGridView1->Columns->Add("TELEPHONE", "TELEPHONE");

	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[PERSONNEL]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetString(1), reader->GetString(2), reader->GetString(3), reader->GetInt32(4), reader->GetDateTime(5), reader->GetString(6), reader->GetString(7), reader->GetString(8));
	}
	sqlConn.Close();

}
private: System::Void aFFICHERToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_SOCIETE", "ID_SOCIETE");
	this->dataGridView1->Columns->Add("NOM_SOCIETE", "NOM_SOCIETE");
	this->dataGridView1->Columns->Add("ADRESSE_SOCIETE", "ADRESSE_SOCIETE");
	this->dataGridView1->Columns->Add("LOGO", "LOGO");
	this->dataGridView1->Columns->Add("NUMERO_SERVICE", "NUMERO_SERVICE");


	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[SOCIETE]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetString(1), reader->GetString(2), reader->GetString(3), reader->GetString(4));
	}
	sqlConn.Close();
}
private: System::Void aFFICHERToolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_LC", "ID_LC");
	this->dataGridView1->Columns->Add("QUANTITE", "QUANTITE");
	this->dataGridView1->Columns->Add("ID_COMMANDE", "ID_COMMANDE");
	this->dataGridView1->Columns->Add("ID_INFO", "ID_INFO");

	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[LIGNE_DE_COMMANDE]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetInt32(1), reader->GetInt32(2), reader->GetInt32(3));
	}
	sqlConn.Close();
}
private: System::Void aFFICHERToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_LC", "ID_LC");
	this->dataGridView1->Columns->Add("QUANTITE", "QUANTITE");
	this->dataGridView1->Columns->Add("ID_COMMANDE", "ID_COMMANDE");
	this->dataGridView1->Columns->Add("ID_INFO", "ID_INFO");
	this->dataGridView1->Columns->Add("ID_INFO", "ID_INFO");

	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[LIGNE_DE_COMMANDE]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetInt32(1), reader->GetInt32(2), reader->GetInt32(3));
	}
	sqlConn.Close();
}
private: System::Void aFFICHERToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_INFO", "ID_INFO");
	this->dataGridView1->Columns->Add("PARAMETRES", "PARAMETRES");
	this->dataGridView1->Columns->Add("MONTANT", "MONTANT");
	this->dataGridView1->Columns->Add("QUANTITE_RESTANTE", "QUANTITE_RESTANTE");
	this->dataGridView1->Columns->Add("ID_ARTICLE", "ID_ARTICLE");
	this->dataGridView1->Columns->Add("TYPE_TAUX", "TYPE_TAUX");


	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[INFO]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetString(1), reader->GetInt32(2), reader->GetInt32(3), reader->GetInt32(4), reader->GetInt32(5));
	}
	sqlConn.Close();
}
private: System::Void mODIFIERToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::RegisterForm RegisterForm;
	RegisterForm.ShowDialog();
}
private: System::Void mODIFIERToolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
	bdd_test::formtva formtva;
	formtva.ShowDialog();
}
private: System::Void aFFICHERToolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("TYPE_TAUX", "TYPE_TAUX");
	this->dataGridView1->Columns->Add("VALEUR", "VALEUR");
	this->dataGridView1->Columns->Add("DATE_DE_FIN", "DATE_DE_FIN");
	this->dataGridView1->Columns->Add("DATE_DE_DEBUT", "DATE_DE_DEBUT");

	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT * FROM [desktop-o5e812k].[master].[dbo].[TVA]";
	SqlCommand command(sqlquery, % sqlConn);
	SqlDataReader^ reader = command.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Add(reader->GetInt32(0), reader->GetValue(1), reader->GetDateTime(2), reader->GetDateTime(3));
	}
	sqlConn.Close();
}
private: System::Void pRODUITSTOP10ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("NOM_ARTICLE", "NOM_ARTICLE");
	this->dataGridView1->Columns->Add("QUANTITE_VENDUE", "QUANTITE_VENDUE");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT TOP 10 NOM_ARTICLE, QUANTITE AS qte FROM ARTICLE INNER JOIN INFO ON ARTICLE.ID_ARTICLE = INFO.ID_ARTICLE	INNER JOIN LIGNE_DE_COMMANDE LC ON INFO.ID_INFO = LC.ID_INFO ORDER BY qte DESC";
		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void pRODUITSSOUSLESEUILToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("NOM_ARTICLE", "NOM_ARTICLE");
	this->dataGridView1->Columns->Add("QUANTITE_RESTANTE", "QUANTITE_RESTANTE");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT DISTINCT NOM_ARTICLE , SUM(QUANTITE_RESTANTE) AS ' Quantite restante'FROM ARTICLE INNER JOIN INFO ON ARTICLE.ID_ARTICLE = INFO.ID_ARTICLE WHERE QUANTITE_RESTANTE < SEUIL_REAPRO	GROUP BY NOM_ARTICLE";
		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void pRODUITSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("NOM_ARTICLE", "NOM_ARTICLE");
	this->dataGridView1->Columns->Add("QUANTITE_VENDUE", "QUANTITE_VENDUE");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT TOP 10 NOM_ARTICLE, QUANTITE AS qte FROM ARTICLE	INNER JOIN INFO ON ARTICLE.ID_ARTICLE = INFO.ID_ARTICLE	INNER JOIN LIGNE_DE_COMMANDE LC ON INFO.ID_INFO = LC.ID_INFO ORDER BY qte ASC";
		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void vALEURCOMMERCIALToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("VALEUR_COMERCIALE", "VALEUR_COMERCIALE");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT SUM( (QUANTITE_RESTANTE * MONTANT) * 1.2) AS 'Valeur commerciale du stock' FROM INFO";
		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void vALEURDACHATToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("VALEUR_marchande", "VALEUR_marchande");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT SUM( (QUANTITE_RESTANTE * MONTANT) ) AS 'Valeur marchande du stock' FROM INFO";
		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void mONTANTTOTALPARCLIENTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("ID_CLIENT", "ID_CLIENT");
	this->dataGridView1->Columns->Add("MONTANT_TOTAL_ACHAT", "MONTANT_TOTAL_ACHAT");
		String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT ID_CLIENT, sum(QUANTITE * MONTANT*1.2*VALEUR) AS 'total achat client' FROM COMMANDE CMD INNER JOIN LIGNE_DE_COMMANDE LC ON CMD.ID_COMMANDE = LC.ID_COMMANDE INNER JOIN INFO ON LC.ID_INFO = INFO.ID_INFO	INNER JOIN TVA ON INFO.TYPE_TAUX = TVA.TYPE_TAUX GROUP BY ID_CLIENT	ORDER BY 'total achat client' desc";

		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void cHIFFREToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("CHIFFRE_D'AFFAIRE", "CHIFFRE_D'AFFAIRE");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT sum(QUANTITE * MONTANT*1.2*VALEUR) AS 'CA' FROM COMMANDE CMD	INNER JOIN LIGNE_DE_COMMANDE LC ON CMD.ID_COMMANDE = LC.ID_COMMANDE	INNER JOIN INFO ON LC.ID_INFO = INFO.ID_INFO INNER JOIN TVA ON INFO.TYPE_TAUX = TVA.TYPE_TAUX WHERE MONTH(DATE_REGLEMENT) = 5";

		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
private: System::Void pANIERMOYENToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Columns->Add("PANIER_MOYEN", "PANIER_MOYEN");
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "SELECT AVG(QUANTITE * MONTANT*1.2*VALEUR) AS 'Panier moyen' FROM CLIENT INNER JOIN COMMANDE CMD ON CLIENT.ID_CLIENT = CMD.ID_CLIENT	INNER JOIN LIGNE_DE_COMMANDE LC ON CMD.ID_COMMANDE = LC.ID_COMMANDE	INNER JOIN INFO ON LC.ID_INFO = INFO.ID_INFO INNER JOIN TVA ON INFO.TYPE_TAUX = TVA.TYPE_TAUX;";

		SqlCommand command(sqlquery, % sqlConn);
	int a;
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->HasRows) {
		while (reader->Read()) {
		}
	}
}
};
};


