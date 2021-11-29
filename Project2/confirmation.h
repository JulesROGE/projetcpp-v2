#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de confirmationquitter
	/// </summary>
	public ref class confirmationsupprimer : public System::Windows::Forms::Form
	{
	public:
		confirmationsupprimer(void)
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
		~confirmationsupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelsuppr;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonyes;
	private: System::Windows::Forms::Button^ buttonno;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(confirmationsupprimer::typeid));
			this->labelsuppr = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonyes = (gcnew System::Windows::Forms::Button());
			this->buttonno = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelsuppr
			// 
			this->labelsuppr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelsuppr->AutoSize = true;
			this->labelsuppr->Location = System::Drawing::Point(114, 41);
			this->labelsuppr->Name = L"labelsuppr";
			this->labelsuppr->Size = System::Drawing::Size(401, 20);
			this->labelsuppr->TabIndex = 0;
			this->labelsuppr->Text = L"Voulez vous supprimer cet élément de façon définitive \?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// buttonyes
			// 
			this->buttonyes->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonyes->Location = System::Drawing::Point(508, 137);
			this->buttonyes->Name = L"buttonyes";
			this->buttonyes->Size = System::Drawing::Size(102, 37);
			this->buttonyes->TabIndex = 2;
			this->buttonyes->Text = L"Oui";
			this->buttonyes->UseVisualStyleBackColor = true;
			this->buttonyes->Click += gcnew System::EventHandler(this, &confirmationsupprimer::buttonyes_Click);
			// 
			// buttonno
			// 
			this->buttonno->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonno->Location = System::Drawing::Point(620, 137);
			this->buttonno->Name = L"buttonno";
			this->buttonno->Size = System::Drawing::Size(102, 37);
			this->buttonno->TabIndex = 3;
			this->buttonno->Text = L"Non";
			this->buttonno->UseVisualStyleBackColor = true;
			this->buttonno->Click += gcnew System::EventHandler(this, &confirmationsupprimer::buttonno_Click);
			// 
			// confirmationsupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(734, 186);
			this->Controls->Add(this->buttonno);
			this->Controls->Add(this->buttonyes);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelsuppr);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"confirmationsupprimer";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Supprimer un élément";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonyes_Click(System::Object^ sender, System::EventArgs^ e) {
		confirmationsupprimer::Close();
	}
	private: System::Void buttonno_Click(System::Object^ sender, System::EventArgs^ e) {
		confirmationsupprimer::Close();
	}
	};
}
