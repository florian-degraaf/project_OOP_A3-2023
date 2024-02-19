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
	/// Description résumée de forminfoarticle
	/// </summary>
	public ref class forminfoarticle : public System::Windows::Forms::Form
	{
	public:
		forminfoarticle(void)
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
		~forminfoarticle()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ lpara;
	private: System::Windows::Forms::TextBox^ tbparametres;
	private: System::Windows::Forms::Label^ lprix;
	private: System::Windows::Forms::TextBox^ tbprix;
	private: System::Windows::Forms::Label^ lquantite;
	private: System::Windows::Forms::TextBox^ tbquantite;
	private: System::Windows::Forms::Label^ ltva;
	private: System::Windows::Forms::TextBox^ tbtva;
	private: System::Windows::Forms::Button^ buttonajout;
	private: System::Windows::Forms::Button^ buttonsuppr;
	private: System::Windows::Forms::Button^ buttonmodif;
	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Button^ confirmsuppr;
	private: System::Windows::Forms::Button^ confirmmodif;










	private: System::Windows::Forms::Label^ linfo;
	private: System::Windows::Forms::TextBox^ tbID_info;


	private: System::Windows::Forms::Label^ larticle;
	private: System::Windows::Forms::TextBox^ tbID_article;

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
			this->lpara = (gcnew System::Windows::Forms::Label());
			this->tbparametres = (gcnew System::Windows::Forms::TextBox());
			this->lprix = (gcnew System::Windows::Forms::Label());
			this->tbprix = (gcnew System::Windows::Forms::TextBox());
			this->lquantite = (gcnew System::Windows::Forms::Label());
			this->tbquantite = (gcnew System::Windows::Forms::TextBox());
			this->ltva = (gcnew System::Windows::Forms::Label());
			this->tbtva = (gcnew System::Windows::Forms::TextBox());
			this->buttonajout = (gcnew System::Windows::Forms::Button());
			this->buttonsuppr = (gcnew System::Windows::Forms::Button());
			this->buttonmodif = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->confirmsuppr = (gcnew System::Windows::Forms::Button());
			this->confirmmodif = (gcnew System::Windows::Forms::Button());
			this->linfo = (gcnew System::Windows::Forms::Label());
			this->tbID_info = (gcnew System::Windows::Forms::TextBox());
			this->larticle = (gcnew System::Windows::Forms::Label());
			this->tbID_article = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lpara
			// 
			this->lpara->AutoSize = true;
			this->lpara->Location = System::Drawing::Point(15, 184);
			this->lpara->Name = L"lpara";
			this->lpara->Size = System::Drawing::Size(77, 16);
			this->lpara->TabIndex = 3;
			this->lpara->Text = L"Parametres";
			this->lpara->Visible = false;
			// 
			// tbparametres
			// 
			this->tbparametres->Location = System::Drawing::Point(12, 203);
			this->tbparametres->Name = L"tbparametres";
			this->tbparametres->Size = System::Drawing::Size(100, 22);
			this->tbparametres->TabIndex = 2;
			this->tbparametres->Visible = false;
			// 
			// lprix
			// 
			this->lprix->AutoSize = true;
			this->lprix->Location = System::Drawing::Point(12, 137);
			this->lprix->Name = L"lprix";
			this->lprix->Size = System::Drawing::Size(28, 16);
			this->lprix->TabIndex = 5;
			this->lprix->Text = L"prix";
			this->lprix->Visible = false;
			// 
			// tbprix
			// 
			this->tbprix->Location = System::Drawing::Point(12, 159);
			this->tbprix->Name = L"tbprix";
			this->tbprix->Size = System::Drawing::Size(100, 22);
			this->tbprix->TabIndex = 4;
			this->tbprix->Visible = false;
			// 
			// lquantite
			// 
			this->lquantite->AutoSize = true;
			this->lquantite->Location = System::Drawing::Point(15, 231);
			this->lquantite->Name = L"lquantite";
			this->lquantite->Size = System::Drawing::Size(54, 16);
			this->lquantite->TabIndex = 7;
			this->lquantite->Text = L"quantite";
			this->lquantite->Visible = false;
			// 
			// tbquantite
			// 
			this->tbquantite->Location = System::Drawing::Point(12, 250);
			this->tbquantite->Name = L"tbquantite";
			this->tbquantite->Size = System::Drawing::Size(100, 22);
			this->tbquantite->TabIndex = 6;
			this->tbquantite->Visible = false;
			// 
			// ltva
			// 
			this->ltva->AutoSize = true;
			this->ltva->Location = System::Drawing::Point(15, 278);
			this->ltva->Name = L"ltva";
			this->ltva->Size = System::Drawing::Size(61, 16);
			this->ltva->TabIndex = 9;
			this->ltva->Text = L"taux TVA";
			this->ltva->Visible = false;
			// 
			// tbtva
			// 
			this->tbtva->Location = System::Drawing::Point(12, 297);
			this->tbtva->Name = L"tbtva";
			this->tbtva->Size = System::Drawing::Size(100, 22);
			this->tbtva->TabIndex = 8;
			this->tbtva->Visible = false;
			// 
			// buttonajout
			// 
			this->buttonajout->Location = System::Drawing::Point(520, 448);
			this->buttonajout->Name = L"buttonajout";
			this->buttonajout->Size = System::Drawing::Size(75, 23);
			this->buttonajout->TabIndex = 10;
			this->buttonajout->Text = L"Ajouter";
			this->buttonajout->UseVisualStyleBackColor = true;
			this->buttonajout->Click += gcnew System::EventHandler(this, &forminfoarticle::buttonajout_Click);
			// 
			// buttonsuppr
			// 
			this->buttonsuppr->Location = System::Drawing::Point(426, 448);
			this->buttonsuppr->Name = L"buttonsuppr";
			this->buttonsuppr->Size = System::Drawing::Size(88, 23);
			this->buttonsuppr->TabIndex = 11;
			this->buttonsuppr->Text = L"Supprimer";
			this->buttonsuppr->UseVisualStyleBackColor = true;
			this->buttonsuppr->Click += gcnew System::EventHandler(this, &forminfoarticle::buttonsuppr_Click);
			// 
			// buttonmodif
			// 
			this->buttonmodif->Location = System::Drawing::Point(520, 419);
			this->buttonmodif->Name = L"buttonmodif";
			this->buttonmodif->Size = System::Drawing::Size(75, 23);
			this->buttonmodif->TabIndex = 12;
			this->buttonmodif->Text = L"Modifier";
			this->buttonmodif->UseVisualStyleBackColor = true;
			this->buttonmodif->Click += gcnew System::EventHandler(this, &forminfoarticle::buttonmodif_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(520, 448);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(79, 23);
			this->confirmajout->TabIndex = 13;
			this->confirmajout->Text = L"Confirmer";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &forminfoarticle::confirmajout_Click);
			// 
			// confirmsuppr
			// 
			this->confirmsuppr->Location = System::Drawing::Point(439, 319);
			this->confirmsuppr->Name = L"confirmsuppr";
			this->confirmsuppr->Size = System::Drawing::Size(75, 23);
			this->confirmsuppr->TabIndex = 14;
			this->confirmsuppr->Text = L"Confirmer";
			this->confirmsuppr->UseVisualStyleBackColor = true;
			this->confirmsuppr->Visible = false;
			this->confirmsuppr->Click += gcnew System::EventHandler(this, &forminfoarticle::confirmsuppr_Click);
			// 
			// confirmmodif
			// 
			this->confirmmodif->Location = System::Drawing::Point(520, 419);
			this->confirmmodif->Name = L"confirmmodif";
			this->confirmmodif->Size = System::Drawing::Size(79, 23);
			this->confirmmodif->TabIndex = 15;
			this->confirmmodif->Text = L"Confirmer";
			this->confirmmodif->UseVisualStyleBackColor = true;
			this->confirmmodif->Visible = false;
			this->confirmmodif->Click += gcnew System::EventHandler(this, &forminfoarticle::confirmmodif_Click);
			// 
			// linfo
			// 
			this->linfo->AutoSize = true;
			this->linfo->Location = System::Drawing::Point(9, 43);
			this->linfo->Name = L"linfo";
			this->linfo->Size = System::Drawing::Size(48, 16);
			this->linfo->TabIndex = 27;
			this->linfo->Text = L"ID_info";
			// 
			// tbID_info
			// 
			this->tbID_info->Location = System::Drawing::Point(12, 68);
			this->tbID_info->Name = L"tbID_info";
			this->tbID_info->Size = System::Drawing::Size(100, 22);
			this->tbID_info->TabIndex = 26;
			// 
			// larticle
			// 
			this->larticle->AutoSize = true;
			this->larticle->Location = System::Drawing::Point(9, 93);
			this->larticle->Name = L"larticle";
			this->larticle->Size = System::Drawing::Size(64, 16);
			this->larticle->TabIndex = 31;
			this->larticle->Text = L"ID_Article";
			this->larticle->Visible = false;
			// 
			// tbID_article
			// 
			this->tbID_article->Location = System::Drawing::Point(12, 115);
			this->tbID_article->Name = L"tbID_article";
			this->tbID_article->Size = System::Drawing::Size(100, 22);
			this->tbID_article->TabIndex = 30;
			this->tbID_article->Visible = false;
			// 
			// forminfoarticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 485);
			this->Controls->Add(this->larticle);
			this->Controls->Add(this->tbID_article);
			this->Controls->Add(this->linfo);
			this->Controls->Add(this->tbID_info);
			this->Controls->Add(this->confirmmodif);
			this->Controls->Add(this->confirmsuppr);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->buttonmodif);
			this->Controls->Add(this->buttonsuppr);
			this->Controls->Add(this->buttonajout);
			this->Controls->Add(this->ltva);
			this->Controls->Add(this->tbtva);
			this->Controls->Add(this->lquantite);
			this->Controls->Add(this->tbquantite);
			this->Controls->Add(this->lprix);
			this->Controls->Add(this->tbprix);
			this->Controls->Add(this->lpara);
			this->Controls->Add(this->tbparametres);
			this->Name = L"forminfoarticle";
			this->Text = L"forminfoarticle";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonajout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lpara->Visible = true;
		this->lprix->Visible = true;
		this->lquantite->Visible = true;
		this->ltva->Visible = true;
		this->tbparametres->Visible = true;
		this->tbprix->Visible = true;
		this->tbquantite->Visible = true;
		this->tbtva->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonsuppr->Visible = false;
		this->buttonmodif->Visible = false;
		this->confirmajout->Visible = true;
		this->larticle->Visible = true;
		this->tbID_article->Visible = true;
		this->linfo->Visible = false;
		this->tbID_info->Visible = false;






	}
	private: System::Void confirmajout_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "INSERT INTO INFO(PARAMETRES,MONTANT,QUANTITE_RESTANTE,ID_ARTICLE,TYPE_TAUX) values(@param,@montant,@quantite,@id_article,@tauxtva)";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@param", this->tbparametres->Text);
		command.Parameters->AddWithValue("@montant", Convert::ToInt32(this->tbprix->Text));
		command.Parameters->AddWithValue("@id_article", Convert::ToInt32(this->tbID_article->Text));
		command.Parameters->AddWithValue("@tauxtva", Convert::ToInt32(this->tbtva->Text));
		command.Parameters->AddWithValue("@quantite", Convert::ToInt32(this->tbquantite->Text));
		command.ExecuteNonQuery();
	}
	private: System::Void confirmsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "DELETE FROM INFO WHERE ID_INFO = @id";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbID_info->Text));
		command.ExecuteNonQuery();*/
	}
	private: System::Void confirmmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "UPDATE INFO set MONTANT = @prix , PARAMETRES = @param , QUANTITE_RESTANTE=@quantite, TYPE_TAUX=@tauxtva";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@prix", Convert::ToInt32(this->tbprix->Text));
		command.Parameters->AddWithValue("@param", this->tbparametres->Text);
		command.Parameters->AddWithValue("@quantite", Convert::ToInt32(this->tbquantite->Text));
		command.Parameters->AddWithValue("@tauxtva", Convert::ToInt32(this->tbtva->Text));
		command.ExecuteNonQuery();
	}
	private: System::Void buttonmodif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->buttonajout->Visible = false;
		this->buttonsuppr->Visible = false;
		this->buttonmodif->Visible = false;
		this->tbID_info->Visible = true;
		this->tbID_article->Visible = true;
		this->tbparametres->Visible = true;
		this->tbprix->Visible = true;
		this->tbquantite->Visible = true;
		this->confirmmodif->Visible = true;

		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "SELECT MONTANT,PARAMETRES,QUANTITE_RESTANTE,TYPE_TAUX from INFO where ID_INFO = @id";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbID_info->Text));
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->HasRows) {
			while (reader->Read()) {

				this->tbprix->Text = Convert::ToString(reader->GetInt32(0));
				this->tbparametres->Text = reader->GetString(1);
				this->tbquantite->Text = Convert::ToString(reader->GetInt32(2));
				this->tbtva->Text = Convert::ToString(reader->GetInt32(3));

			}
		}

	}
	private: System::Void buttonsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->linfo->Visible = true;
		this->tbID_info->Visible = true;
		//this->confirmsuppr->Visible = true;

		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "SELECT PARAMETRES,NOM_ARTICLE from INFO inner join ARTICLE on INFO.ID_ARTICLE = ARTICLE.ID_ARTICLE where ID_INFO= @id";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbID_info->Text));
		String^ sqlquerry1 = "DELETE FROM INFO WHERE ID_INFO = @id";
		SqlCommand command1(sqlquerry1, % sqlConn);
		command1.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbID_info->Text));
		command1.ExecuteNonQuery();
	}
	};
}
