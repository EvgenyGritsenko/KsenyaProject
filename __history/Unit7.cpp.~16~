//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

struct Question {
    String text;    // Текст вопроса
    bool correctAnswer; // Правильный ответ: true - "Да", false - "Нет"
};


Question questions[] = {
    {"Функция main обязана возвращать int?", true},
    {"Может ли функция возвращать void?", true},
    {"Может ли одна функция вызывать другую?", true},
    {"Можно ли использовать в C++ язык ассемблера?", true},
    {"Функция всегда должна иметь параметры?", false}
};

int questionIndex = 0;
int correctAnswers = 0;
int wrongAnswers = 0;


//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
    LabelQuestion->Caption = questions[questionIndex].text;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
	CheckAnswer(true);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
	CheckAnswer(false);
}
//---------------------------------------------------------------------------


// Функция проверки ответа
void TForm7::CheckAnswer(bool answer)
{
	if (answer == questions[questionIndex].correctAnswer) {
		correctAnswers++;
    } else {
		wrongAnswers++;
    }
	NextQuestion();
}


void TForm7::NextQuestion()
{
    questionIndex++;
    if (questionIndex < sizeof(questions) / sizeof(questions[0])) {
        LabelQuestion->Caption = questions[questionIndex].text;
	} else {
        String resultMessage = "Тест завершён!\n"
                               "Правильных ответов: " + IntToStr(correctAnswers) + "\n"
                               "Неправильных ответов: " + IntToStr(wrongAnswers);
        ShowMessage(resultMessage);
		Close();
    }
}
