#include "MyForm.h"
#include "Dados.h"
namespace Project1 {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew MyForm);
	}
}