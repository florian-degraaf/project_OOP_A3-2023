#pragma once
#include "personnel.h"
#include "LoginForm.h"
#include "RegisterForm.h"

namespace bdd_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ tbFirstName;


	protected:


	private: System::Windows::Forms::Label^ lblName;




	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ lblPassword;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ lblConfirmPassword;

	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DateTimePicker^ dtpHiringDate;
	private: System::Windows::Forms::Label^ lblHiringDate;




	private: System::Windows::Forms::TextBox^ tbMail;
	private: System::Windows::Forms::TextBox^ tbIdSuperior;
	private: System::Windows::Forms::Label^ lblIdSuperior;



	private: System::Windows::Forms::TextBox^ tbIdPersonnel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
















	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblAdresse;
	private: System::Windows::Forms::Label^ lblMail;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Button^ btnConfirmModify;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dtpHiringDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblHiringDate = (gcnew System::Windows::Forms::Label());
			this->tbMail = (gcnew System::Windows::Forms::TextBox());
			this->tbIdSuperior = (gcnew System::Windows::Forms::TextBox());
			this->lblIdSuperior = (gcnew System::Windows::Forms::Label());
			this->tbIdPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblAdresse = (gcnew System::Windows::Forms::Label());
			this->lblMail = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->btnConfirmModify = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(505, 84);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(582, 124);
			this->tbFirstName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(420, 43);
			this->tbFirstName->TabIndex = 2;
			this->tbFirstName->Text = L"Nom";
			this->tbFirstName->Visible = false;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(256, 175);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(78, 38);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Nom";
			this->lblName->Visible = false;
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(582, 277);
			this->tbPhone->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(420, 43);
			this->tbPhone->TabIndex = 2;
			this->tbPhone->Text = L"0123456789";
			this->tbPhone->Visible = false;
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(582, 226);
			this->tbAddress->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(420, 43);
			this->tbAddress->TabIndex = 2;
			this->tbAddress->Text = L"Rue N°, Code Postale, Ville, Pays";
			this->tbAddress->Visible = false;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(258, 479);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(183, 38);
			this->lblPassword->TabIndex = 1;
			this->lblPassword->Text = L"Mot de passe";
			this->lblPassword->Visible = false;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(582, 479);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(420, 43);
			this->tbPassword->TabIndex = 2;
			this->tbPassword->Text = L"0000";
			this->tbPassword->Visible = false;
			// 
			// lblConfirmPassword
			// 
			this->lblConfirmPassword->AutoSize = true;
			this->lblConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConfirmPassword->Location = System::Drawing::Point(256, 530);
			this->lblConfirmPassword->Name = L"lblConfirmPassword";
			this->lblConfirmPassword->Size = System::Drawing::Size(314, 38);
			this->lblConfirmPassword->TabIndex = 1;
			this->lblConfirmPassword->Text = L"Confirmer mot de passe";
			this->lblConfirmPassword->Visible = false;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(582, 530);
			this->tbConfirmPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(420, 43);
			this->tbConfirmPassword->TabIndex = 2;
			this->tbConfirmPassword->Text = L"0000";
			this->tbConfirmPassword->Visible = false;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(645, 665);
			this->btnOK->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(165, 44);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Visible = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(816, 716);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(133, 44);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// dtpHiringDate
			// 
			this->dtpHiringDate->Location = System::Drawing::Point(582, 378);
			this->dtpHiringDate->Name = L"dtpHiringDate";
			this->dtpHiringDate->Size = System::Drawing::Size(420, 43);
			this->dtpHiringDate->TabIndex = 4;
			this->dtpHiringDate->Visible = false;
			// 
			// lblHiringDate
			// 
			this->lblHiringDate->AutoSize = true;
			this->lblHiringDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHiringDate->Location = System::Drawing::Point(258, 378);
			this->lblHiringDate->Name = L"lblHiringDate";
			this->lblHiringDate->Size = System::Drawing::Size(234, 38);
			this->lblHiringDate->TabIndex = 1;
			this->lblHiringDate->Text = L"Date d\'embauche";
			this->lblHiringDate->Visible = false;
			this->lblHiringDate->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// tbMail
			// 
			this->tbMail->Location = System::Drawing::Point(582, 328);
			this->tbMail->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbMail->Name = L"tbMail";
			this->tbMail->Size = System::Drawing::Size(420, 43);
			this->tbMail->TabIndex = 2;
			this->tbMail->Text = L"0123456789";
			this->tbMail->Visible = false;
			this->tbMail->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// tbIdSuperior
			// 
			this->tbIdSuperior->Location = System::Drawing::Point(582, 428);
			this->tbIdSuperior->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbIdSuperior->Name = L"tbIdSuperior";
			this->tbIdSuperior->Size = System::Drawing::Size(420, 43);
			this->tbIdSuperior->TabIndex = 2;
			this->tbIdSuperior->Text = L"0123456789";
			this->tbIdSuperior->Visible = false;
			this->tbIdSuperior->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// lblIdSuperior
			// 
			this->lblIdSuperior->AutoSize = true;
			this->lblIdSuperior->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdSuperior->Location = System::Drawing::Point(258, 428);
			this->lblIdSuperior->Name = L"lblIdSuperior";
			this->lblIdSuperior->Size = System::Drawing::Size(169, 38);
			this->lblIdSuperior->TabIndex = 1;
			this->lblIdSuperior->Text = L"ID superieur";
			this->lblIdSuperior->Visible = false;
			this->lblIdSuperior->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// tbIdPersonnel
			// 
			this->tbIdPersonnel->Location = System::Drawing::Point(56, 170);
			this->tbIdPersonnel->Name = L"tbIdPersonnel";
			this->tbIdPersonnel->Size = System::Drawing::Size(169, 43);
			this->tbIdPersonnel->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ID Personnel";
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(645, 716);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(165, 44);
			this->btnModify->TabIndex = 7;
			this->btnModify->Text = L"Modifier";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &RegisterForm::btnModify_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(816, 665);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(133, 44);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Ajouter";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RegisterForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(481, 716);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(158, 44);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Supprimer";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RegisterForm::btnDelete_Click);
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->Location = System::Drawing::Point(258, 124);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(114, 38);
			this->lblFirstName->TabIndex = 1;
			this->lblFirstName->Text = L"Prenom";
			this->lblFirstName->Visible = false;
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(258, 277);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(145, 38);
			this->lblPhone->TabIndex = 1;
			this->lblPhone->Text = L"Téléphone";
			this->lblPhone->Visible = false;
			this->lblPhone->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// lblAdresse
			// 
			this->lblAdresse->AutoSize = true;
			this->lblAdresse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdresse->Location = System::Drawing::Point(256, 226);
			this->lblAdresse->Name = L"lblAdresse";
			this->lblAdresse->Size = System::Drawing::Size(115, 38);
			this->lblAdresse->TabIndex = 1;
			this->lblAdresse->Text = L"Adresse";
			this->lblAdresse->Visible = false;
			// 
			// lblMail
			// 
			this->lblMail->AutoSize = true;
			this->lblMail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMail->Location = System::Drawing::Point(258, 327);
			this->lblMail->Name = L"lblMail";
			this->lblMail->Size = System::Drawing::Size(83, 38);
			this->lblMail->TabIndex = 1;
			this->lblMail->Text = L"Email";
			this->lblMail->Visible = false;
			this->lblMail->Click += gcnew System::EventHandler(this, &RegisterForm::label4_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(582, 175);
			this->tbName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(420, 43);
			this->tbName->TabIndex = 2;
			this->tbName->Text = L"nom@example.com";
			this->tbName->Visible = false;
			// 
			// btnConfirmModify
			// 
			this->btnConfirmModify->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmModify->Location = System::Drawing::Point(474, 665);
			this->btnConfirmModify->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnConfirmModify->Name = L"btnConfirmModify";
			this->btnConfirmModify->Size = System::Drawing::Size(165, 44);
			this->btnConfirmModify->TabIndex = 3;
			this->btnConfirmModify->Text = L"Confirmer";
			this->btnConfirmModify->UseVisualStyleBackColor = true;
			this->btnConfirmModify->Visible = false;
			this->btnConfirmModify->Click += gcnew System::EventHandler(this, &RegisterForm::btnConfirmModify_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1041, 804);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbIdPersonnel);
			this->Controls->Add(this->dtpHiringDate);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnConfirmModify);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lblConfirmPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->tbIdSuperior);
			this->Controls->Add(this->tbMail);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->lblAdresse);
			this->Controls->Add(this->lblIdSuperior);
			this->Controls->Add(this->lblMail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lblHiringDate);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: personnel^ employee = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prenom = tbFirstName->Text;
		String^ nom = tbName->Text;
		String^ mdp = tbPassword->Text;
		String^ mdp_confirm = tbConfirmPassword->Text;
		String^ temp_id_superieur = tbIdSuperior->Text;
		DateTime^ date_embauche = dtpHiringDate->Value;
		String^ adresse = tbAddress->Text;
		String^ mail = tbMail->Text;
		String^ telephone = tbPhone->Text;

		int id_superieur = Convert::ToInt32(temp_id_superieur);



		if (nom->Length == 0 || prenom->Length == 0
			|| mdp->Length == 0 || adresse->Length == 0 || mail->Length == 0 || telephone->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(mdp, mdp_confirm) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO PERSONNEL " +
				"(PRENOM, NOM, MDP, ID_SUPERIEUR, DATE_EMBAUCHE, ADDRESSE, MAIL, TELEPHONE) VALUES " +
				"(@prenom, @nom, @mdp, @id_superieur, @date_embauche, @addresse, @mail, @telephone);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@nom", nom);
			command.Parameters->AddWithValue("@prenom", prenom);
			command.Parameters->AddWithValue("@mdp", mdp);
			command.Parameters->AddWithValue("@id_superieur", id_superieur);
			command.Parameters->AddWithValue("@date_embauche", date_embauche);
			command.Parameters->AddWithValue("@addresse", adresse);
			command.Parameters->AddWithValue("@mail", mail);
			command.Parameters->AddWithValue("@telephone", telephone);

			command.ExecuteNonQuery();
			employee = gcnew personnel;
			employee->PRENOM = prenom;
			employee->NOM = nom;
			employee->MDP = mdp;
			employee->ID_SUPERIEUR = id_superieur;
			employee->DATE_EMBAUCHE = date_embauche;
			employee->ADRESSE = adresse;
			employee->MAIL = mail;
			employee->TELEPHONE = telephone;

			MessageBox::Show("Rajouté l'employée", "Succes", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblFirstName->Visible = true;
	this->lblName->Visible = true;
	this->lblMail->Visible = true;
	this->lblAdresse->Visible = true;
	this->lblPhone->Visible = true;
	this->lblIdSuperior->Visible = true;
	this->lblHiringDate->Visible = true;
	this->lblPassword->Visible = true;
	this->lblConfirmPassword->Visible = true;
	this->tbFirstName->Visible = true;
	this->tbName->Visible = true;
	this->tbAddress->Visible = true;
	this->tbIdSuperior->Visible = true;
	this->tbPhone->Visible = true;
	this->tbMail->Visible = true;
	this->tbPassword->Visible = true;
	this->tbConfirmPassword->Visible = true;
	this->dtpHiringDate->Visible = true;
	this->btnOK->Visible = true;
}
private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblFirstName->Visible = true;
	this->lblName->Visible = true;
	this->lblMail->Visible = true;
	this->lblAdresse->Visible = true;
	this->lblPhone->Visible = true;
	this->lblIdSuperior->Visible = true;
	this->lblHiringDate->Visible = true;
	this->lblPassword->Visible = true;
	this->lblConfirmPassword->Visible = true;
	this->tbFirstName->Visible = true;
	this->tbName->Visible = true;
	this->tbAddress->Visible = true;
	this->tbIdSuperior->Visible = true;
	this->tbPhone->Visible = true;
	this->tbMail->Visible = true;
	this->tbPassword->Visible = true;
	this->tbConfirmPassword->Visible = true;
	this->dtpHiringDate->Visible = true;
	this->btnConfirmModify->Visible = true;

		String^ connString = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM PERSONNEL WHERE ID_PERSONNEL = @id;";
		SqlCommand command1(sqlQuery, % sqlConn);
		int convertStringToInt = System::Convert::ToInt32(tbIdPersonnel->Text);
		command1.Parameters->AddWithValue("@id", convertStringToInt);
		SqlCommand command(sqlQuery, % sqlConn);
		//activeClient^ activeClient = formclient.activeClient;
		SqlDataReader^ reader = command1.ExecuteReader();

		employee = gcnew personnel;
		reader->Read();
		employee->PRENOM = reader->GetString(1);
		employee->NOM = reader->GetString(2);
		employee->MDP = reader->GetString(3);
		employee->ID_SUPERIEUR = reader->GetInt32(4);
		employee->DATE_EMBAUCHE = reader->GetDateTime(5);
		employee->ADRESSE = reader->GetString(6);
		employee->MAIL = reader->GetString(7);
		employee->TELEPHONE = reader->GetString(8);

		this->tbFirstName->Text = reader->GetString(1);
		this->tbName->Text = reader->GetString(2);
		this->tbPassword->Text = reader->GetString(3);
		this->tbConfirmPassword->Text = reader->GetString(3);
		this->tbIdSuperior->Text = Convert::ToString(reader->GetInt32(4));
		this->dtpHiringDate->Value = reader->GetDateTime(5);
		this->tbAddress->Text = reader->GetString(6);
		this->tbMail->Text = reader->GetString(7);
		this->tbPhone->Text = reader->GetString(8);
}
	private: System::Void btnConfirmModify_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prenom = tbFirstName->Text;
		String^ nom = tbName->Text;
		String^ mdp = tbPassword->Text;
		String^ mdp_confirm = tbConfirmPassword->Text;
		String^ temp_id_superieur = tbIdSuperior->Text;
		DateTime^ date_embauche = dtpHiringDate->Value;
		String^ adresse = tbAddress->Text;
		String^ mail = tbMail->Text;
		String^ telephone = tbPhone->Text;

		int id_superieur = Convert::ToInt32(temp_id_superieur);

		String^ connString = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "UPDATE [desktop-o5e812k].[master].[dbo].[PERSONNEL] SET PRENOM = @prenom, NOM = @nom, MDP = @mdp, ID_SUPERIEUR = @id_superieur, DATE_EMBAUCHE = @date_embauche, ADRESSE = @adresse, MAIL = @mail, TELEPHONE = @telephone WHERE ID_PERSONNEL = @id";
			//"(PRENOM, NOM, MDP, ID_SUPERIEUR, DATE_EMBAUCHE, ADDRESSE, MAIL, TELEPHONE) VALUES " +
			//"(@prenom, @nom, @mdp, @id_superieur, @date_embauche, @addresse, @mail, @telephone);";
		//String^ sqlquery = "UPDATE[desktop-o5e812k].[master].[dbo].[CLIENT] SET PRENOM = @prenom, NOM = @nom, DATE_NAISSANCE = @dob WHERE ID_CLIENT = @id_client";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@id", this->tbIdPersonnel->Text);
		command.Parameters->AddWithValue("@nom", nom);
		command.Parameters->AddWithValue("@prenom", prenom);
		command.Parameters->AddWithValue("@mdp", mdp);
		command.Parameters->AddWithValue("@id_superieur", id_superieur);
		command.Parameters->AddWithValue("@date_embauche", date_embauche);
		command.Parameters->AddWithValue("@adresse", adresse);
		command.Parameters->AddWithValue("@mail", mail);
		command.Parameters->AddWithValue("@telephone", telephone);
		command.ExecuteNonQuery();
		this->Close();
	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connstring = "Data Source=localhost;Integrated Security=True";
	SqlConnection sqlConn(connstring);
	sqlConn.Open();
	String^ sqlquery = "DELETE FROM PERSONNEL WHERE ID_PERSONNEL = @id";
	SqlCommand command(sqlquery, % sqlConn);
	int convertStringToInt = System::Convert::ToInt32(tbIdPersonnel->Text);
	command.Parameters->AddWithValue("@id", convertStringToInt);
	command.ExecuteNonQuery();
	MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
	this->Close();
}
};
}
