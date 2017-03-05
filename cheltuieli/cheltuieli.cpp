// cheltuieli.cpp : main project file.

#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    cheltuieli::MyForm form;
    Application::Run(%form);
	return 0;
}
