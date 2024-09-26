//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
    ComboBox1->Items->Add("�������");
    ComboBox1->Items->Add("������");
    ComboBox1->Items->Add("�����");
}
//---------------------------------------------------------------------------

void __fastcall TForm10::AddButtonClick(TObject *Sender)
{
    // ������� ����� Label
    TLabel *NewLabel = new TLabel(this);
    NewLabel->Parent = this;
    NewLabel->Caption = Edit1->Text;
    NewLabel->Left = 10;
	NewLabel->Top = 100 + (LabelList.size() * 30); // ����������� ����� �� ���������
	LabelList.push_back(NewLabel); // ��������� ����� � ������
    UpdateMemoStats();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::DeleteButtonClick(TObject *Sender)
{
    if (!LabelList.empty()) {
        TLabel *LastLabel = LabelList.back();
        delete LastLabel; // ������� ��������� �����
        LabelList.pop_back();
	}
	UpdateMemoStats();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::ComboBox1Change(TObject *Sender)
{
    TColor SelectedColor;

    // ���������� ��������� ����
    if (ComboBox1->Text == "�������") {
        SelectedColor = clRed;
    }
    else if (ComboBox1->Text == "������") {
        SelectedColor = clGreen;
    }
    else if (ComboBox1->Text == "�����") {
        SelectedColor = clBlue;
    }

    // ������ ���� ���� �����
    for (TLabel *Label : LabelList) {
        Label->Font->Color = SelectedColor;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::UpdateMemoStats()
{
    // �������� ����� �� Edit1
    String inputText = Edit1->Text;

    // ������� TStringList ��� �������� ����
    TStringList *wordList = new TStringList();
    wordList->Delimiter = ' ';  // ������������� ������ � �������� �����������
    wordList->StrictDelimiter = true;  // ���������� ����� ������ ����������� (��������, �������)
    wordList->DelimitedText = inputText;  // ��������� ������ �� �����

    // ������� ���������� ����
    Memo1->Lines->Clear();
    Memo1->Lines->Add("���������� ����: " + IntToStr(wordList->Count));  // ���������� Count ��� ��������� ���������� ���������

    // ����������� ������� ����
    Memo1->Lines->Add("����� � �������� �������:");
    for (int i = wordList->Count - 1; i >= 0; i--) {
        Memo1->Lines->Add(wordList->Strings[i]);  // ��������� ����� � �������� �������
    }

    // ������� � ����������� ������
//    delete wordList;
}
