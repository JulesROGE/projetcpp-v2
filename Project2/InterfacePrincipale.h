#pragma once
#include "InterfaceAdmin.h"
#include "apropos.h"
#include"confirmation.h"
#include "login.h"


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de InterfacePrincipale
	/// </summary>
	public ref class InterfacePrincipale : public System::Windows::Forms::Form
	{
	public:
		InterfacePrincipale(void)
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
		~InterfacePrincipale()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonapropos;
	private: System::Windows::Forms::Button^ buttonQuitter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonAdministrateur;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonCommande;




	protected:







	private: System::ComponentModel::IContainer^ components;


	protected:


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfacePrincipale::typeid));
			this->buttonapropos = (gcnew System::Windows::Forms::Button());
			this->buttonQuitter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonAdministrateur = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->ButtonCommande = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			this->buttonapropos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonapropos->Location = System::Drawing::Point(12, 430);
			this->buttonapropos->Name = L"buttonapropos";
			this->buttonapropos->Size = System::Drawing::Size(87, 32);
			this->buttonapropos->TabIndex = 2;
			this->buttonapropos->Text = L"À propos";
			this->buttonapropos->UseVisualStyleBackColor = true;
			this->buttonapropos->Click += gcnew System::EventHandler(this, &InterfacePrincipale::buttonapropos_Click);
			this->buttonQuitter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonQuitter->Location = System::Drawing::Point(751, 430);
			this->buttonQuitter->Name = L"buttonQuitter";
			this->buttonQuitter->Size = System::Drawing::Size(87, 32);
			this->buttonQuitter->TabIndex = 3;
			this->buttonQuitter->Text = L"Quitter";
			this->buttonQuitter->UseVisualStyleBackColor = true;
			this->buttonQuitter->Click += gcnew System::EventHandler(this, &InterfacePrincipale::buttonQuitter_Click);
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(331, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 58);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Bienvenue";
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(220, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->ButtonAdministrateur->ActiveBorderThickness = 1;
			this->ButtonAdministrateur->ActiveCornerRadius = 20;
			this->ButtonAdministrateur->ActiveFillColor = System::Drawing::Color::White;
			this->ButtonAdministrateur->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->ButtonAdministrateur->ActiveLineColor = System::Drawing::Color::White;
			this->ButtonAdministrateur->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonAdministrateur->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonAdministrateur->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonAdministrateur.BackgroundImage")));
			this->ButtonAdministrateur->ButtonText = L"Espace Administrateur";
			this->ButtonAdministrateur->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonAdministrateur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonAdministrateur->ForeColor = System::Drawing::Color::DarkGray;
			this->ButtonAdministrateur->IdleBorderThickness = 1;
			this->ButtonAdministrateur->IdleCornerRadius = 20;
			this->ButtonAdministrateur->IdleFillColor = System::Drawing::Color::DarkGray;
			this->ButtonAdministrateur->IdleForecolor = System::Drawing::Color::White;
			this->ButtonAdministrateur->IdleLineColor = System::Drawing::Color::Transparent;
			this->ButtonAdministrateur->Location = System::Drawing::Point(303, 192);
			this->ButtonAdministrateur->Margin = System::Windows::Forms::Padding(5);
			this->ButtonAdministrateur->Name = L"ButtonAdministrateur";
			this->ButtonAdministrateur->Size = System::Drawing::Size(230, 58);
			this->ButtonAdministrateur->TabIndex = 8;
			this->ButtonAdministrateur->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ButtonAdministrateur->Click += gcnew System::EventHandler(this, &InterfacePrincipale::ButtonAdministrateur_Click);
			this->ButtonCommande->ActiveBorderThickness = 1;
			this->ButtonCommande->ActiveCornerRadius = 20;
			this->ButtonCommande->ActiveFillColor = System::Drawing::Color::White;
			this->ButtonCommande->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->ButtonCommande->ActiveLineColor = System::Drawing::Color::White;
			this->ButtonCommande->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonCommande->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonCommande->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonCommande.BackgroundImage")));
			this->ButtonCommande->ButtonText = L"Espace Commande";
			this->ButtonCommande->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonCommande->ForeColor = System::Drawing::Color::DarkGray;
			this->ButtonCommande->IdleBorderThickness = 1;
			this->ButtonCommande->IdleCornerRadius = 20;
			this->ButtonCommande->IdleFillColor = System::Drawing::Color::DarkGray;
			this->ButtonCommande->IdleForecolor = System::Drawing::Color::White;
			this->ButtonCommande->IdleLineColor = System::Drawing::Color::Transparent;
			this->ButtonCommande->Location = System::Drawing::Point(303, 260);
			this->ButtonCommande->Margin = System::Windows::Forms::Padding(5);
			this->ButtonCommande->Name = L"ButtonCommande";
			this->ButtonCommande->Size = System::Drawing::Size(230, 58);
			this->ButtonCommande->TabIndex = 9;
			this->ButtonCommande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(850, 474);
			this->Controls->Add(this->ButtonCommande);
			this->Controls->Add(this->ButtonAdministrateur);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonQuitter);
			this->Controls->Add(this->buttonapropos);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InterfacePrincipale";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DataCorp 11";
			this->Load += gcnew System::EventHandler(this, &InterfacePrincipale::InterfacePrincipale_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void InterfacePrincipale_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonapropos_Click(System::Object^ sender, System::EventArgs^ e) {
		Project2::apropos^ g = gcnew Project2::apropos();
		g->Show();
	}
	private: System::Void buttonQuitter_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfacePrincipale::Close();
	}



	   //InterfacePrincipale::Visible = false;
	   //InterfacePrincipale::Hide();
	   


	private: System::Void BoutonCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
	private: System::Void ButtonAdministrateur_Click(System::Object^ sender, System::EventArgs^ e);
};
}
