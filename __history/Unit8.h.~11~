#ifndef Unit8H
#define Unit8H
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

class TForm8 : public TForm
{
__published:
    TButton *ButtonExecute;
	TEdit *EditInput;
	TLabel *LabelScore;
	TLabel *LabelTask;
    TLabel *LabelStatus;
    void __fastcall ButtonExecuteClick(TObject *Sender);
private:
    int score;
	bool (TForm8::*currentFunction)(int);
	void GenerateTask();
	bool ValidateAnswer();


    bool SquareFunction(int number);
    bool FactorialFunction(int number);
    bool IsPrimeFunction(int number);
    bool RandomFunction(int number);


    bool PromptForAnswer(int correctAnswer);
    bool PromptForAnswer(bool correctAnswer);

public:
    __fastcall TForm8(TComponent* Owner);
};

extern PACKAGE TForm8 *Form8;
#endif
