#pragma once

namespace bdd_test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de formarticle
	/// </summary>
	public ref class formarticle : public System::Windows::Forms::Form
	{
	public:
		formarticle(void)
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
		~formarticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lnom;
	protected:
	private: System::Windows::Forms::TextBox^ tbarticle;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ tbpara;
	private: System::Windows::Forms::Label^ lpara;
	private: System::Windows::Forms::TextBox^ tbprix;
	private: System::Windows::Forms::Label^ lprix;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ tbquantite;
	private: System::Windows::Forms::Label^ lquantite;
	private: System::Windows::Forms::TextBox^ tbseuil;
	private: System::Windows::Forms::Label^ lseuil;
	private: System::Windows::Forms::Label^ lbNomArticle;
	private: System::Windows::Forms::TextBox^ tbNomArticle;
	private: System::Windows::Forms::Label^ ltaux;
	private: System::Windows::Forms::TextBox^ tbtva;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lnom = (gcnew System::Windows::Forms::Label());
			this->tbarticle = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tbpara = (gcnew System::Windows::Forms::TextBox());
			this->lpara = (gcnew System::Windows::Forms::Label());
			this->tbprix = (gcnew System::Windows::Forms::TextBox());
			this->lprix = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tbquantite = (gcnew System::Windows::Forms::TextBox());
			this->lquantite = (gcnew System::Windows::Forms::Label());
			this->tbseuil = (gcnew System::Windows::Forms::TextBox());
			this->lseuil = (gcnew System::Windows::Forms::Label());
			this->lbNomArticle = (gcnew System::Windows::Forms::Label());
			this->tbNomArticle = (gcnew System::Windows::Forms::TextBox());
			this->ltaux = (gcnew System::Windows::Forms::Label());
			this->tbtva = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lnom
			// 
			this->lnom->AutoSize = true;
			this->lnom->Location = System::Drawing::Point(13, 15);
			this->lnom->Name = L"lnom";
			this->lnom->Size = System::Drawing::Size(60, 16);
			this->lnom->TabIndex = 0;
			this->lnom->Text = L"ID Article";
			// 
			// tbarticle
			// 
			this->tbarticle->Location = System::Drawing::Point(16, 47);
			this->tbarticle->Name = L"tbarticle";
			this->tbarticle->Size = System::Drawing::Size(100, 22);
			this->tbarticle->TabIndex = 1;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tbpara
			// 
			this->tbpara->Location = System::Drawing::Point(16, 227);
			this->tbpara->Name = L"tbpara";
			this->tbpara->Size = System::Drawing::Size(100, 22);
			this->tbpara->TabIndex = 4;
			this->tbpara->Visible = false;
			// 
			// lpara
			// 
			this->lpara->AutoSize = true;
			this->lpara->Location = System::Drawing::Point(13, 195);
			this->lpara->Name = L"lpara";
			this->lpara->Size = System::Drawing::Size(76, 16);
			this->lpara->TabIndex = 3;
			this->lpara->Text = L"parametres";
			this->lpara->Visible = false;
			// 
			// tbprix
			// 
			this->tbprix->Location = System::Drawing::Point(16, 170);
			this->tbprix->Name = L"tbprix";
			this->tbprix->Size = System::Drawing::Size(100, 22);
			this->tbprix->TabIndex = 6;
			this->tbprix->Visible = false;
			// 
			// lprix
			// 
			this->lprix->AutoSize = true;
			this->lprix->Location = System::Drawing::Point(13, 138);
			this->lprix->Name = L"lprix";
			this->lprix->Size = System::Drawing::Size(67, 16);
			this->lprix->TabIndex = 5;
			this->lprix->Text = L"prix article";
			this->lprix->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(408, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Suppr";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formarticle::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(489, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Confirmer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &formarticle::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(484, 380);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Ajouter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &formarticle::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(408, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Confirmer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &formarticle::button4_Click);
			// 
			// tbquantite
			// 
			this->tbquantite->Location = System::Drawing::Point(16, 380);
			this->tbquantite->Name = L"tbquantite";
			this->tbquantite->Size = System::Drawing::Size(100, 22);
			this->tbquantite->TabIndex = 12;
			this->tbquantite->Visible = false;
			// 
			// lquantite
			// 
			this->lquantite->AutoSize = true;
			this->lquantite->Location = System::Drawing::Point(13, 348);
			this->lquantite->Name = L"lquantite";
			this->lquantite->Size = System::Drawing::Size(101, 16);
			this->lquantite->TabIndex = 11;
			this->lquantite->Text = L"Quantite_initiale";
			this->lquantite->Visible = false;
			// 
			// tbseuil
			// 
			this->tbseuil->Location = System::Drawing::Point(16, 299);
			this->tbseuil->Name = L"tbseuil";
			this->tbseuil->Size = System::Drawing::Size(100, 22);
			this->tbseuil->TabIndex = 14;
			this->tbseuil->Visible = false;
			// 
			// lseuil
			// 
			this->lseuil->AutoSize = true;
			this->lseuil->Location = System::Drawing::Point(13, 267);
			this->lseuil->Name = L"lseuil";
			this->lseuil->Size = System::Drawing::Size(163, 16);
			this->lseuil->TabIndex = 13;
			this->lseuil->Text = L"Seuil_reaprovisionnement";
			this->lseuil->Visible = false;
			// 
			// lbNomArticle
			// 
			this->lbNomArticle->AutoSize = true;
			this->lbNomArticle->Location = System::Drawing::Point(13, 85);
			this->lbNomArticle->Name = L"lbNomArticle";
			this->lbNomArticle->Size = System::Drawing::Size(76, 16);
			this->lbNomArticle->TabIndex = 0;
			this->lbNomArticle->Text = L"Nom Article";
			// 
			// tbNomArticle
			// 
			this->tbNomArticle->Location = System::Drawing::Point(16, 104);
			this->tbNomArticle->Name = L"tbNomArticle";
			this->tbNomArticle->Size = System::Drawing::Size(100, 22);
			this->tbNomArticle->TabIndex = 1;
			// 
			// ltaux
			// 
			this->ltaux->AutoSize = true;
			this->ltaux->Location = System::Drawing::Point(230, 13);
			this->ltaux->Name = L"ltaux";
			this->ltaux->Size = System::Drawing::Size(58, 16);
			this->ltaux->TabIndex = 15;
			this->ltaux->Text = L"Taux tva";
			// 
			// tbtva
			// 
			this->tbtva->Location = System::Drawing::Point(233, 33);
			this->tbtva->Name = L"tbtva";
			this->tbtva->Size = System::Drawing::Size(100, 22);
			this->tbtva->TabIndex = 16;
			// 
			// formarticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 415);
			this->Controls->Add(this->tbtva);
			this->Controls->Add(this->ltaux);
			this->Controls->Add(this->tbseuil);
			this->Controls->Add(this->lseuil);
			this->Controls->Add(this->tbquantite);
			this->Controls->Add(this->lquantite);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbprix);
			this->Controls->Add(this->lprix);
			this->Controls->Add(this->tbpara);
			this->Controls->Add(this->lpara);
			this->Controls->Add(this->tbNomArticle);
			this->Controls->Add(this->lbNomArticle);
			this->Controls->Add(this->tbarticle);
			this->Controls->Add(this->lnom);
			this->Name = L"formarticle";
			this->Text = L"formarticle";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->button4->Visible = true;
		this->button3->Visible = false;
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM ARTICLE WHERE ID_ARTICLE = @nom";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@nom", Convert::ToInt32(this->tbarticle->Text));
		command.ExecuteNonQuery();
		MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button2->Visible = true;
		this->button3->Visible = false;
		this->lpara->Visible = true;
		this->lprix->Visible = true;
		this->tbpara->Visible = true;
		this->tbprix->Visible = true;
		this->lquantite->Visible = true;
		this->tbquantite->Visible = true;
		this->lseuil->Visible = true;
		this->tbseuil->Visible = true;
		this->tbtva->Visible = true;
		this->ltaux->Visible = true;


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "DELETE FROM ARTICLE WHERE NOM_ARTICLE = @nom";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@nom", this->tbarticle->Text);
		command.ExecuteNonQuery();
		MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
		this->Close();*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "INSERT INTO ARTICLE(NOM_ARTICLE,SEUIL_REAPRO) VALUES(@nom,@seuil)";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@nom", this->tbNomArticle->Text);
		command.Parameters->AddWithValue("@seuil", Convert::ToInt32(this->tbseuil->Text));
		command.ExecuteNonQuery();
		String^ sqlquery2 = "SELECT TOP(1) ID_ARTICLE from ARTICLE order by ID_ARTICLE desc";
		SqlCommand command2(sqlquery2, % sqlConn);
		int a;
		for (int i = 0; i < 1; i++) {
			SqlDataReader^ reader = command2.ExecuteReader();
			if (reader->HasRows) {
				while (reader->Read()) {

					a = reader->GetInt32(0);
				}
			}
			reader->Close();
		}
		String^ sqlquery3 = "INSERT INTO INFO (ID_ARTICLE,PARAMETRES,MONTANT,QUANTITE_RESTANTE,TYPE_TAUX) VALUES (@id_article,@parametres,@prix,@quantite,@tauxtva)";
		SqlCommand command3(sqlquery3, % sqlConn);
		command3.Parameters->AddWithValue("@id_article", a);
		command3.Parameters->AddWithValue("@parametres", this->tbpara->Text);
		command3.Parameters->AddWithValue("@prix", Convert::ToInt32(this->tbprix->Text));
		command3.Parameters->AddWithValue("@quantite", Convert::ToInt32(this->tbquantite->Text));
		command3.Parameters->AddWithValue("@tauxtva", Convert::ToInt32(this->tbtva->Text));
		command3.ExecuteNonQuery();

		MessageBox::Show("Successful", "reussi", MessageBoxButtons::OK);
		this->Close();
		this->lnom->Text = "success";

	}
	};
}

