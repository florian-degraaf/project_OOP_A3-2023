#pragma once

#include "activeClient.h"

namespace bdd_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de formclient
	/// </summary>
	public ref class formclient : public System::Windows::Forms::Form
	{
	public:
		String^ text;
		formclient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~formclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ suppr;
	private: System::Windows::Forms::Button^ modif;
	private: System::Windows::Forms::TextBox^ tbNewFirstName;
	private: System::Windows::Forms::Label^ lblNewFirstName;




	private: System::Windows::Forms::Button^ confirmmodif;

	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ fermer;









	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Label^ lblNewName;

	private: System::Windows::Forms::TextBox^ tbNewName;
	private: System::Windows::Forms::Label^ lblNewDOB;








	private: System::Windows::Forms::TextBox^ tbId;










	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::DateTimePicker^ dtpNewDOB;
	private: System::Windows::Forms::Label^ lnumadress;
	private: System::Windows::Forms::TextBox^ tbnumadres;
	private: System::Windows::Forms::Label^ lrue;
	private: System::Windows::Forms::TextBox^ tbrue;
	private: System::Windows::Forms::TextBox^ tbville;
	private: System::Windows::Forms::Label^ Ville;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ cbadresse;
	private: System::Windows::Forms::Button^ confirmajoutadress;
	private: System::Windows::Forms::ComboBox^ cbanciennesadresse;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->suppr = (gcnew System::Windows::Forms::Button());
			this->modif = (gcnew System::Windows::Forms::Button());
			this->tbNewFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblNewFirstName = (gcnew System::Windows::Forms::Label());
			this->confirmmodif = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->fermer = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->lblNewName = (gcnew System::Windows::Forms::Label());
			this->tbNewName = (gcnew System::Windows::Forms::TextBox());
			this->lblNewDOB = (gcnew System::Windows::Forms::Label());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dtpNewDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->lnumadress = (gcnew System::Windows::Forms::Label());
			this->tbnumadres = (gcnew System::Windows::Forms::TextBox());
			this->lrue = (gcnew System::Windows::Forms::Label());
			this->tbrue = (gcnew System::Windows::Forms::TextBox());
			this->tbville = (gcnew System::Windows::Forms::TextBox());
			this->Ville = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cbadresse = (gcnew System::Windows::Forms::ComboBox());
			this->confirmajoutadress = (gcnew System::Windows::Forms::Button());
			this->cbanciennesadresse = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(635, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formclient::button1_Click);
			// 
			// suppr
			// 
			this->suppr->Location = System::Drawing::Point(549, 378);
			this->suppr->Name = L"suppr";
			this->suppr->Size = System::Drawing::Size(80, 23);
			this->suppr->TabIndex = 3;
			this->suppr->Text = L"Supprimer";
			this->suppr->UseVisualStyleBackColor = true;
			this->suppr->Click += gcnew System::EventHandler(this, &formclient::suppr_Click);
			// 
			// modif
			// 
			this->modif->Location = System::Drawing::Point(549, 349);
			this->modif->Name = L"modif";
			this->modif->Size = System::Drawing::Size(80, 23);
			this->modif->TabIndex = 2;
			this->modif->Text = L"Modifier";
			this->modif->UseVisualStyleBackColor = true;
			this->modif->Click += gcnew System::EventHandler(this, &formclient::modif_Click);
			// 
			// tbNewFirstName
			// 
			this->tbNewFirstName->Location = System::Drawing::Point(231, 43);
			this->tbNewFirstName->Name = L"tbNewFirstName";
			this->tbNewFirstName->Size = System::Drawing::Size(237, 22);
			this->tbNewFirstName->TabIndex = 10;
			this->tbNewFirstName->Visible = false;
			this->tbNewFirstName->TextChanged += gcnew System::EventHandler(this, &formclient::tbNewFirstName_TextChanged);
			// 
			// lblNewFirstName
			// 
			this->lblNewFirstName->AutoSize = true;
			this->lblNewFirstName->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lblNewFirstName->Location = System::Drawing::Point(228, 19);
			this->lblNewFirstName->Name = L"lblNewFirstName";
			this->lblNewFirstName->Size = System::Drawing::Size(136, 16);
			this->lblNewFirstName->TabIndex = 11;
			this->lblNewFirstName->Text = L"NOUVEAU PRENOM";
			this->lblNewFirstName->Visible = false;
			this->lblNewFirstName->Click += gcnew System::EventHandler(this, &formclient::lblNewFirstName_Click);
			// 
			// confirmmodif
			// 
			this->confirmmodif->Location = System::Drawing::Point(635, 378);
			this->confirmmodif->Name = L"confirmmodif";
			this->confirmmodif->Size = System::Drawing::Size(83, 23);
			this->confirmmodif->TabIndex = 13;
			this->confirmmodif->Text = L"Confirmer";
			this->confirmmodif->UseVisualStyleBackColor = true;
			this->confirmmodif->Visible = false;
			this->confirmmodif->Click += gcnew System::EventHandler(this, &formclient::confirm_Click);
			// 
			// cancel
			// 
			this->cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancel->Location = System::Drawing::Point(460, 349);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(83, 23);
			this->cancel->TabIndex = 4;
			this->cancel->Text = L"Annuler";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Visible = false;
			this->cancel->Click += gcnew System::EventHandler(this, &formclient::cancel_Click);
			// 
			// fermer
			// 
			this->fermer->Location = System::Drawing::Point(468, 378);
			this->fermer->Name = L"fermer";
			this->fermer->Size = System::Drawing::Size(75, 23);
			this->fermer->TabIndex = 17;
			this->fermer->Text = L"Annuler";
			this->fermer->UseVisualStyleBackColor = true;
			this->fermer->Click += gcnew System::EventHandler(this, &formclient::Close_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(635, 378);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(83, 23);
			this->confirmajout->TabIndex = 27;
			this->confirmajout->Text = L"Confirmer";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &formclient::confirmajout_Click);
			// 
			// lblNewName
			// 
			this->lblNewName->AutoSize = true;
			this->lblNewName->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lblNewName->Location = System::Drawing::Point(228, 97);
			this->lblNewName->Name = L"lblNewName";
			this->lblNewName->Size = System::Drawing::Size(108, 16);
			this->lblNewName->TabIndex = 30;
			this->lblNewName->Text = L"NOUVEAU NOM";
			this->lblNewName->Visible = false;
			this->lblNewName->Click += gcnew System::EventHandler(this, &formclient::lblNewName_Click);
			// 
			// tbNewName
			// 
			this->tbNewName->Location = System::Drawing::Point(231, 116);
			this->tbNewName->Name = L"tbNewName";
			this->tbNewName->Size = System::Drawing::Size(237, 22);
			this->tbNewName->TabIndex = 29;
			this->tbNewName->Visible = false;
			this->tbNewName->TextChanged += gcnew System::EventHandler(this, &formclient::tbNewName_TextChanged);
			// 
			// lblNewDOB
			// 
			this->lblNewDOB->AutoSize = true;
			this->lblNewDOB->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lblNewDOB->Location = System::Drawing::Point(228, 170);
			this->lblNewDOB->Name = L"lblNewDOB";
			this->lblNewDOB->Size = System::Drawing::Size(220, 16);
			this->lblNewDOB->TabIndex = 32;
			this->lblNewDOB->Text = L"NOUVELLE DATE DE NAISSANCE";
			this->lblNewDOB->Visible = false;
			this->lblNewDOB->Click += gcnew System::EventHandler(this, &formclient::lblNewDOB_Click);
			// 
			// tbId
			// 
			this->tbId->Location = System::Drawing::Point(56, 43);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(100, 22);
			this->tbId->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label11->Location = System::Drawing::Point(53, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"ID du client";
			// 
			// dtpNewDOB
			// 
			this->dtpNewDOB->Location = System::Drawing::Point(231, 189);
			this->dtpNewDOB->Name = L"dtpNewDOB";
			this->dtpNewDOB->Size = System::Drawing::Size(237, 22);
			this->dtpNewDOB->TabIndex = 42;
			this->dtpNewDOB->Visible = false;
			this->dtpNewDOB->ValueChanged += gcnew System::EventHandler(this, &formclient::dtpNewDOB_ValueChanged);
			// 
			// lnumadress
			// 
			this->lnumadress->AutoSize = true;
			this->lnumadress->Location = System::Drawing::Point(231, 272);
			this->lnumadress->Name = L"lnumadress";
			this->lnumadress->Size = System::Drawing::Size(109, 16);
			this->lnumadress->TabIndex = 44;
			this->lnumadress->Text = L"Numero Adresse";
			this->lnumadress->Visible = false;
			// 
			// tbnumadres
			// 
			this->tbnumadres->Location = System::Drawing::Point(231, 291);
			this->tbnumadres->Name = L"tbnumadres";
			this->tbnumadres->Size = System::Drawing::Size(100, 22);
			this->tbnumadres->TabIndex = 45;
			this->tbnumadres->Visible = false;
			// 
			// lrue
			// 
			this->lrue->AutoSize = true;
			this->lrue->Location = System::Drawing::Point(231, 316);
			this->lrue->Name = L"lrue";
			this->lrue->Size = System::Drawing::Size(32, 16);
			this->lrue->TabIndex = 46;
			this->lrue->Text = L"Rue";
			this->lrue->Visible = false;
			// 
			// tbrue
			// 
			this->tbrue->Location = System::Drawing::Point(231, 336);
			this->tbrue->Name = L"tbrue";
			this->tbrue->Size = System::Drawing::Size(100, 22);
			this->tbrue->TabIndex = 47;
			this->tbrue->Visible = false;
			// 
			// tbville
			// 
			this->tbville->Location = System::Drawing::Point(231, 380);
			this->tbville->Name = L"tbville";
			this->tbville->Size = System::Drawing::Size(100, 22);
			this->tbville->TabIndex = 48;
			this->tbville->Visible = false;
			// 
			// Ville
			// 
			this->Ville->AutoSize = true;
			this->Ville->Location = System::Drawing::Point(231, 361);
			this->Ville->Name = L"Ville";
			this->Ville->Size = System::Drawing::Size(33, 16);
			this->Ville->TabIndex = 49;
			this->Ville->Text = L"Ville";
			this->Ville->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(549, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 22);
			this->button2->TabIndex = 50;
			this->button2->Text = L"AJOUTER ADRESSE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &formclient::button2_Click);
			// 
			// cbadresse
			// 
			this->cbadresse->FormattingEnabled = true;
			this->cbadresse->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ADRESSE FACTURATION", L"ADRESSE LIVRAISON" });
			this->cbadresse->Location = System::Drawing::Point(231, 231);
			this->cbadresse->Name = L"cbadresse";
			this->cbadresse->Size = System::Drawing::Size(121, 24);
			this->cbadresse->TabIndex = 51;
			this->cbadresse->Visible = false;
			// 
			// confirmajoutadress
			// 
			this->confirmajoutadress->Location = System::Drawing::Point(489, 267);
			this->confirmajoutadress->Name = L"confirmajoutadress";
			this->confirmajoutadress->Size = System::Drawing::Size(75, 23);
			this->confirmajoutadress->TabIndex = 52;
			this->confirmajoutadress->Text = L"confirmer";
			this->confirmajoutadress->UseVisualStyleBackColor = true;
			this->confirmajoutadress->Visible = false;
			this->confirmajoutadress->Click += gcnew System::EventHandler(this, &formclient::confirmajoutadress_Click);
			// 
			// cbanciennesadresse
			// 
			this->cbanciennesadresse->FormattingEnabled = true;
			this->cbanciennesadresse->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ADRESSE FACTURATION", L"ADRESSE LIVRAISON" });
			this->cbanciennesadresse->Location = System::Drawing::Point(53, 162);
			this->cbanciennesadresse->Name = L"cbanciennesadresse";
			this->cbanciennesadresse->Size = System::Drawing::Size(121, 24);
			this->cbanciennesadresse->TabIndex = 54;
			this->cbanciennesadresse->Visible = false;
			// 
			// formclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(730, 429);
			this->Controls->Add(this->cbanciennesadresse);
			this->Controls->Add(this->confirmajoutadress);
			this->Controls->Add(this->cbadresse);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Ville);
			this->Controls->Add(this->tbville);
			this->Controls->Add(this->tbrue);
			this->Controls->Add(this->lrue);
			this->Controls->Add(this->tbnumadres);
			this->Controls->Add(this->lnumadress);
			this->Controls->Add(this->dtpNewDOB);
			this->Controls->Add(this->tbId);
			this->Controls->Add(this->lblNewDOB);
			this->Controls->Add(this->lblNewName);
			this->Controls->Add(this->tbNewName);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->fermer);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->confirmmodif);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lblNewFirstName);
			this->Controls->Add(this->tbNewFirstName);
			this->Controls->Add(this->modif);
			this->Controls->Add(this->suppr);
			this->Controls->Add(this->button1);
			this->IsMdiContainer = true;
			this->Name = L"formclient";
			this->Text = L"MODIF CLIENT";
			this->Load += gcnew System::EventHandler(this, &formclient::formclient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->confirmajout->Visible = true;
		this->lblNewFirstName->Visible = true;
		this->lblNewName->Visible = true;
		this->lblNewDOB->Visible = true;
		this->tbNewFirstName->Visible = true;
		this->tbNewName->Visible = true;
		this->dtpNewDOB->Visible = true;
		this->modif->Visible = false;
		this->suppr->Visible = false;
		this->button1->Visible = false;
		this->cancel->Visible = true;
		this->cbadresse->Visible = true;
		this->lnumadress->Visible = true;
		this->lrue->Visible = true;
		this->Ville->Visible = true;
		this->tbnumadres->Visible = true;
		this->tbrue->Visible = true;
		this->tbville->Visible = true;
	}
	private: System::Void formclient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void suppr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM CLIENT WHERE ID_CLIENT = @id_client";
		SqlCommand command(sqlquery, % sqlConn);
		int convertStringToInt = System::Convert::ToInt32(tbId->Text);
		command.Parameters->AddWithValue("@id_client", convertStringToInt);
		command.ExecuteNonQuery();
		MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
		this->Close();
	}
	public: activeClient^ aClient = nullptr;
	private: System::Void modif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->confirmmodif->Visible = true;
		this->suppr->Visible = false;
		this->button1->Visible = false;
		//this->cancel->Visible = true;
		this->dtpNewDOB->Visible = true;
		this->lblNewDOB->Visible = true;
		this->lblNewFirstName->Visible = true;
		this->lblNewName->Visible = true;
		this->modif->Visible = true;
		this->tbNewFirstName->Visible = true;
		this->tbNewName->Visible = true;
		//this->cbanciennesadresse->Visible = true;
		String^ connString = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM CLIENT WHERE ID_CLIENT = @id_client;";
		SqlCommand command1(sqlQuery, % sqlConn);
		int convertStringToInt = System::Convert::ToInt32(tbId->Text);
		command1.Parameters->AddWithValue("@id_client", convertStringToInt);
		SqlCommand command(sqlQuery, % sqlConn);
		//activeClient^ activeClient = formclient.activeClient;
		SqlDataReader^ reader = command1.ExecuteReader();

		aClient = gcnew activeClient;
		reader->Read();
		aClient->PRENOM = reader->GetString(1);
		aClient->NOM = reader->GetString(2);
		aClient->DATE_NAISSANCE = reader->GetDateTime(3);

		this->tbNewFirstName->Text = reader->GetString(1);
		this->tbNewName->Text = reader->GetString(2);
		this->dtpNewDOB->Value = reader->GetDateTime(3);
		reader->Close();


	}
	private: System::Void confirm_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "UPDATE[desktop-o5e812k].[master].[dbo].[CLIENT] SET PRENOM = @prenom, NOM = @nom, DATE_NAISSANCE = @dob WHERE ID_CLIENT = @id_client";
		SqlCommand command(sqlquery, % sqlConn);
		//command.Parameters->AddWithValue("@Id", this->tbId->Text);
		command.Parameters->AddWithValue("@prenom", this->tbNewFirstName->Text);
		command.Parameters->AddWithValue("@nom", this->tbNewName->Text);
		command.Parameters->AddWithValue("@dob", this->dtpNewDOB->Value);
		int convertStringToInt = System::Convert::ToInt32(tbId->Text);
		command.Parameters->AddWithValue("@id_client", convertStringToInt);
		command.ExecuteNonQuery();
		MessageBox::Show("Modification(s) réussit(s)", "Succes", MessageBoxButtons::OK);
		this->Close();
	}
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		/*this->lblNewFirstName->Visible = false;
		this->tbNewFirstName->Visible = false;
		this->confirmmodif->Visible = false;
		this->suppr->Visible = true;
		this->button1->Visible = true;
		this->cancel->Visible = false;
		this->confirmajout->Visible = false;
		this->modif->Visible = true;
		this->lblNewName->Visible = false;
		this->lblNewDOB->Visible = false;
		this->tbNewName->Visible = false;
		this->dtpNewDOB->Visible = false;*/
	}
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Annulation", "Operation annulé", MessageBoxButtons::OK);
		this->Close();
	}
	private: System::Void confirmajout_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "INSERT INTO [desktop-o5e812k].[master].[dbo].[CLIENT] (PRENOM, NOM, DATE_NAISSANCE) VALUES(@prenom, @nom, @date_naissance)";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@prenom", this->tbNewFirstName->Text);
		command.Parameters->AddWithValue("@nom", this->tbNewName->Text);
		command.Parameters->AddWithValue("@date_naissance", this->dtpNewDOB->Value);
		command.ExecuteNonQuery();
		String^ sqlquery2 = "SELECT ID_ADRESSE from ADRESSE where NUM_RUE=@numrue AND RUE=@rue AND ID_VILLE=@ville";
		SqlCommand command2(sqlquery2, % sqlConn);
		command2.Parameters->AddWithValue("@numrue", Convert::ToInt32(this->tbnumadres->Text));
		command2.Parameters->AddWithValue("@rue", this->tbrue->Text);
		command2.Parameters->AddWithValue("@ville", Convert::ToInt32(this->tbville->Text));
		SqlDataReader^ reader = command2.ExecuteReader();
		int a;
		if (reader->HasRows) {
			while (reader->Read())
			{
				a = reader->GetInt32(0);

			}
			reader->Close();
		}
		else {
			reader->Close();
			String^ sqlquery3 = "INSERT INTO ADRESSE(NUM_RUE,RUE,ID_VILLE) values(@numrue,@rue,@ville)";
			SqlCommand command3(sqlquery3, % sqlConn);
			command3.Parameters->AddWithValue("@numrue", Convert::ToInt32(this->tbnumadres->Text));
			command3.Parameters->AddWithValue("@rue", this->tbrue->Text);
			command3.Parameters->AddWithValue("@ville", Convert::ToInt32(this->tbville->Text));
			command3.ExecuteNonQuery();
			String^ sqlquery4 = "SELECT TOP 1 ID_ADRESSE from ADRESSE order by ID_ADRESSE desc";
			SqlCommand command4(sqlquery4, % sqlConn);
			SqlDataReader^ reader2 = command4.ExecuteReader();
			while (reader2->Read())
			{
				a = reader2->GetInt32(0);
			}
			reader2->Close();
		}
		String^ sqlquery5 = "SELECT TOP 1 ID_CLIENT from CLIENT order by ID_CLIENT desc";
		SqlCommand command5(sqlquery5, % sqlConn);
		SqlDataReader^ reader3 = command5.ExecuteReader();
		int b;
		while (reader3->Read())
		{
			b = reader3->GetInt32(0);
		}
		reader3->Close();
		String^ sqlquery6 = "insert into HABITER(ID_CLIENT,ID_ADRESSE,TYPE_ADRESSE) values(@id_client,@id_adresse,@type_adresse)";
		SqlCommand command6(sqlquery6, % sqlConn);
		command6.Parameters->AddWithValue("@id_client", b);
		command6.Parameters->AddWithValue("@id_adresse", a);
		command6.Parameters->AddWithValue("@type_adresse", this->cbadresse->Text);
		/*if (this->cbadresse->Text == "ADRESSE FACTURATION") {
			command6.Parameters->AddWithValue("@adrbas", "ADRESSE LIVRAISON");
		}
		else if (this->cbadresse->Text == "ADRESSE LIVRAISON") {
			command6.Parameters->AddWithValue("@adrbas", "ADRESSE FACTURATION");
		}*/
		command6.ExecuteNonQuery();
		MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
		this->Close();
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->cbadresse->Visible = true;
		this->lnumadress->Visible = true;
		this->lrue->Visible = true;
		this->Ville->Visible = true;
		this->tbnumadres->Visible = true;
		this->cbadresse->Visible = true;
		this->tbrue->Visible = true;
		this->tbville->Visible = true;
		this->suppr->Visible = false;
		this->modif->Visible = false;
		this->button1->Visible = false;
	}
	private: System::Void confirmajoutadress_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery2 = "SELECT ID_ADRESSE from ADRESSE where NUM_RUE=@numrue AND RUE=@rue AND ID_VILLE=@ville";
		SqlCommand command2(sqlquery2, % sqlConn);
		SqlDataReader^ reader = command2.ExecuteReader();
		int a;
		if (reader->HasRows) {
			while (reader->Read())
			{
				a = reader->GetInt32(0);

			}
			reader->Close();
		}
		else {
			reader->Close();
			String^ sqlquery3 = "INSERT INTO ADRESSE(numrue,rue,ville) values(@numrue,@rue,@ville)";
			SqlCommand command3(sqlquery3, % sqlConn);
			command3.Parameters->AddWithValue("@numrue", Convert::ToInt32(this->tbnumadres->Text));
			command3.Parameters->AddWithValue("@rue", this->tbrue->Text);
			command3.Parameters->AddWithValue("@numrue", this->Ville->Text);
			command3.ExecuteNonQuery();
			String^ sqlquery4 = "SELECT TOP 1 id from adresse order by id desc";
			SqlCommand command4(sqlquery4, % sqlConn);
			SqlDataReader^ reader2 = command4.ExecuteReader();
			while (reader2->Read())
			{
				a = reader2->GetInt32(0);
			}
			reader2->Close();
		}
		String^ sqlquery4 = "INSERT INTO HABITER (ID_CLIENT,ID_ADRESSE,TYPE_ADRESSE)VALUES(@ID_CLIENT,@ID_ADRESSE,@TYPE_ADRESSE)";
		SqlCommand command4(sqlquery4, % sqlConn);
		command4.Parameters->AddWithValue("@ID_CLIENT", Convert::ToInt32(this->tbId->Text));
		command4.Parameters->AddWithValue("@ID_ADRESSE", a);
		command4.Parameters->AddWithValue("@TYPE_ADRESSE", this->cbadresse->Text);
		*/

	}
	private: System::Void tbNewFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblNewFirstName_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblNewName_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbNewName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblNewDOB_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dtpNewDOB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
