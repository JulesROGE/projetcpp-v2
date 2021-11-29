#pragma once
#include "InterfaceAdmin.h"
#include "InterfacePrincipale.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de gestionstats
	/// </summary>
	public ref class gestionstats : public System::Windows::Forms::Form
	{
	public:
		gestionstats(void)
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
		~gestionstats()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::Button^ BoutonPrecedent;

	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonAffichageStats;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonVariations;




	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gestionstats::typeid));
			this->BoutonPrecedent = (gcnew System::Windows::Forms::Button());
			this->ButtonAffichageStats = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->ButtonVariations = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->SuspendLayout();
			// 
			// BoutonPrecedent
			// 
			this->BoutonPrecedent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BoutonPrecedent->AutoSize = true;
			this->BoutonPrecedent->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->BoutonPrecedent->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->BoutonPrecedent->Location = System::Drawing::Point(12, 220);
			this->BoutonPrecedent->Name = L"BoutonPrecedent";
			this->BoutonPrecedent->Size = System::Drawing::Size(111, 33);
			this->BoutonPrecedent->TabIndex = 2;
			this->BoutonPrecedent->Text = L"< Précédent";
			this->BoutonPrecedent->UseVisualStyleBackColor = true;
			this->BoutonPrecedent->Click += gcnew System::EventHandler(this, &gestionstats::BoutonPrecedent_Click);
			// 
			// ButtonAffichageStats
			// 
			this->ButtonAffichageStats->ActiveBorderThickness = 1;
			this->ButtonAffichageStats->ActiveCornerRadius = 20;
			this->ButtonAffichageStats->ActiveFillColor = System::Drawing::Color::White;
			this->ButtonAffichageStats->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->ButtonAffichageStats->ActiveLineColor = System::Drawing::Color::Transparent;
			this->ButtonAffichageStats->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonAffichageStats->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonAffichageStats->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonAffichageStats.BackgroundImage")));
			this->ButtonAffichageStats->ButtonText = L"Afficher Stats";
			this->ButtonAffichageStats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonAffichageStats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonAffichageStats->ForeColor = System::Drawing::Color::White;
			this->ButtonAffichageStats->IdleBorderThickness = 1;
			this->ButtonAffichageStats->IdleCornerRadius = 20;
			this->ButtonAffichageStats->IdleFillColor = System::Drawing::Color::DarkGray;
			this->ButtonAffichageStats->IdleForecolor = System::Drawing::Color::White;
			this->ButtonAffichageStats->IdleLineColor = System::Drawing::Color::Transparent;
			this->ButtonAffichageStats->Location = System::Drawing::Point(75, 56);
			this->ButtonAffichageStats->Name = L"ButtonAffichageStats";
			this->ButtonAffichageStats->Size = System::Drawing::Size(120, 60);
			this->ButtonAffichageStats->TabIndex = 5;
			this->ButtonAffichageStats->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ButtonVariations
			// 
			this->ButtonVariations->ActiveBorderThickness = 1;
			this->ButtonVariations->ActiveCornerRadius = 20;
			this->ButtonVariations->ActiveFillColor = System::Drawing::Color::White;
			this->ButtonVariations->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->ButtonVariations->ActiveLineColor = System::Drawing::Color::Transparent;
			this->ButtonVariations->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonVariations->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonVariations->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonVariations.BackgroundImage")));
			this->ButtonVariations->ButtonText = L"Variations";
			this->ButtonVariations->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonVariations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonVariations->ForeColor = System::Drawing::Color::White;
			this->ButtonVariations->IdleBorderThickness = 1;
			this->ButtonVariations->IdleCornerRadius = 20;
			this->ButtonVariations->IdleFillColor = System::Drawing::Color::DarkGray;
			this->ButtonVariations->IdleForecolor = System::Drawing::Color::White;
			this->ButtonVariations->IdleLineColor = System::Drawing::Color::Transparent;
			this->ButtonVariations->Location = System::Drawing::Point(75, 122);
			this->ButtonVariations->Name = L"ButtonVariations";
			this->ButtonVariations->Size = System::Drawing::Size(120, 60);
			this->ButtonVariations->TabIndex = 6;
			this->ButtonVariations->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gestionstats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(276, 265);
			this->ControlBox = false;
			this->Controls->Add(this->ButtonVariations);
			this->Controls->Add(this->ButtonAffichageStats);
			this->Controls->Add(this->BoutonPrecedent);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"gestionstats";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Stats";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BoutonPrecedent_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionstats::Close();
		//Project1::InterfacePrincipale::Visible = true;
	}
	};
}
