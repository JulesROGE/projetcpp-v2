#pragma once
#include "InterfaceAdmin.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Apropos
	/// </summary>
	public ref class apropos : public System::Windows::Forms::Form
	{
	public:
		apropos(void)
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
		~apropos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ labelcp;
	private: System::Windows::Forms::Label^ labelversion;
	private: System::Windows::Forms::Button^ buttonOK;
		   //private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(apropos::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelcp = (gcnew System::Windows::Forms::Label());
			this->labelversion = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 76);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(131, 76);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(249, 72);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// labelcp
			// 
			this->labelcp->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelcp->AutoSize = true;
			this->labelcp->Location = System::Drawing::Point(54, 237);
			this->labelcp->Name = L"labelcp";
			this->labelcp->Size = System::Drawing::Size(319, 20);
			this->labelcp->TabIndex = 2;
			this->labelcp->Text = L"Copyright © 2018-2021, Groupe4 Fondation";
			// 
			// labelversion
			// 
			this->labelversion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelversion->AutoSize = true;
			this->labelversion->Location = System::Drawing::Point(84, 266);
			this->labelversion->Name = L"labelversion";
			this->labelversion->Size = System::Drawing::Size(252, 20);
			this->labelversion->TabIndex = 3;
			this->labelversion->Text = L"Version 2110 (build 14527 .20276)";
			// 
			// buttonOK
			// 
			this->buttonOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonOK->Location = System::Drawing::Point(277, 403);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(118, 42);
			this->buttonOK->TabIndex = 4;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &apropos::buttonOK_Click);
			// 
			// apropos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 457);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->labelversion);
			this->Controls->Add(this->labelcp);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"apropos";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"À propos";
			this->Load += gcnew System::EventHandler(this, &apropos::apropos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		apropos::Close();
		//Project1::InterfaceAdmin^ f = gcnew Project1::InterfaceAdmin();
		//f->Show();
	}
	private: System::Void apropos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
