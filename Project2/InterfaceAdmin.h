#pragma once
#include "gestionstats.h"

namespace Project2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Project2;

	ref class InterfaceAdmin;
	ref class InterfacePrincipale;

	/// <summary>
	/// Description résumée de InterfaceAdmin
	/// </summary>
	public ref class InterfaceAdmin : public System::Windows::Forms::Form
	{
	public:
		InterfaceAdmin()
		{
			//InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		InterfaceAdmin(InterfacePrincipale^ ip)
		{
			this->ip = ip;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Button^ BoutonPrecedent;
	private: Bunifu::Framework::UI::BunifuThinButton2^ buttonGestionStocks;
	private: Bunifu::Framework::UI::BunifuThinButton2^ buttonGestionClient;
	private: Bunifu::Framework::UI::BunifuThinButton2^ buttonGestionPersonnel;
	private: Bunifu::Framework::UI::BunifuThinButton2^ boutonAffichageStats;
	private: System::ComponentModel::IContainer^ components;
	protected:
		InterfacePrincipale^ ip;
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InterfaceAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfaceAdmin::typeid));
			this->BoutonPrecedent = (gcnew System::Windows::Forms::Button());
			this->buttonGestionStocks = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->buttonGestionClient = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->buttonGestionPersonnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->boutonAffichageStats = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->SuspendLayout();
			this->BoutonPrecedent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BoutonPrecedent->AutoSize = true;
			this->BoutonPrecedent->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->BoutonPrecedent->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->BoutonPrecedent->Location = System::Drawing::Point(22, 322);
			this->BoutonPrecedent->Name = L"BoutonPrecedent";
			this->BoutonPrecedent->Size = System::Drawing::Size(111, 33);
			this->BoutonPrecedent->TabIndex = 1;
			this->BoutonPrecedent->Text = L"< Précédent";
			this->BoutonPrecedent->UseVisualStyleBackColor = true;
			this->BoutonPrecedent->Click += gcnew System::EventHandler(this, &InterfaceAdmin::BoutonPrecedent_Click);
			this->buttonGestionStocks->ActiveBorderThickness = 1;
			this->buttonGestionStocks->ActiveCornerRadius = 20;
			this->buttonGestionStocks->ActiveFillColor = System::Drawing::Color::White;
			this->buttonGestionStocks->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->buttonGestionStocks->ActiveLineColor = System::Drawing::Color::White;
			this->buttonGestionStocks->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonGestionStocks->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonGestionStocks->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestionStocks.BackgroundImage")));
			this->buttonGestionStocks->ButtonText = L"Gestion Stocks";
			this->buttonGestionStocks->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonGestionStocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGestionStocks->ForeColor = System::Drawing::Color::Honeydew;
			this->buttonGestionStocks->IdleBorderThickness = 1;
			this->buttonGestionStocks->IdleCornerRadius = 20;
			this->buttonGestionStocks->IdleFillColor = System::Drawing::Color::DarkGray;
			this->buttonGestionStocks->IdleForecolor = System::Drawing::Color::White;
			this->buttonGestionStocks->IdleLineColor = System::Drawing::Color::Transparent;
			this->buttonGestionStocks->Location = System::Drawing::Point(58, 232);
			this->buttonGestionStocks->Margin = System::Windows::Forms::Padding(5);
			this->buttonGestionStocks->Name = L"buttonGestionStocks";
			this->buttonGestionStocks->Size = System::Drawing::Size(171, 60);
			this->buttonGestionStocks->TabIndex = 5;
			this->buttonGestionStocks->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttonGestionClient->ActiveBorderThickness = 1;
			this->buttonGestionClient->ActiveCornerRadius = 20;
			this->buttonGestionClient->ActiveFillColor = System::Drawing::Color::White;
			this->buttonGestionClient->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->buttonGestionClient->ActiveLineColor = System::Drawing::Color::White;
			this->buttonGestionClient->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonGestionClient->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonGestionClient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestionClient.BackgroundImage")));
			this->buttonGestionClient->ButtonText = L"Gestion Clients";
			this->buttonGestionClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonGestionClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGestionClient->ForeColor = System::Drawing::Color::Honeydew;
			this->buttonGestionClient->IdleBorderThickness = 1;
			this->buttonGestionClient->IdleCornerRadius = 20;
			this->buttonGestionClient->IdleFillColor = System::Drawing::Color::DarkGray;
			this->buttonGestionClient->IdleForecolor = System::Drawing::Color::White;
			this->buttonGestionClient->IdleLineColor = System::Drawing::Color::Transparent;
			this->buttonGestionClient->Location = System::Drawing::Point(58, 162);
			this->buttonGestionClient->Margin = System::Windows::Forms::Padding(5);
			this->buttonGestionClient->Name = L"buttonGestionClient";
			this->buttonGestionClient->Size = System::Drawing::Size(171, 60);
			this->buttonGestionClient->TabIndex = 6;
			this->buttonGestionClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttonGestionPersonnel->ActiveBorderThickness = 1;
			this->buttonGestionPersonnel->ActiveCornerRadius = 20;
			this->buttonGestionPersonnel->ActiveFillColor = System::Drawing::Color::White;
			this->buttonGestionPersonnel->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->buttonGestionPersonnel->ActiveLineColor = System::Drawing::Color::White;
			this->buttonGestionPersonnel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonGestionPersonnel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonGestionPersonnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestionPersonnel.BackgroundImage")));
			this->buttonGestionPersonnel->ButtonText = L"Gestion Personnel";
			this->buttonGestionPersonnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonGestionPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonGestionPersonnel->ForeColor = System::Drawing::Color::Honeydew;
			this->buttonGestionPersonnel->IdleBorderThickness = 1;
			this->buttonGestionPersonnel->IdleCornerRadius = 20;
			this->buttonGestionPersonnel->IdleFillColor = System::Drawing::Color::DarkGray;
			this->buttonGestionPersonnel->IdleForecolor = System::Drawing::Color::White;
			this->buttonGestionPersonnel->IdleLineColor = System::Drawing::Color::Transparent;
			this->buttonGestionPersonnel->Location = System::Drawing::Point(58, 92);
			this->buttonGestionPersonnel->Margin = System::Windows::Forms::Padding(5);
			this->buttonGestionPersonnel->Name = L"buttonGestionPersonnel";
			this->buttonGestionPersonnel->Size = System::Drawing::Size(171, 60);
			this->buttonGestionPersonnel->TabIndex = 7;
			this->buttonGestionPersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->boutonAffichageStats->ActiveBorderThickness = 1;
			this->boutonAffichageStats->ActiveCornerRadius = 20;
			this->boutonAffichageStats->ActiveFillColor = System::Drawing::Color::White;
			this->boutonAffichageStats->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->boutonAffichageStats->ActiveLineColor = System::Drawing::Color::White;
			this->boutonAffichageStats->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->boutonAffichageStats->BackColor = System::Drawing::SystemColors::ControlLight;
			this->boutonAffichageStats->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boutonAffichageStats.BackgroundImage")));
			this->boutonAffichageStats->ButtonText = L"Afficher Stats";
			this->boutonAffichageStats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->boutonAffichageStats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->boutonAffichageStats->ForeColor = System::Drawing::Color::Honeydew;
			this->boutonAffichageStats->IdleBorderThickness = 1;
			this->boutonAffichageStats->IdleCornerRadius = 20;
			this->boutonAffichageStats->IdleFillColor = System::Drawing::Color::DarkGray;
			this->boutonAffichageStats->IdleForecolor = System::Drawing::Color::White;
			this->boutonAffichageStats->IdleLineColor = System::Drawing::Color::Transparent;
			this->boutonAffichageStats->Location = System::Drawing::Point(58, 22);
			this->boutonAffichageStats->Margin = System::Windows::Forms::Padding(5);
			this->boutonAffichageStats->Name = L"boutonAffichageStats";
			this->boutonAffichageStats->Size = System::Drawing::Size(171, 60);
			this->boutonAffichageStats->TabIndex = 8;
			this->boutonAffichageStats->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->boutonAffichageStats->Click += gcnew System::EventHandler(this, &InterfaceAdmin::boutonAffichageStats_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->CancelButton = this->BoutonPrecedent;
			this->ClientSize = System::Drawing::Size(288, 367);
			this->Controls->Add(this->boutonAffichageStats);
			this->Controls->Add(this->buttonGestionPersonnel);
			this->Controls->Add(this->buttonGestionClient);
			this->Controls->Add(this->buttonGestionStocks);
			this->Controls->Add(this->BoutonPrecedent);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InterfaceAdmin";
			this->ShowInTaskbar = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Espace Administrateur";
			this->Load += gcnew System::EventHandler(this, &InterfaceAdmin::form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boutonform_Click(System::Object^ sender, System::EventArgs^ e) {
		Project2::gestionstats^ g = gcnew gestionstats();
		g->Show();

	}
	private: System::Void BoutonPrecedent_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void boutonAffichageStats_Click(System::Object^ sender, System::EventArgs^ e) {
		Project2::gestionstats^ g = gcnew gestionstats();
		g->Show();
	}
	};
}
