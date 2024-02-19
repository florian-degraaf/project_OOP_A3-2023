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
	/// Description résumée de formtva
	/// </summary>
	public ref class formtva : public System::Windows::Forms::Form
	{
	public:
		formtva(void)
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
		~formtva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::Button^ buttonajout;
	private: System::Windows::Forms::Button^ confirmajout;
	private: System::Windows::Forms::Button^ buttonmodif;

	private: System::Windows::Forms::Button^ confirmmodif;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->buttonajout = (gcnew System::Windows::Forms::Button());
			this->confirmajout = (gcnew System::Windows::Forms::Button());
			this->buttonmodif = (gcnew System::Windows::Forms::Button());
			this->confirmmodif = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Taux_TVA";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// buttonajout
			// 
			this->buttonajout->Location = System::Drawing::Point(622, 376);
			this->buttonajout->Name = L"buttonajout";
			this->buttonajout->Size = System::Drawing::Size(75, 23);
			this->buttonajout->TabIndex = 5;
			this->buttonajout->Text = L"Ajouter";
			this->buttonajout->UseVisualStyleBackColor = true;
			this->buttonajout->Click += gcnew System::EventHandler(this, &formtva::button1_Click);
			// 
			// confirmajout
			// 
			this->confirmajout->Location = System::Drawing::Point(534, 376);
			this->confirmajout->Name = L"confirmajout";
			this->confirmajout->Size = System::Drawing::Size(82, 23);
			this->confirmajout->TabIndex = 6;
			this->confirmajout->Text = L"Confirmer";
			this->confirmajout->UseVisualStyleBackColor = true;
			this->confirmajout->Visible = false;
			this->confirmajout->Click += gcnew System::EventHandler(this, &formtva::button2_Click);
			// 
			// buttonmodif
			// 
			this->buttonmodif->Location = System::Drawing::Point(622, 347);
			this->buttonmodif->Name = L"buttonmodif";
			this->buttonmodif->Size = System::Drawing::Size(75, 23);
			this->buttonmodif->TabIndex = 7;
			this->buttonmodif->Text = L"Modifier";
			this->buttonmodif->UseVisualStyleBackColor = true;
			this->buttonmodif->Click += gcnew System::EventHandler(this, &formtva::button3_Click);
			// 
			// confirmmodif
			// 
			this->confirmmodif->Location = System::Drawing::Point(534, 347);
			this->confirmmodif->Name = L"confirmmodif";
			this->confirmmodif->Size = System::Drawing::Size(82, 23);
			this->confirmmodif->TabIndex = 9;
			this->confirmmodif->Text = L"Confirmer";
			this->confirmmodif->UseVisualStyleBackColor = true;
			this->confirmmodif->Visible = false;
			this->confirmmodif->Click += gcnew System::EventHandler(this, &formtva::confirmmodif_click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Nouveau_Pourcentage";
			this->label3->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 145);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->Visible = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(12, 195);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 14;
			this->dateTimePicker2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Date de debut";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Date de fin";
			this->label5->Visible = false;
			// 
			// formtva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 407);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->confirmmodif);
			this->Controls->Add(this->buttonmodif);
			this->Controls->Add(this->confirmajout);
			this->Controls->Add(this->buttonajout);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"formtva";
			this->Text = L"formtva";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Visible = true;
		this->textBox1->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonmodif->Visible = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Visible = true;
		this->textBox1->Visible = true;
		this->label3->Visible = true;
		this->textBox3->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonmodif->Visible = false;
		this->confirmmodif->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->dateTimePicker1->Visible = true;
		this->dateTimePicker2->Visible = true;

	}
	private: System::Void confirmmodif_click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "UPDATE [desktop-o5e812k].[master].[dbo].[TVA] SET VALEUR = @valeur, DATE_DE_DEBUT = @datedebut, DATE_DE_FIN = @datefin WHERE TYPE_TAUX=@typetaux";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@valeur", Convert::ToDecimal(this->textBox3->Text));
		command.Parameters->AddWithValue("@datefin", this->dateTimePicker2->Value);
		command.Parameters->AddWithValue("@datedebut", this->dateTimePicker1->Value);
		command.Parameters->AddWithValue("@typetaux", Convert::ToInt32(this->textBox1->Text));
		command.ExecuteNonQuery();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connstring = "Data Source=localhost;Integrated Security=True";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();
		String^ sqlquery = "INSERT INTO TVA (VALEUR,DATE_DE_FIN,DATE_DE_DEBUT)VALUES(@VALEUR,@datefin,@datedebut)";
		SqlCommand command(sqlquery, % sqlConn);
		command.Parameters->AddWithValue("@VALEUR", Convert::ToInt32(this->textBox3->Text));
		command.Parameters->AddWithValue("@datefin", this->dateTimePicker2->Value);
		command.Parameters->AddWithValue("@datedebut", this->dateTimePicker1->Value);
		command.ExecuteNonQuery();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Visible = true;
		this->textBox1->Visible = true;
		this->label3->Visible = true;
		this->textBox3->Visible = true;
		this->buttonajout->Visible = false;
		this->buttonmodif->Visible = false;
		this->confirmajout->Visible = true;
		this->dateTimePicker1->Visible = true;
		this->dateTimePicker2->Visible = true;
	}
	};
}
