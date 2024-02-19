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
	/// Description résumée de Formpaiement
	/// </summary>
	public ref class Formpaiement : public System::Windows::Forms::Form
	{
	public:
		Formpaiement(void)
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
		~Formpaiement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lidcomm;
	protected:
	private: System::Windows::Forms::TextBox^ tbcomm;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ tbmoy;
	private: System::Windows::Forms::Label^ lmoy;
	private: System::Windows::Forms::TextBox^ tbmontant;
	private: System::Windows::Forms::Label^ lmontant;
	private: System::Windows::Forms::Button^ buttonsuppr;
	private: System::Windows::Forms::Button^ confirmsuppr;
	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Button^ buttonajout;
	private: System::Windows::Forms::TextBox^ tbpai;
	private: System::Windows::Forms::Label^ lidpaiment;
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
			this->lidcomm = (gcnew System::Windows::Forms::Label());
			this->tbcomm = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tbmoy = (gcnew System::Windows::Forms::TextBox());
			this->lmoy = (gcnew System::Windows::Forms::Label());
			this->tbmontant = (gcnew System::Windows::Forms::TextBox());
			this->lmontant = (gcnew System::Windows::Forms::Label());
			this->buttonsuppr = (gcnew System::Windows::Forms::Button());
			this->confirmsuppr = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->buttonajout = (gcnew System::Windows::Forms::Button());
			this->tbpai = (gcnew System::Windows::Forms::TextBox());
			this->lidpaiment = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lidcomm
			// 
			this->lidcomm->AutoSize = true;
			this->lidcomm->Location = System::Drawing::Point(12, 74);
			this->lidcomm->Name = L"lidcomm";
			this->lidcomm->Size = System::Drawing::Size(93, 16);
			this->lidcomm->TabIndex = 0;
			this->lidcomm->Text = L"Id_commande";
			this->lidcomm->Visible = false;
			// 
			// tbcomm
			// 
			this->tbcomm->Location = System::Drawing::Point(15, 94);
			this->tbcomm->Name = L"tbcomm";
			this->tbcomm->Size = System::Drawing::Size(100, 22);
			this->tbcomm->TabIndex = 1;
			this->tbcomm->Visible = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tbmoy
			// 
			this->tbmoy->Location = System::Drawing::Point(15, 142);
			this->tbmoy->Name = L"tbmoy";
			this->tbmoy->Size = System::Drawing::Size(100, 22);
			this->tbmoy->TabIndex = 4;
			this->tbmoy->Visible = false;
			// 
			// lmoy
			// 
			this->lmoy->AutoSize = true;
			this->lmoy->Location = System::Drawing::Point(12, 122);
			this->lmoy->Name = L"lmoy";
			this->lmoy->Size = System::Drawing::Size(134, 16);
			this->lmoy->TabIndex = 3;
			this->lmoy->Text = L"Moyen_de_paiement";
			this->lmoy->Visible = false;
			// 
			// tbmontant
			// 
			this->tbmontant->Location = System::Drawing::Point(15, 187);
			this->tbmontant->Name = L"tbmontant";
			this->tbmontant->Size = System::Drawing::Size(100, 22);
			this->tbmontant->TabIndex = 6;
			this->tbmontant->Visible = false;
			// 
			// lmontant
			// 
			this->lmontant->AutoSize = true;
			this->lmontant->Location = System::Drawing::Point(12, 167);
			this->lmontant->Name = L"lmontant";
			this->lmontant->Size = System::Drawing::Size(54, 16);
			this->lmontant->TabIndex = 5;
			this->lmontant->Text = L"Montant";
			this->lmontant->Visible = false;
			// 
			// buttonsuppr
			// 
			this->buttonsuppr->Location = System::Drawing::Point(558, 316);
			this->buttonsuppr->Name = L"buttonsuppr";
			this->buttonsuppr->Size = System::Drawing::Size(75, 23);
			this->buttonsuppr->TabIndex = 7;
			this->buttonsuppr->Text = L"Suppr";
			this->buttonsuppr->UseVisualStyleBackColor = true;
			this->buttonsuppr->Click += gcnew System::EventHandler(this, &Formpaiement::buttonsuppr_Click);
			// 
			// confirmsuppr
			// 
			this->confirmsuppr->Location = System::Drawing::Point(558, 287);
			this->confirmsuppr->Name = L"confirmsuppr";
			this->confirmsuppr->Size = System::Drawing::Size(75, 23);
			this->confirmsuppr->TabIndex = 8;
			this->confirmsuppr->Text = L"Confirmer";
			this->confirmsuppr->UseVisualStyleBackColor = true;
			this->confirmsuppr->Visible = false;
			this->confirmsuppr->Click += gcnew System::EventHandler(this, &Formpaiement::confirmsuppr_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(477, 287);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(75, 23);
			this->confirmajout->TabIndex = 9;
			this->confirmajout->Text = L"Confirmer";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &Formpaiement::confirmajout_Click);
			// 
			// buttonajout
			// 
			this->buttonajout->Location = System::Drawing::Point(477, 316);
			this->buttonajout->Name = L"buttonajout";
			this->buttonajout->Size = System::Drawing::Size(75, 23);
			this->buttonajout->TabIndex = 10;
			this->buttonajout->Text = L"Ajouter";
			this->buttonajout->UseVisualStyleBackColor = true;
			this->buttonajout->Click += gcnew System::EventHandler(this, &Formpaiement::buttonajout_Click);
			// 
			// tbpai
			// 
			this->tbpai->Location = System::Drawing::Point(15, 47);
			this->tbpai->Name = L"tbpai";
			this->tbpai->Size = System::Drawing::Size(100, 22);
			this->tbpai->TabIndex = 12;
			this->tbpai->Visible = false;
			// 
			// lidpaiment
			// 
			this->lidpaiment->AutoSize = true;
			this->lidpaiment->Location = System::Drawing::Point(12, 27);
			this->lidpaiment->Name = L"lidpaiment";
			this->lidpaiment->Size = System::Drawing::Size(73, 16);
			this->lidpaiment->TabIndex = 11;
			this->lidpaiment->Text = L"Id_paiment";
			this->lidpaiment->Visible = false;
			// 
			// Formpaiement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 358);
			this->Controls->Add(this->tbpai);
			this->Controls->Add(this->lidpaiment);
			this->Controls->Add(this->buttonajout);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->confirmsuppr);
			this->Controls->Add(this->buttonsuppr);
			this->Controls->Add(this->tbmontant);
			this->Controls->Add(this->lmontant);
			this->Controls->Add(this->tbmoy);
			this->Controls->Add(this->lmoy);
			this->Controls->Add(this->tbcomm);
			this->Controls->Add(this->lidcomm);
			this->Name = L"Formpaiement";
			this->Text = L"formpaiement";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonajout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lidcomm->Visible = true;
		this->lmoy->Visible = true;
		this->lmontant->Visible = true;
		this->tbcomm->Visible = true;
		this->tbmoy->Visible = true;
		this->tbmontant->Visible = true;
		this->confirmajout->Visible = true;
	}
	private: System::Void confirmajout_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "INSERT INTO PAIEMENT(ID_MP,MONTANT,ID_COMMANDE) values(@id_moyens,@montant,@id_command)";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@id_moyens", Convert::ToInt32(this->tbmoy->Text));
		command.Parameters->AddWithValue("@montant", Convert::ToInt32(this->tbmontant->Text));
		command.Parameters->AddWithValue("@id_command", Convert::ToInt32(this->tbcomm->Text));
		command.ExecuteNonQuery();
	}
	private: System::Void buttonsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lidpaiment->Visible = true;
		this->tbpai->Visible = true;
		this->confirmsuppr->Visible = true;
		this->buttonsuppr->Visible = false;
	}
	private: System::Void confirmsuppr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquerry = "DELETE FROM PAIEMENT where ID_PAIEMENT = @id";
		SqlCommand command(sqlquerry, % sqlConn);
		command.Parameters->AddWithValue("@id", Convert::ToInt32(this->tbpai->Text));
		command.ExecuteNonQuery();

	}
	};
}
