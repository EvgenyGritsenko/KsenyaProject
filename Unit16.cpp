//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit16.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm16 *Form16;

int Sum(int N)
{
    int sum = 0;
    for(int i = 1; i <= N; i++)
        sum += i;
    return sum;
}

//---------------------------------------------------------------------------
__fastcall TForm16::TForm16(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button1Click(TObject *Sender)
{
    int num = StrToInt(Edit1->Text); // Получаем число от пользователя
    Label1->Caption = "Сумма: " + IntToStr(Sum(num)); // Вывод результата
}
//---------------------------------------------------------------------------
