//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

struct Question {
	String text;
    bool correctAnswer;
};


Question questions[] = {
	{"Можно ли использовать оператор + для объединения строк в C++ с использованием std::string?", true},
	{"Заканчивается ли каждая строка в массиве символов C символом \n?", false},
	{"Может ли метод replace() в классе std::string заменить подстроку другой строкой?", true},
	{"Является ли класс std::string частью стандартной библиотеки языка C++?", true},
	{"Можно ли изменить размер массива символов после его инициализации?", false},
	{"Может ли метод find() в классе std::string вернуть индекс первого вхождения подстроки?", true},
	{"Освобождается ли память автоматически при использовании массива символов (например, char str[])?", false},
	{"Является ли класс std::string более безопасным для управления памятью по сравнению с массивом символов?", true},
	{"Можно ли использовать метод length() для получения длины строки, представленной массивом символов?", false},
	{"Может ли строка в C++ содержать символы юникода, используя класс std::string?", true},
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
