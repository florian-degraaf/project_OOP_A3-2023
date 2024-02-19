#pragma once

namespace bdd_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de formcommande
	/// </summary>
	public ref class formcommande : public System::Windows::Forms::Form
	{
	public:
		formcommande(void)
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
		~formcommande()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::Button^ buttonajout;
	private: System::Windows::Forms::Button^ confirmmodif;
	private: System::Windows::Forms::Button^ confirmsuppr;
	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Button^ buttonmodif;
	private: System::Windows::Forms::Button^ buttonSuppr;
	private: System::Windows::Forms::Label^ lcomm;
	private: System::Windows::Forms::TextBox^ tBiD;
	private: System::Windows::Forms::Label^ ldatemission;
	private: System::Windows::Forms::Label^ llivraison;
	private: System::Windows::Forms::Label^ lfact;
	private: System::Windows::Forms::Label^ lreglement;
	private: System::Windows::Forms::Label^ lclient;
	private: System::Windows::Forms::Label^ lsoc;
	private: System::Windows::Forms::DateTimePicker^ dpemm;
	private: System::Windows::Forms::DateTimePicker^ Dplivr;
	private: System::Windows::Forms::DateTimePicker^ dPfact;
	private: System::Windows::Forms::DateTimePicker^ dpregl;
	private: System::Windows::Forms::TextBox^ tbclient;
	private: System::Windows::Forms::TextBox^ tbsociete;









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
			this->buttonajout = (gcnew System::Windows::Forms::Button());
			this->confirmmodif = (gcnew System::Windows::Forms::Button());
			this->confirmsuppr = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->buttonmodif = (gcnew System::Windows::Forms::Button());
			this->buttonSuppr = (gcnew System::Windows::Forms::Button());
			this->lcomm = (gcnew System::Windows::Forms::Label());
			this->tBiD = (gcnew System::Windows::Forms::TextBox());
			this->ldatemission = (gcnew System::Windows::Forms::Label());
			this->llivraison = (gcnew System::Windows::Forms::Label());
			this->lfact = (gcnew System::Windows::Forms::Label());
			this->lreglement = (gcnew System::Windows::Forms::Label());
			this->lclient = (gcnew System::Windows::Forms::Label());
			this->lsoc = (gcnew System::Windows::Forms::Label());
			this->dpemm = (gcnew System::Windows::Forms::DateTimePicker());
			this->Dplivr = (gcnew System::Windows::Forms::DateTimePicker());
			this->dPfact = (gcnew System::Windows::Forms::DateTimePicker());
			this->dpregl = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbclient = (gcnew System::Windows::Forms::TextBox());
			this->tbsociete = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonajout
			// 
			this->buttonajout->Location = System::Drawing::Point(612, 444);
			this->buttonajout->Name = L"buttonajout";
			this->buttonajout->Size = System::Drawing::Size(75, 23);
			this->buttonajout->TabIndex = 12;
			this->buttonajout->Text = L"Ajout";
			this->buttonajout->UseVisualStyleBackColor = true;
			this->buttonajout->Click += gcnew System::EventHandler(this, &formcommande::buttonajout_Click);
			// 
			// confirmmodif
			// 
			this->confirmmodif->Location = System::Drawing::Point(612, 415);
			this->confirmmodif->Name = L"confirmmodif";
			this->confirmmodif->Size = System::Drawing::Size(75, 23);
			this->confirmmodif->TabIndex = 13;
			this->confirmmodif->Text = L"Confirm";
			this->confirmmodif->UseVisualStyleBackColor = true;
			this->confirmmodif->Visible = false;
			this->confirmmodif->Click += gcnew System::EventHandler(this, &formcommande::confirmmodif_Click);
			// 
			// confirmsuppr
			// 
			this->confirmsuppr->Location = System::Drawing::Point(531, 444);
			this->confirmsuppr->Name = L"confirmsuppr";
			this->confirmsuppr->Size = System::Drawing::Size(75, 23);
			this->confirmsuppr->TabIndex = 14;
			this->confirmsuppr->Text = L"Confirm";
			this->confirmsuppr->UseVisualStyleBackColor = true;
			this->confirmsuppr->Visible = false;
			this->confirmsuppr->Click += gcnew System::EventHandler(this, &formcommande::confirmsuppr_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(612, 444);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(75, 23);
			this->confirmajout->TabIndex = 15;
			this->confirmajout->Text = L"Confirm";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &formcommande::confirmajout_Click);
			// 
			// buttonmodif
			// 
			this->buttonmodif->Location = System::Drawing::Point(612, 415);
			this->buttonmodif->Name = L"buttonmodif";
			this->buttonmodif->Size = System::Drawing::Size(75, 23);
			this->buttonmodif->TabIndex = 16;
			this->buttonmodif->Text = L"Modif";
			this->buttonmodif->UseVisualStyleBackColor = true;
			this->buttonmodif->Click += gcnew System::EventHandler(this, &formcommande::buttonmodif_Click);
			// 
			// buttonSuppr
			// 
			this->buttonSuppr->Location = System::Drawing::Point(531, 444);
			this->buttonSuppr->Name = L"buttonSuppr";
			this->buttonSuppr->Size = System::Drawing::Size(75, 23);
			this->buttonSuppr->TabIndex = 17;
			this->buttonSuppr->Text = L"Suppr";
			this->buttonSuppr->UseVisualStyleBackColor = true;
			this->buttonSuppr->Click += gcnew System::EventHandler(this, &formcommande::buttonsuppr_Click);
			// 
			// lcomm
			// 
			this->lcomm->AutoSize = true;
			this->lcomm->Location = System::Drawing::Point(13, 13);
			this->lcomm->Name = L"lcomm";
			this->lcomm->Size = System::Drawing::Size(95, 16);
			this->lcomm->TabIndex = 18;
			this->lcomm->Text = L"Id_Commande";
			// 
			// tBiD
			// 
			this->tBiD->Location = System::Drawing::Point(16, 33);
			this->tBiD->Name = L"tBiD";
			this->tBiD->Size = System::Drawing::Size(100, 22);
			this->tBiD->TabIndex = 19;
			// 
			// ldatemission
			// 
			this->ldatemission->AutoSize = true;
			this->ldatemission->Location = System::Drawing::Point(16, 74);
			this->ldatemission->Name = L"ldatemission";
			this->ldatemission->Size = System::Drawing::Size(97, 16);
			this->ldatemission->TabIndex = 20;
			this->ldatemission->Text = L"Date_emission";
			this->ldatemission->Visible = false;
			// 
			// llivraison
			// 
			this->llivraison->AutoSize = true;
			this->llivraison->Location = System::Drawing::Point(16, 122);
			this->llivraison->Name = L"llivraison";
			this->llivraison->Size = System::Drawing::Size(97, 16);
			this->llivraison->TabIndex = 21;
			this->llivraison->Text = L"Date_Livraison";
			this->llivraison->Visible = false;
			// 
			// lfact
			// 
			this->lfact->AutoSize = true;
			this->lfact->Location = System::Drawing::Point(19, 172);
			this->lfact->Name = L"lfact";
			this->lfact->Size = System::Drawing::Size(109, 16);
			this->lfact->TabIndex = 22;
			this->lfact->Text = L"Date_Facturation";
			this->lfact->Visible = false;
			// 
			// lreglement
			// 
			this->lreglement->AutoSize = true;
			this->lreglement->Location = System::Drawing::Point(19, 234);
			this->lreglement->Name = L"lreglement";
			this->lreglement->Size = System::Drawing::Size(109, 16);
			this->lreglement->TabIndex = 23;
			this->lreglement->Text = L"Date_Reglement";
			this->lreglement->Visible = false;
			// 
			// lclient
			// 
			this->lclient->AutoSize = true;
			this->lclient->Location = System::Drawing::Point(22, 292);
			this->lclient->Name = L"lclient";
			this->lclient->Size = System::Drawing::Size(56, 16);
			this->lclient->TabIndex = 24;
			this->lclient->Text = L"Id_client";
			this->lclient->Visible = false;
			// 
			// lsoc
			// 
			this->lsoc->AutoSize = true;
			this->lsoc->Location = System::Drawing::Point(25, 354);
			this->lsoc->Name = L"lsoc";
			this->lsoc->Size = System::Drawing::Size(71, 16);
			this->lsoc->TabIndex = 25;
			this->lsoc->Text = L"ID_societe";
			this->lsoc->Visible = false;
			// 
			// dpemm
			// 
			this->dpemm->Location = System::Drawing::Point(19, 94);
			this->dpemm->Name = L"dpemm";
			this->dpemm->Size = System::Drawing::Size(200, 22);
			this->dpemm->TabIndex = 26;
			this->dpemm->Visible = false;
			// 
			// Dplivr
			// 
			this->Dplivr->Location = System::Drawing::Point(19, 142);
			this->Dplivr->Name = L"Dplivr";
			this->Dplivr->Size = System::Drawing::Size(200, 22);
			this->Dplivr->TabIndex = 27;
			this->Dplivr->Visible = false;
			// 
			// dPfact
			// 
			this->dPfact->Location = System::Drawing::Point(19, 192);
			this->dPfact->Name = L"dPfact";
			this->dPfact->Size = System::Drawing::Size(200, 22);
			this->dPfact->TabIndex = 28;
			this->dPfact->Visible = false;
			// 
			// dpregl
			// 
			this->dpregl->Location = System::Drawing::Point(19, 254);
			this->dpregl->Name = L"dpregl";
			this->dpregl->Size = System::Drawing::Size(200, 22);
			this->dpregl->TabIndex = 29;
			this->dpregl->Visible = false;
			// 
			// tbclient
			// 
			this->tbclient->Location = System::Drawing::Point(25, 312);
			this->tbclient->Name = L"tbclient";
			this->tbclient->Size = System::Drawing::Size(100, 22);
			this->tbclient->TabIndex = 30;
			this->tbclient->Visible = false;
			// 
			// tbsociete
			// 
			this->tbsociete->Location = System::Drawing::Point(25, 374);
			this->tbsociete->Name = L"tbsociete";
			this->tbsociete->Size = System::Drawing::Size(100, 22);
			this->tbsociete->TabIndex = 31;
			this->tbsociete->Visible = false;
			// 
			// formcommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 479);
			this->Controls->Add(this->tbsociete);
			this->Controls->Add(this->tbclient);
			this->Controls->Add(this->dpregl);
			this->Controls->Add(this->dPfact);
			this->Controls->Add(this->Dplivr);
			this->Controls->Add(this->dpemm);
			this->Controls->Add(this->lsoc);
			this->Controls->Add(this->lclient);
			this->Controls->Add(this->lreglement);
			this->Controls->Add(this->lfact);
			this->Controls->Add(this->llivraison);
			this->Controls->Add(this->ldatemission);
			this->Controls->Add(this->tBiD);
			this->Controls->Add(this->lcomm);
			this->Controls->Add(this->buttonSuppr);
			this->Controls->Add(this->buttonmodif);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->confirmsuppr);
			this->Controls->Add(this->confirmmodif);
			this->Controls->Add(this->buttonajout);
			this->Name = L"formcommande";
			this->Text = L"Formcommande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lcomm->Visible = true;
		this->tBiD->Visible = true;
		this->confirmsuppr->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonSuppr->Visible = false;
		this->buttonmodif->Visible = false;
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM COMMANDE WHERE ID_COMMANDE=@id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tBiD->Text));
		command.ExecuteNonQuery();
		this->Close();
	}
	private: System::Void confirmsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM COMMANDE WHERE ID_COMMANDE=@id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tBiD->Text));
		command.ExecuteNonQuery();*/

	}
	private: System::Void buttonajout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dpemm->Visible = true;
		this->dPfact->Visible = true;
		this->Dplivr->Visible = true;
		this->dpregl->Visible = true;
		this->tbclient->Visible = true;
		this->tbsociete->Visible = true;
		this->confirmajout->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonSuppr->Visible = false;
		this->buttonmodif->Visible = false;
		this->lclient->Visible = true;
		this->lsoc->Visible = true;

	}
	private: System::Void confirmajout_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "INSERT INTO COMMANDE (DATE_EMISSION,DATE_FACTURATION,DATE_LIVRAISON,DATE_REGLEMENT,ID_CLIENT,ID_SOCIETE) VALUES(@date_emission,@date_fact,@date_livr,@date_reglement,@id_client,@id_societe)";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@date_emission", this->dpemm->Value);
		command.Parameters->AddWithValue("@date_fact", this->dPfact->Value);
		command.Parameters->AddWithValue("@date_livr", this->Dplivr->Value);
		command.Parameters->AddWithValue("@date_reglement", this->dpregl->Value);
		command.Parameters->AddWithValue("@id_client", Convert::ToInt32(this->tbclient->Text));
		command.Parameters->AddWithValue("@id_societe", Convert::ToInt32(this->tbsociete->Text));
		command.ExecuteNonQuery();

	}
	private: System::Void buttonmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dpemm->Visible = true;
		this->dPfact->Visible = true;
		this->Dplivr->Visible = true;
		this->dpregl->Visible = true;
		this->tbclient->Visible = true;
		this->tbsociete->Visible = true;
		this->lcomm->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonSuppr->Visible = false;
		this->buttonmodif->Visible = false;
		this->confirmmodif->Visible = true;
		this->ldatemission->Visible = true;
		this->lreglement->Visible = true;
		this->lfact->Visible = true;
		this->llivraison->Visible = true;
		this->lclient->Visible = true;
		this->lsoc->Visible = true;
		/*String^ connString = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM COMMANDE WHERE ID_COMMANDE = @id;";
		SqlCommand command1(sqlQuery, % sqlConn);
		int convertStringToInt = System::Convert::ToInt32(tbId->Text);
		command1.Parameters->AddWithValue("@id_client", convertStringToInt);
		SqlCommand command(sqlQuery, % sqlConn);
		//activeClient^ activeClient = formclient.activeClient;
		SqlDataReader^ reader = command1.ExecuteReader();

		employee = gcnew personnel;
		reader->Read();
		aClient->PRENOM = reader->GetString(1);
		aClient->NOM = reader->GetString(2);
		aClient->DATE_NAISSANCE = reader->GetDateTime(3);

		this->tbNewFirstName->Text = reader->GetString(1);
		this->tbNewName->Text = reader->GetString(2);
		this->dtpNewDOB->Value = reader->GetDateTime(3);
		reader->Close();*/

	}
	private: System::Void confirmmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "UPDATE [desktop-o5e812k].[master].[dbo].[COMMANDE] SET DATE_EMISSION = @date_emission,DATE_FACTURATION=@date_fact,DATE_LIVRAISON=@date_livr,DATE_REGLEMENT=@date_reglement,ID_CLIENT=@id_client,ID_SOCIETE=@id_societe WHERE ID_COMMANDE=@id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tBiD->Text));
		command.Parameters->AddWithValue("@date_emission", this->dpemm->Value);
		command.Parameters->AddWithValue("@date_fact", this->dPfact->Value);
		command.Parameters->AddWithValue("@date_livr", this->Dplivr->Value);
		command.Parameters->AddWithValue("@date_reglement", this->dpregl->Value);
		command.Parameters->AddWithValue("@id_client", Convert::ToInt32(this->tbclient->Text));
		command.Parameters->AddWithValue("@id_societe", Convert::ToInt32(this->tbsociete->Text));
		command.ExecuteNonQuery();

	}
	};
}
