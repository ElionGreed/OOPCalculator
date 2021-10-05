#include "Calculator.h"
#include "Calculate.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::Calculator form;
	Application::Run(%form);
	return 0;
};