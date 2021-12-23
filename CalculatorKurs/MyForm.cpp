#include "MyForm.h"
#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CalculatorKurs::MyForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}