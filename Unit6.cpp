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
	{"����� ���� � C++ ������������ ��� ���������� ����� ����, ���� ������� �������?", {"for", "do-while", "while"}, 2},
	{"����� ���� �������������� ���������� ���� �� ���� ���?", {"for", "do-while", "while"}, 1},
	{"����� ������� ����� ����� �� ����� ��������?", {"������������ �������� continue", "������������ �������� break", "�������� �������"}, 1},
	{"����� �� ���������� ���������� ������� �������� �����, �������� � ���������?", {"break", "continue", "return"}, 1},
	{"������ �������������� ��������� ����� for?", {"for (�������������; �������; ��������) { ���� ����� }", "for (�������; ��������; �������������) { ���� ����� }", "for (��������; �������; �������������) { ���� ����� }"}, 0},
	{"����� ���� ����� ������ ��� ������ � ������� ��������� ����������� ��������?", {"while", "for", "do-while"}, 1},
	{"��� ����������, ���� ������� � ����� while ������ �������� ��������?", {"���� ���������� �������������", "���������� ������������", "��������� ������ ������ ����������"}, 1},
	{"��� ������ �������� continue � �����?", {"������� �� �����", "���������� ������� �������� � ��������� � ���������", "��������� ���������� ���������"}, 1},
	{"��� ����������, ���� �� ������� ������� � ����� for?", {"���� ���������� ���� ���", "���� ���������� ����������", "����� ������ ����������"}, 1},
	{"����� ���� ����������� �� ��� ���, ���� ������� �������� ��������, �� �������� ������� ���������� ����� ���������� ���� �����?", {"while", "do-while", "for"}, 1},

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

