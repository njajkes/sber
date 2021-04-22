#include "Sberform.h"
#include <Windows.h>

using namespace Sber;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Sberform);

	return 0;
}