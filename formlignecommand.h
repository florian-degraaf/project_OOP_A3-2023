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
	/// Description résumée de formlignecommand
	/// </summary>
	public ref class formlignecommand : public System::Windows::Forms::Form
	{
	public:
		formlignecommand(void)
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
		~formlignecommand()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lId_ligne;
	protected:
	private: System::Windows::Forms::Label^ lquantite;
	private: System::Windows::Forms::Label^ lidart;
	private: System::Windows::Forms::TextBox^ tbidligne;
	private: System::Windows::Forms::TextBox^ tbquantite;
	private: System::Windows::Forms::TextBox^ tbart;
	private: System::Windows::Forms::Label^ lId_comm;
	private: System::Windows::Forms::TextBox^ tbidcomm;
	private: System::Windows::Forms::Button^ buttonajout;
	private: System::Windows::Forms::Button^ buttonsuppr;
	private: System::Windows::Forms::Button^ buttonmodif;
	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Button^ confirmsuppr;
	private: System::Windows::Forms::Button^ confirmmodif;

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
			this->lId_ligne = (gcnew System::Windows::Forms::Label());
			this->lquantite = (gcnew System::Windows::Forms::Label());
			this->lidart = (gcnew System::Windows::Forms::Label());
			this->tbidligne = (gcnew System::Windows::Forms::TextBox());
			this->tbquantite = (gcnew System::Windows::Forms::TextBox());
			this->tbart = (gcnew System::Windows::Forms::TextBox());
			this->lId_comm = (gcnew System::Windows::Forms::Label());
			this->tbidcomm = (gcnew System::Windows::Forms::TextBox());
			this->buttonajout = (gcnew System::Windows::Forms::Button());
			this->buttonsuppr = (gcnew System::Windows::Forms::Button());
			this->buttonmodif = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->confirmsuppr = (gcnew System::Windows::Forms::Button());
			this->confirmmodif = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lId_ligne
			// 
			this->lId_ligne->AutoSize = true;
			this->lId_ligne->Location = System::Drawing::Point(13, 13);
			this->lId_ligne->Name = L"lId_ligne";
			this->lId_ligne->Size = System::Drawing::Size(54, 16);
			this->lId_ligne->TabIndex = 0;
			this->lId_ligne->Text = L"Id_ligne";
			// 
			// lquantite
			// 
			this->lquantite->AutoSize = true;
			this->lquantite->Location = System::Drawing::Point(13, 146);
			this->lquantite->Name = L"lquantite";
			this->lquantite->Size = System::Drawing::Size(54, 16);
			this->lquantite->TabIndex = 1;
			this->lquantite->Text = L"quantite";
			this->lquantite->Visible = false;
			// 
			// lidart
			// 
			this->lidart->AutoSize = true;
			this->lidart->Location = System::Drawing::Point(13, 58);
			this->lidart->Name = L"lidart";
			this->lidart->Size = System::Drawing::Size(89, 16);
			this->lidart->TabIndex = 2;
			this->lidart->Text = L"Id_info_article";
			this->lidart->Visible = false;
			// 
			// tbidligne
			// 
			this->tbidligne->Location = System::Drawing::Point(16, 33);
			this->tbidligne->Name = L"tbidligne";
			this->tbidligne->Size = System::Drawing::Size(100, 22);
			this->tbidligne->TabIndex = 3;
			// 
			// tbquantite
			// 
			this->tbquantite->Location = System::Drawing::Point(16, 165);
			this->tbquantite->Name = L"tbquantite";
			this->tbquantite->Size = System::Drawing::Size(100, 22);
			this->tbquantite->TabIndex = 4;
			this->tbquantite->Visible = false;
			// 
			// tbart
			// 
			this->tbart->Location = System::Drawing::Point(16, 77);
			this->tbart->Name = L"tbart";
			this->tbart->Size = System::Drawing::Size(100, 22);
			this->tbart->TabIndex = 5;
			this->tbart->Visible = false;
			// 
			// lId_comm
			// 
			this->lId_comm->AutoSize = true;
			this->lId_comm->Location = System::Drawing::Point(13, 102);
			this->lId_comm->Name = L"lId_comm";
			this->lId_comm->Size = System::Drawing::Size(93, 16);
			this->lId_comm->TabIndex = 6;
			this->lId_comm->Text = L"Id_commande";
			this->lId_comm->Visible = false;
			// 
			// tbidcomm
			// 
			this->tbidcomm->Location = System::Drawing::Point(16, 121);
			this->tbidcomm->Name = L"tbidcomm";
			this->tbidcomm->Size = System::Drawing::Size(100, 22);
			this->tbidcomm->TabIndex = 7;
			this->tbidcomm->Visible = false;
			// 
			// buttonajout
			// 
			this->buttonajout->Location = System::Drawing::Point(363, 337);
			this->buttonajout->Name = L"buttonajout";
			this->buttonajout->Size = System::Drawing::Size(75, 23);
			this->buttonajout->TabIndex = 8;
			this->buttonajout->Text = L"ajout";
			this->buttonajout->UseVisualStyleBackColor = true;
			this->buttonajout->Click += gcnew System::EventHandler(this, &formlignecommand::buttonajout_Click);
			// 
			// buttonsuppr
			// 
			this->buttonsuppr->Location = System::Drawing::Point(282, 337);
			this->buttonsuppr->Name = L"buttonsuppr";
			this->buttonsuppr->Size = System::Drawing::Size(75, 23);
			this->buttonsuppr->TabIndex = 9;
			this->buttonsuppr->Text = L"suppr";
			this->buttonsuppr->UseVisualStyleBackColor = true;
			this->buttonsuppr->Click += gcnew System::EventHandler(this, &formlignecommand::buttonsuppr_Click);
			// 
			// buttonmodif
			// 
			this->buttonmodif->Location = System::Drawing::Point(363, 308);
			this->buttonmodif->Name = L"buttonmodif";
			this->buttonmodif->Size = System::Drawing::Size(75, 23);
			this->buttonmodif->TabIndex = 10;
			this->buttonmodif->Text = L"modif";
			this->buttonmodif->UseVisualStyleBackColor = true;
			this->buttonmodif->Click += gcnew System::EventHandler(this, &formlignecommand::buttonmodif_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(363, 337);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(75, 23);
			this->confirmajout->TabIndex = 11;
			this->confirmajout->Text = L"confirmer";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &formlignecommand::confirmajout_Click);
			// 
			// confirmsuppr
			// 
			this->confirmsuppr->Location = System::Drawing::Point(282, 207);
			this->confirmsuppr->Name = L"confirmsuppr";
			this->confirmsuppr->Size = System::Drawing::Size(75, 23);
			this->confirmsuppr->TabIndex = 12;
			this->confirmsuppr->Text = L"confirmer";
			this->confirmsuppr->UseVisualStyleBackColor = true;
			this->confirmsuppr->Visible = false;
			this->confirmsuppr->Click += gcnew System::EventHandler(this, &formlignecommand::confirmsuppr_Click);
			// 
			// confirmmodif
			// 
			this->confirmmodif->Location = System::Drawing::Point(363, 308);
			this->confirmmodif->Name = L"confirmmodif";
			this->confirmmodif->Size = System::Drawing::Size(75, 23);
			this->confirmmodif->TabIndex = 13;
			this->confirmmodif->Text = L"confirmer";
			this->confirmmodif->UseVisualStyleBackColor = true;
			this->confirmmodif->Visible = false;
			this->confirmmodif->Click += gcnew System::EventHandler(this, &formlignecommand::confirmmodif_Click);
			// 
			// formlignecommand
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 372);
			this->Controls->Add(this->confirmmodif);
			this->Controls->Add(this->confirmsuppr);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->buttonmodif);
			this->Controls->Add(this->buttonsuppr);
			this->Controls->Add(this->buttonajout);
			this->Controls->Add(this->tbidcomm);
			this->Controls->Add(this->lId_comm);
			this->Controls->Add(this->tbart);
			this->Controls->Add(this->tbquantite);
			this->Controls->Add(this->tbidligne);
			this->Controls->Add(this->lidart);
			this->Controls->Add(this->lquantite);
			this->Controls->Add(this->lId_ligne);
			this->Name = L"formlignecommand";
			this->Text = L"formlignecommande";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->confirmsuppr->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonsuppr->Visible = false;
		this->buttonmodif->Visible = false;
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM LIGNE_DE_COMMANDE WHERE ID_LC = @id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbidligne->Text));
		command.ExecuteNonQuery();
		this->Close();
	}
	private: System::Void confirmsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM LIGNE_DE_COMMANDE WHERE ID_LC = @id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbidligne->Text));
		command.ExecuteNonQuery();*/
	}
	private: System::Void buttonmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lidart->Visible = true;
		this->lId_comm->Visible = true;
		this->lquantite->Visible = true;
		this->tbart->Visible = true;
		this->tbidcomm->Visible = true;
		this->tbquantite->Visible = true;
		this->confirmmodif->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonsuppr->Visible = false;
		this->buttonmodif->Visible = false;
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "SELECT ID_INFO,ID_COMMANDE,QUANTITE from LIGNE_DE_COMMANDE where ID_LC = @id";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbidligne->Text));
		SqlDataReader^ reader = command.ExecuteReader();
		while (reader->Read()) {
			this->tbart->Text = Convert::ToString(reader->GetInt32(0));
			this->tbidcomm->Text = Convert::ToString(reader->GetInt32(1));
			this->tbquantite->Text = Convert::ToString(reader->GetInt32(2));

		}

	}
	private: System::Void confirmmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "UPDATE LIGNE_DE_COMMANDE SET ID_INFO=@idart,ID_COMMANDE=@id_comm,QUANTITE=@quantite";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@idart", Convert::ToInt32(this->tbart->Text));
		command.Parameters->AddWithValue("@id_comm", Convert::ToInt32(this->tbidcomm->Text));
		command.Parameters->AddWithValue("@quantite", Convert::ToInt32(this->tbquantite->Text));
		command.ExecuteNonQuery();


	}
	private: System::Void buttonajout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lidart->Visible = true;
		this->lId_comm->Visible = true;
		this->lquantite->Visible = true;
		this->tbart->Visible = true;
		this->tbidcomm->Visible = true;
		this->tbquantite->Visible = true;
		this->confirmajout->Visible = true;
		this->lId_ligne->Visible = false;
		this->tbidligne->Visible = false;
		this->buttonajout->Visible = false;
		this->buttonsuppr->Visible = false;
		this->buttonmodif->Visible = false;
	}
	private: System::Void confirmajout_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "INSERT INTO LIGNE_DE_COMMANDE (ID_INFO,ID_COMMANDE,QUANTITE) VALUES(@idart,@id_comm,@quantite)";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@idart", Convert::ToInt32(this->tbart->Text));
		command.Parameters->AddWithValue("@id_comm", Convert::ToInt32(this->tbidcomm->Text));
		command.Parameters->AddWithValue("@quantite", Convert::ToInt32(this->tbquantite->Text));
		command.ExecuteNonQuery();
	}
	};
}
