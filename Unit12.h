//---------------------------------------------------------------------------

#ifndef Unit12H
#define Unit12H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>  // ���������� ��������� ��� std::vector
//---------------------------------------------------------------------------
struct Question {
    String question;
    std::vector<String> options;
    int correctAnswerIndex;
};

//---------------------------------------------------------------------------

class TForm12 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TRadioGroup *RadioGroup1;
	TButton *Button1;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

public:		// User declarations
	__fastcall TForm12(TComponent* Owner);
	void __fastcall ShowQuestion(int index);  // ���������� ������ ShowQuestion
};

// ��������� ���������� ��� extern
extern std::vector<Question> questions;  // ��������� ��� extern
extern int currentQuestionIndex;
extern int score;
//---------------------------------------------------------------------------
extern PACKAGE TForm12 *Form12;
//---------------------------------------------------------------------------
#endif
