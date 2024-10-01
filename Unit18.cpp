//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <algorithm>

#include "Unit18.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm18 *Form18;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                std::swap(arr[j], arr[j+1]);
}
//---------------------------------------------------------------------------
__fastcall TForm18::TForm18(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Button1Click(TObject *Sender)
{
    TStringList *list = new TStringList();
    list->Text = Memo1->Text;
    int n = list->Count;
    int *arr = new int[n];

    // ����������� ���� � ������ �����
    for(int i = 0; i < n; i++) {
        arr[i] = StrToInt(list->Strings[i]);
    }

    // ��������� ������
    BubbleSort(arr, n);

    // ������� ��������������� ������
    Memo2->Clear();
    for(int i = 0; i < n; i++) {
        Memo2->Lines->Add(IntToStr(arr[i]));
    }

    delete[] arr;
    delete list;
}
//---------------------------------------------------------------------------
