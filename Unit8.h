#ifndef Unit8H
#define Unit8H
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

class TForm8 : public TForm
{
__published:
private:
    int score;
	bool (TForm8::*currentFunction)(int);
public:
    __fastcall TForm8(TComponent* Owner);
};

extern PACKAGE TForm8 *Form8;
#endif
