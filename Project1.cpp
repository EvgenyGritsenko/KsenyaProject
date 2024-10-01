//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit13.cpp", Form13);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit12.cpp", Form12);
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit14.cpp", Form14);
USEFORM("Unit15.cpp", Form15);
USEFORM("Unit16.cpp", Form16);
USEFORM("Unit17.cpp", Form17);
USEFORM("Unit18.cpp", Form18);
USEFORM("Unit19.cpp", Form19);
USEFORM("Unit20.cpp", Form20);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm12), &Form12);
		Application->CreateForm(__classid(TForm13), &Form13);
		Application->CreateForm(__classid(TForm14), &Form14);
		Application->CreateForm(__classid(TForm15), &Form15);
		Application->CreateForm(__classid(TForm16), &Form16);
		Application->CreateForm(__classid(TForm17), &Form17);
		Application->CreateForm(__classid(TForm18), &Form18);
		Application->CreateForm(__classid(TForm19), &Form19);
		Application->CreateForm(__classid(TForm20), &Form20);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
