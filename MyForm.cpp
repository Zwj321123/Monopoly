//////////////////////////////////////////
//				MyForm.cpp				//
//			author: Wenjun Zeng			//
//			ID: 1715534					//
//			open MyForm window			//
//////////////////////////////////////////
#include "MyForm.h"
#include <iostream>
#include <time.h>
using namespace System;
using namespace System::Windows::Forms;

//contain main function to open MyForm window
[STAThreadAttribute]
int Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
	return 0;
}
