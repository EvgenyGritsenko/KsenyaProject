// Unit6.cpp
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

// Инициализация списка вопросов
std::vector<Question> questions = {
	{"Какой цикл в C++ используется для выполнения блока кода, пока условие истинно?", {"for", "do-while", "while"}, 2},
	{"Какой цикл гарантированно выполнится хотя бы один раз?", {"for", "do-while", "while"}, 1},
	{"Каким образом можно выйти из цикла досрочно?", {"Использовать оператор continue", "Использовать оператор break", "Изменить условие"}, 1},
	{"Какой из операторов пропускает текущую итерацию цикла, переходя к следующей?", {"break", "continue", "return"}, 1},
	{"Какова синтаксическая структура цикла for?", {"for (инициализация; условие; итерация) { тело цикла }", "for (условие; итерация; инициализация) { тело цикла }", "for (итерация; условие; инициализация) { тело цикла }"}, 0},
	{"Какой цикл более удобен для работы с заранее известным количеством итераций?", {"while", "for", "do-while"}, 1},
	{"Что произойдет, если условие в цикле while всегда остается истинным?", {"Цикл завершится автоматически", "Произойдет зацикливание", "Программа выдаст ошибку компиляции"}, 1},
	{"Что делает оператор continue в цикле?", {"Выходит из цикла", "Пропускает текущую итерацию и переходит к следующей", "Завершает выполнение программы"}, 1},
	{"Что произойдет, если не указать условие в цикле for?", {"Цикл выполнится один раз", "Цикл выполнится бесконечно", "Будет ошибка компиляции"}, 1},
	{"Какой цикл выполняется до тех пор, пока условие остается истинным, но проверка условия происходит после выполнения тела цикла?", {"while", "do-while", "for"}, 1},

};

int currentQuestionIndex = 0;  // Индекс текущего вопроса
int score = 0;  // Счет правильных ответов

void __fastcall TForm6::ShowQuestion(int index) {
	if (index < static_cast<int>(questions.size())) {
		Label1->Caption = questions[index].question;
		RadioGroup1->Items->Clear();
		for (const auto &option : questions[index].options) {
			RadioGroup1->Items->Add(option);
		}
		RadioGroup1->ItemIndex = -1;
	} else {
		ShowMessage("Тест завершен. Ваш результат: " + IntToStr(static_cast<int>(score)) + " из " + IntToStr(static_cast<int>(questions.size())));
		Close();
	}
}

__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm6::Button1Click(TObject *Sender)
{
	if (RadioGroup1->ItemIndex == questions[currentQuestionIndex].correctAnswerIndex) {
		score++;
	}
	currentQuestionIndex++;
	ShowQuestion(currentQuestionIndex);
}

void __fastcall TForm6::FormShow(TObject *Sender)
{
	ShowQuestion(0);
}
//---------------------------------------------------------------------------

