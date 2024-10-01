//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
// ������������� ������ ��������
std::vector<Question> questions = {
	{"����� �� ������ ����� ������������� � ����������� for?", {"�������������", "�������", "��� ����� ����� �������������"}, 2},
	{"��� ������ ��������� ���? for (int i = 0; i < 10; i++) continue;", {"���������� ��� ��������", "���� �� �����������", "���� ����������� 10 ���, �� ���� �� �����������"}, 2},
	{"����� ���� ���������� ����� ������ ��������?", {"for (int i = 0; i < 1; i++)", "while (false)", "do { ... } while (false)"}, 0},
	{"����� �� ������ �� �������� ����������� � C++?", {"for", "do-while", "repeat-until"}, 2},
	{"��� ����������, ���� ������� � for ������ �����?", {"���� ����������� ����������", "���� ����������� ���� ���", "���� �� �����������"}, 2},
	{"��� ����� ����������� ���� � ������������ �� ������ for?", {"for (�������������; �������; ���������)", "while (�������)", "do { ... } while (�������)"}, 1},
	{"��� ����������, ���� � ����� while ������� ������� �� ������ ������?", {"���� ���������� ���� ���", "���� �� ����������", "��������� ���������� � �������"}, 1},
	{"����� ���� ������� ������������ ��� �������� �� ����������?", {"for (auto item : container)", "while", "do-while"}, 0},
	{"��� ������ �������� break � ���� ���������� �����?", {"��������� ������ ��������� ����", "��������� ��� �����", "���������� ���������� �����"}, 0},
	{"����� ���� ����� ������������ ��� ������������ ����������, ���� ���� �� ������� ����������?", {"while (true)", "for ( ; ; )", "��� ��������"}, 2},

 };

int currentQuestionIndex = 0;  // ������ �������� �������
int score = 0;  // ���� ���������� �������

void __fastcall TForm12::ShowQuestion(int index) {
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

__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm12::Button1Click(TObject *Sender)
{
	if (RadioGroup1->ItemIndex == questions[currentQuestionIndex].correctAnswerIndex) {
		score++;
	}
	currentQuestionIndex++;
	ShowQuestion(currentQuestionIndex);
}

void __fastcall TForm12::FormShow(TObject *Sender)
{
	ShowQuestion(0);
}
//---------------------------------------------------------------------------
