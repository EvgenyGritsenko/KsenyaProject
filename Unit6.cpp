// Unit6.cpp
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

// ������������� ������ ��������
std::vector<Question> questions = {
	{"����� ������ ��������� ������ � ���� ������� �������� � C?", {"\\n", "\\0", "\\t"}, 1},
	{"����� ���������� ���������� ���������� ��� ������ � ������� std::string?", {"<iostream>", "<cstring>", "<string>"}, 2},
	{"����� ����� ������ std::string ������������ ��� ��������� ���������?", {"substr", "slice", "substring"}, 0},
	{"����� ����� ������ std::string ���������� ����� ������?", {"size", "length", "count"}, 1},
	{"����� �������� ������������ ��� ������������ ����� � C++?", {"+=", "&=", "||"}, 0},
	{"��� ���������, ���� �� ���������� ������, ���������� ��� ������ � C++?", {"��������� ���������� � �������.", "��������� ������ ������.", "������ �� ���������."}, 1},
	{"��� �������� ������ � ������� ������ �� �������?", {"str.get(i)", "str[i]", "str.index(i)"}, 1},
	{"��� ������ ����� find() � ������ std::string?", {"���������� ����� ������.", " ������� ���������.", "������� ��������� � ������."}, 2},
	{"��� �������� ������ ��� ������ ����������� � C++?", {"malloc()", "new[]", "calloc()"}, 1},
	{"����� ����� ������ std::string ������������ ��� ������ ����� ������?", {"change", "swap", "replace"}, 1},

};

int currentQuestionIndex = 0;  // ������ �������� �������
int score = 0;  // ���� ���������� �������

void __fastcall TForm6::ShowQuestion(int index) {
	if (index < static_cast<int>(questions.size())) {
		Label1->Caption = questions[index].question;
		RadioGroup1->Items->Clear();
		for (const auto &option : questions[index].options) {
			RadioGroup1->Items->Add(option);
		}
		RadioGroup1->ItemIndex = -1;
	} else {
		ShowMessage("���� ��������. ��� ���������: " + IntToStr(static_cast<int>(score)) + " �� " + IntToStr(static_cast<int>(questions.size())));
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

