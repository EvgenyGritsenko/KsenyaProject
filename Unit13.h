//---------------------------------------------------------------------------

#ifndef Unit13H
#define Unit13H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>  // Подключаем заголовок для std::vector
//---------------------------------------------------------------------------
struct Question {
    String question;
    std::vector<String> options;
    int correctAnswerIndex;
};

//---------------------------------------------------------------------------

class TForm13 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TRadioGroup *RadioGroup1;
	TButton *Button1;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);

public:		// User declarations
	__fastcall TForm13(TComponent* Owner);
	void __fastcall ShowQuestion(int index);  // Объявление метода ShowQuestion
};

// Объявляем переменные как extern
extern std::vector<Question> questions;  // Объявляем как extern
extern int currentQuestionIndex;
extern int score;
//---------------------------------------------------------------------------
extern PACKAGE TForm13 *Form13;
//---------------------------------------------------------------------------
#endif
