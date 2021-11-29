#include "InterfacePrincipale.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::InterfacePrincipale monFormulaire;
	Application::Run(% monFormulaire);
}


	System::Void Project2::InterfacePrincipale::ButtonAdministrateur_Click(System::Object^ sender, System::EventArgs^ e) {
		Project2::InterfaceAdmin^ f = gcnew Project2::InterfaceAdmin(this);
		//f->ip = this;
		f->Show();
		this->Visible = false;
	}