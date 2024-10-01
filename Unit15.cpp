//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit15.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm15 *Form15;

int Factorial(int n)
{
    if(n == 0) return 1;
    return n * Factorial(n - 1);
}

//---------------------------------------------------------------------------
__fastcall TForm15::TForm15(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm15::Button1Click(TObject *Sender)
{
	int num = StrToInt(Edit1->Text); // Получаем число от пользователя
	Memo1->Lines->Add("Факториал числа " + IntToStr(num) + " = " + IntToStr(Factorial(num)));
}
//---------------------------------------------------------------------------
