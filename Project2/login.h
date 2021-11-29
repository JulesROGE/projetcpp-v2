#pragma once
#include "InterfacePrincipale.h"
#include "InterfaceAdmin.h"

//Mdp : 5678

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: Bunifu::Framework::UI::BunifuThinButton2^ ButtonLogin;
	private: Bunifu::Framework::UI::BunifuTextbox^ TextboxUser;
	private: Bunifu::Framework::UI::BunifuTextbox^ TextboxPassword;


	private: System::Windows::Forms::Label^ labelLogin;
	private: System::Windows::Forms::Button^ buttonPrecedent;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->ButtonLogin = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->TextboxUser = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->TextboxPassword = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->buttonPrecedent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ButtonLogin
			// 
			this->ButtonLogin->ActiveBorderThickness = 1;
			this->ButtonLogin->ActiveCornerRadius = 20;
			this->ButtonLogin->ActiveFillColor = System::Drawing::Color::White;
			this->ButtonLogin->ActiveForecolor = System::Drawing::Color::DarkGray;
			this->ButtonLogin->ActiveLineColor = System::Drawing::Color::White;
			this->ButtonLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonLogin->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ButtonLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonLogin.BackgroundImage")));
			this->ButtonLogin->ButtonText = L"Se connecter";
			this->ButtonLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonLogin->ForeColor = System::Drawing::Color::Honeydew;
			this->ButtonLogin->IdleBorderThickness = 1;
			this->ButtonLogin->IdleCornerRadius = 20;
			this->ButtonLogin->IdleFillColor = System::Drawing::Color::DarkGray;
			this->ButtonLogin->IdleForecolor = System::Drawing::Color::White;
			this->ButtonLogin->IdleLineColor = System::Drawing::Color::Transparent;
			this->ButtonLogin->Location = System::Drawing::Point(98, 301);
			this->ButtonLogin->Name = L"ButtonLogin";
			this->ButtonLogin->Size = System::Drawing::Size(150, 50);
			this->ButtonLogin->TabIndex = 1;
			this->ButtonLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ButtonLogin->Click += gcnew System::EventHandler(this, &login::ButtonLogin_Click);
			// 
			// TextboxUser
			// 
			this->TextboxUser->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextboxUser->BackColor = System::Drawing::Color::LightGray;
			this->TextboxUser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TextboxUser.BackgroundImage")));
			this->TextboxUser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TextboxUser->ForeColor = System::Drawing::Color::Black;
			this->TextboxUser->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TextboxUser.Icon")));
			this->TextboxUser->Location = System::Drawing::Point(37, 120);
			this->TextboxUser->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TextboxUser->Name = L"TextboxUser";
			this->TextboxUser->Size = System::Drawing::Size(286, 54);
			this->TextboxUser->TabIndex = 2;
			this->TextboxUser->text = L"";
			this->TextboxUser->OnTextChange += gcnew System::EventHandler(this, &login::TextboxUser_OnTextChange);
			// 
			// TextboxPassword
			// 
			this->TextboxPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextboxPassword->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->TextboxPassword->BackColor = System::Drawing::Color::LightGray;
			this->TextboxPassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TextboxPassword.BackgroundImage")));
			this->TextboxPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TextboxPassword->ForeColor = System::Drawing::Color::Black;
			this->TextboxPassword->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TextboxPassword.Icon")));
			this->TextboxPassword->Location = System::Drawing::Point(37, 200);
			this->TextboxPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TextboxPassword->Name = L"TextboxPassword";
			this->TextboxPassword->Size = System::Drawing::Size(286, 54);
			this->TextboxPassword->TabIndex = 3;
			this->TextboxPassword->text = L"";
			this->TextboxPassword->OnTextChange += gcnew System::EventHandler(this, &login::TextboxPassword_OnTextChange);
			// 
			// labelLogin
			// 
			this->labelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLogin->Location = System::Drawing::Point(87, 46);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(185, 29);
			this->labelLogin->TabIndex = 4;
			this->labelLogin->Text = L"Connectez-vous";
			// 
			// buttonPrecedent
			// 
			this->buttonPrecedent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonPrecedent->Location = System::Drawing::Point(12, 419);
			this->buttonPrecedent->Name = L"buttonPrecedent";
			this->buttonPrecedent->Size = System::Drawing::Size(127, 38);
			this->buttonPrecedent->TabIndex = 5;
			this->buttonPrecedent->Text = L"< Précédent";
			this->buttonPrecedent->UseVisualStyleBackColor = true;
			this->buttonPrecedent->Click += gcnew System::EventHandler(this, &login::buttonPrecedent_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(358, 469);
			this->Controls->Add(this->buttonPrecedent);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->TextboxPassword);
			this->Controls->Add(this->TextboxUser);
			this->Controls->Add(this->ButtonLogin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"login";
			this->ShowInTaskbar = false;
			this->Text = L"Se connecter";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonPrecedent_Click(System::Object^ sender, System::EventArgs^ e) {
		login::Close();
	}
	private: System::Void ButtonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		/*try
		{
			String^ identifiant = this->TextboxUser->text;
			String^ motpasse = this->TextboxPassword->text;
			if (identifiant == "Admin" && motpasse == "5678")
			{
				//Project2::InterfaceAdmin^ f = gcnew Project2::InterfaceAdmin();
				//f->Show();
			}

		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}*/
	}
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextboxUser_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextboxPassword_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
