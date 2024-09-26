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
	{"Какой символ завершает строку в виде массива символов в C?", {"\\n", "\\0", "\\t"}, 1},
	{"Какую библиотеку необходимо подключить для работы с классом std::string?", {"<iostream>", "<cstring>", "<string>"}, 2},
	{"Какой метод класса std::string используется для получения подстроки?", {"substr", "slice", "substring"}, 0},
	{"Какой метод класса std::string возвращает длину строки?", {"size", "length", "count"}, 1},
	{"Какой оператор используется для конкатенации строк в C++?", {"+=", "&=", "||"}, 0},
	{"Что произойдёт, если не освободить память, выделенную для строки в C++?", {"Программа завершится с ошибкой.", "Возникнет утечка памяти.", "Ничего не произойдёт."}, 1},
	{"Как получить доступ к символу строки по индексу?", {"str.get(i)", "str[i]", "str.index(i)"}, 1},
	{"Что делает метод find() в классе std::string?", {"Возвращает длину строки.", " Удаляет подстроку.", "Находит подстроку в строке."}, 2},
	{"Как выделить память под строку динамически в C++?", {"malloc()", "new[]", "calloc()"}, 1},
	{"Какой метод класса std::string используется для замены части строки?", {"change", "swap", "replace"}, 1},

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

