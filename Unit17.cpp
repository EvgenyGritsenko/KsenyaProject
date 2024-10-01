//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm17 *Form17;
//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm17::Button1Click(TObject *Sender)
{
    int rows = StrToInt(Edit1->Text); // Получаем количество строк от пользователя
    Memo1->Lines->Clear();
    for (int i = 1; i <= rows; ++i) {
        String row = String::StringOfChar(' ', rows - i);
        row += String::StringOfChar('*', 2 * i - 1);
        Memo1->Lines->Add(row); // Вывод пирамиды в Memo1
    }
}
//---------------------------------------------------------------------------
