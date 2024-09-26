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
    ComboBox1->Items->Add("Красный");
    ComboBox1->Items->Add("Зелёный");
    ComboBox1->Items->Add("Синий");
}
//---------------------------------------------------------------------------

void __fastcall TForm10::AddButtonClick(TObject *Sender)
{
    // Создаем новый Label
    TLabel *NewLabel = new TLabel(this);
    NewLabel->Parent = this;
    NewLabel->Caption = Edit1->Text;
    NewLabel->Left = 10;
	NewLabel->Top = 100 + (LabelList.size() * 30); // Располагаем метки по вертикали
	LabelList.push_back(NewLabel); // Добавляем метку в список
    UpdateMemoStats();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::DeleteButtonClick(TObject *Sender)
{
    if (!LabelList.empty()) {
        TLabel *LastLabel = LabelList.back();
        delete LastLabel; // Удаляем последнюю метку
        LabelList.pop_back();
	}
	UpdateMemoStats();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::ComboBox1Change(TObject *Sender)
{
    TColor SelectedColor;

    // Определяем выбранный цвет
    if (ComboBox1->Text == "Красный") {
        SelectedColor = clRed;
    }
    else if (ComboBox1->Text == "Зелёный") {
        SelectedColor = clGreen;
    }
    else if (ComboBox1->Text == "Синий") {
        SelectedColor = clBlue;
    }

    // Меняем цвет всех меток
    for (TLabel *Label : LabelList) {
        Label->Font->Color = SelectedColor;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::UpdateMemoStats()
{
    // Получаем текст из Edit1
    String inputText = Edit1->Text;

    // Создаем TStringList для хранения слов
    TStringList *wordList = new TStringList();
    wordList->Delimiter = ' ';  // Устанавливаем пробел в качестве разделителя
    wordList->StrictDelimiter = true;  // Игнорируем любые другие разделители (например, запятые)
    wordList->DelimitedText = inputText;  // Разделяем строку на слова

    // Выводим количество слов
    Memo1->Lines->Clear();
    Memo1->Lines->Add("Количество слов: " + IntToStr(wordList->Count));  // Используем Count для получения количества элементов

    // Реверсируем порядок слов
    Memo1->Lines->Add("Слова в обратном порядке:");
    for (int i = wordList->Count - 1; i >= 0; i--) {
        Memo1->Lines->Add(wordList->Strings[i]);  // Добавляем слова в обратном порядке
    }

    // Очищаем и освобождаем память
//    delete wordList;
}
