#include "InterfaceAdmin.h"
#include "InterfacePrincipale.h"

System::Void Project2::InterfaceAdmin::BoutonPrecedent_Click(System::Object^ sender, System::EventArgs^ e) {
	//test1
	//Project1::InterfacePrincipale^ f = gcnew Project1::InterfacePrincipale();
	//f->Show();
	// 
	//test2
	//InterfacePrincipale::Show();

	//InterfacePrincipale::Visible = True;
	ip->Visible = true;
	InterfaceAdmin::Close();
}