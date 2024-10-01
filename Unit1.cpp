//---------------------------------------------------------------------------

#include <vcl.h>
#include <ShellAPI.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit6.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	TForm6 *form = new TForm6(this);
	form->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N3Click(TObject *Sender)
{
    Form1->Close();
}
//---------------------------------------------------------------------------

