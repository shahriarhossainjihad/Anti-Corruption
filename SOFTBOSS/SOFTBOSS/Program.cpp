#include "LoginFrom.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    // Start the Windows Forms application

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SOFTBOSS::LoginFrom LoginFrom;

    LoginFrom.ShowDialog();
    User^ user = LoginFrom.user;
    if (user != nullptr) {
        MessageBox::Show("Successfull Authentication of" + user->name, "Program.cpp", MessageBoxButtons::OK);
    }
    else
    {
        MessageBox::Show("Login Fail", "Program.cpp", MessageBoxButtons::OK);
    }

    // Create and run the login form
    Application::Run(gcnew SOFTBOSS::LoginFrom());

    return 0;
}
