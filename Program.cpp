
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	personnel^ employee = nullptr;
	while (true) {
		bdd_test::LoginForm loginForm;
		loginForm.ShowDialog();

		personnel^ employee = loginForm.employee;
		if (employee != nullptr) {
			bdd_test::MainForm mainForm(employee);
			Application::Run(% mainForm);
			/*if (mainForm.switchToRegister = true) {
				bdd_test::RegisterForm registerForm;
				Application::Run(% registerForm);
			}*/
		}
		else {
			employee = loginForm.employee;
			break;
		}

	}
}