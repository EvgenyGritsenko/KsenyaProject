//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm14::Button1Click(TObject *Sender)
{
	int N = StrToInt(Edit1->Text);
	Memo1->Lines->Clear();

	// Выводим таблицу умножения для введенного числа N
	for (int j = 1; j <= 10; j++) { // Обычно таблица умножения выводится до 10
		Memo1->Lines->Add(IntToStr(N) + " * " + IntToStr(j) + " = " + IntToStr(N * j));
	}
}
//---------------------------------------------------------------------------
