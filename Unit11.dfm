object Form11: TForm11
  Left = 0
  Top = 0
  Caption = #1064#1087#1072#1088#1075#1072#1083#1082#1080' '#1087#1086' '#1088#1072#1073#1086#1090#1077' '#1089#1086' '#1089#1090#1088#1086#1082#1072#1084#1080' '#1074' C++'
  ClientHeight = 651
  ClientWidth = 1123
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -20
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 28
  object Memo1: TMemo
    Left = 24
    Top = 8
    Width = 281
    Height = 81
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'std::cout << str.length();  // 5')
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 24
    Top = 112
    Width = 313
    Height = 89
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "";'
      'std::cout << str.empty();  // true')
    ParentFont = False
    ReadOnly = True
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 24
    Top = 224
    Width = 313
    Height = 121
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'str.append(" World");'
      'std::cout << str;  // "Hello World"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 2
  end
  object Memo4: TMemo
    Left = 313
    Top = 8
    Width = 385
    Height = 81
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello World";'
      'std::size_t pos = str.find("World");  // 6')
    ParentFont = False
    ReadOnly = True
    TabOrder = 3
  end
  object Memo5: TMemo
    Left = 24
    Top = 384
    Width = 313
    Height = 105
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'str += " World";'
      'std::cout << str;  // "Hello World"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 4
  end
  object Memo6: TMemo
    Left = 360
    Top = 224
    Width = 369
    Height = 121
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello World";'
      'str.replace(6, 5, "C++");'
      'std::cout << str;  // "Hello C++"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 5
  end
  object Memo7: TMemo
    Left = 24
    Top = 528
    Width = 401
    Height = 73
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello World";'
      'std::string sub = str.substr(0, 5);  // "Hello"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 6
  end
  object Memo8: TMemo
    Left = 360
    Top = 112
    Width = 313
    Height = 89
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "";'
      'std::cout << str.empty();  // true')
    ParentFont = False
    ReadOnly = True
    TabOrder = 7
  end
  object Memo9: TMemo
    Left = 343
    Top = 384
    Width = 401
    Height = 105
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello World";'
      'str.insert(6, "beautiful ");'
      'std::cout << str;  // "Hello beautiful World"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 8
  end
  object Memo10: TMemo
    Left = 482
    Top = 528
    Width = 401
    Height = 73
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'const char* c_str = str.c_str();')
    ParentFont = False
    ReadOnly = True
    TabOrder = 9
  end
  object Memo11: TMemo
    Left = 758
    Top = 224
    Width = 369
    Height = 121
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello World";'
      'str.erase(5, 6);  // '#1059#1076#1072#1083#1103#1077#1084' " World"'
      'std::cout << str;  // "Hello"')
    ParentFont = False
    ReadOnly = True
    TabOrder = 10
  end
  object Memo12: TMemo
    Left = 720
    Top = 8
    Width = 401
    Height = 105
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'str.clear();'
      'std::cout << str.empty();  // true')
    ParentFont = False
    ReadOnly = True
    TabOrder = 11
  end
  object Memo13: TMemo
    Left = 720
    Top = 135
    Width = 313
    Height = 66
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'char ch = str.at(1);  // '#39'e'#39)
    ParentFont = False
    ReadOnly = True
    TabOrder = 12
  end
  object Memo14: TMemo
    Left = 758
    Top = 384
    Width = 363
    Height = 105
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";'
      'char first = str.front();  // '#39'H'#39
      'char last = str.back();    // '#39'o'#39)
    ParentFont = False
    ReadOnly = True
    TabOrder = 13
  end
end
