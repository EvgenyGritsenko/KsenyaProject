#include <vcl.h>
#include <stdlib.h> // ��� rand()
#pragma hdrstop
#include "Unit8.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm8 *Form8;

__fastcall TForm8::TForm8(TComponent* Owner)
    : TForm(Owner), score(0)
{

}

