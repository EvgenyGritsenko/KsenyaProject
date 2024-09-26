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
	{"Что возвращает функция sqrt()?", {"Корень числа", "Квадрат числа", "Модуль числа"}, 0},
	{"Какой тип данных возвращает функция strlen()?", {"int", "double", "size_t"}, 2},
	{"Что такое функция в C++?", {"Переменная для хранения данных", "Блок кода, который выполняет определённую задачу", "Тип данных для хранения символов", "Инструмент для создания классов"}, 1},
	{"Какой синтаксис используется для объявления функции в C++?", {"return_type function_name(parameters);", "function_name return_type(parameters);", "function_name(parameters) return_type;", "return_type(parameters) function_name;"}, 0},
	{"Какое ключевое слово используется для определения функции, которая не возвращает значения?", {"int", "char", "void", "float"}, 2},
	{"Что произойдёт, если не вернуть значение из функции, которая должна возвращать int?", {"Код не скомпилируется", "Программа завершится с ошибкой", "Функция вернёт 0 по умолчанию"}, 0},
	{"Что означает параметр по умолчанию в функции C++?", {"Значение, которое обязательно передаётся в функцию", "Значение, которое присваивается параметру, если он не был передан при вызове", "Значение, которое нужно указывать всегда"}, 1},
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

