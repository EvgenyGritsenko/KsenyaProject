object Form2: TForm2
  Left = 0
  Top = 0
  Width = 600
  Height = 792
  Align = alClient
  BiDiMode = bdLeftToRight
  BorderStyle = bsDialog
  Caption = #1058#1077#1086#1088#1080#1103
  Color = clBtnFace
  Constraints.MaxWidth = 600
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clDarkgray
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  ParentBiDiMode = False
  Position = poDefault
  TextHeight = 15
  object Label2: TLabel
    Left = 160
    Top = 24
    Width = 240
    Height = 53
    Caption = #1050#1086#1085#1089#1087#1077#1082#1090' 1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clDarkorchid
    Font.Height = -40
    Font.Name = 'JetBrains Mono NL'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 8
    Top = 96
    Width = 489
    Height = 140
    Caption = 
      #1042' '#1103#1079#1099#1082#1077' C++ '#1089#1090#1088#1086#1082#1080' '#1084#1086#1075#1091#1090' '#1073#1099#1090#1100' '#1087#1088#1077#1076#1089#1090#1072#1074#1083#1077#1085#1099' '#1076#1074#1091#1084#1103' '#1086#1089#1085#1086#1074#1085#1099#1084#1080' '#1089#1087#1086#1089#1086 +
      #1073#1072#1084#1080':'#13#10'1. '#1052#1072#1089#1089#1080#1074' '#1089#1080#1084#1074#1086#1083#1086#1074': '#1069#1090#1086' '#1084#1072#1089#1089#1080#1074' '#1090#1080#1087#1072' char, '#1082#1086#1090#1086#1088#1099#1081' '#1079#1072#1074#1077#1088#1096#1072 +
      #1077#1090#1089#1103' '#1085#1091#1083#1077#1074#1099#1084' '#1089#1080#1084#1074#1086#1083#1086#1084' (\0). '#1069#1090#1086' '#1087#1086#1076#1093#1086#1076' '#1080#1079' '#1103#1079#1099#1082#1072' C.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Label3: TLabel
    Left = 8
    Top = 303
    Width = 537
    Height = 114
    Caption = 
      '2. '#1050#1083#1072#1089#1089' std::string: '#1057#1090#1088#1086#1082#1080' '#1074' C++ '#1095#1072#1089#1090#1086' '#1080#1089#1087#1086#1083#1100#1079#1091#1102#1090#1089#1103' '#1095#1077#1088#1077#1079' '#1073#1080#1073#1083 +
      #1080#1086#1090#1077#1095#1085#1099#1081' '#1082#1083#1072#1089#1089' std::string, '#1082#1086#1090#1086#1088#1099#1081' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1103#1077#1090' '#1073#1086#1083#1100#1096#1077' '#1074#1086#1079#1084#1086#1078#1085 +
      #1086#1089#1090#1077#1081' '#1076#1083#1103' '#1088#1072#1073#1086#1090#1099' '#1089' '#1090#1077#1082#1089#1090#1086#1084' '#1080' '#1091#1087#1088#1072#1074#1083#1103#1077#1090' '#1087#1072#1084#1103#1090#1100#1102' '#1072#1074#1090#1086#1084#1072#1090#1080#1095#1077#1089#1082#1080'.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Label4: TLabel
    Left = 8
    Top = 495
    Width = 414
    Height = 28
    Caption = #1054#1089#1085#1086#1074#1085#1099#1077' '#1092#1091#1085#1082#1094#1080#1080' '#1076#1083#1103' '#1088#1072#1073#1086#1090#1099' '#1089#1086' '#1089#1090#1088#1086#1082#1072#1084#1080':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowFrame
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Memo1: TMemo
    Left = 8
    Top = 248
    Width = 531
    Height = 41
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clDarkorchid
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'char str[] = "Hello";')
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 8
    Top = 423
    Width = 531
    Height = 34
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clDarkorchid
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'std::string str = "Hello";')
    ParentFont = False
    ReadOnly = True
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 8
    Top = 543
    Width = 531
    Height = 178
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clDarkorchid
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      '- length() '#8211' '#1074#1086#1079#1074#1088#1072#1097#1072#1077#1090' '#1076#1083#1080#1085#1091' '#1089#1090#1088#1086#1082#1080'.'
      '- append() '#8211' '#1076#1086#1073#1072#1074#1083#1103#1077#1090' '#1089#1090#1088#1086#1082#1091' '#1074' '#1082#1086#1085#1077#1094' '#1076#1088#1091#1075#1086#1081' '#1089#1090#1088#1086#1082#1080'.'
      '- substr() '#8211' '#1074#1086#1079#1074#1088#1072#1097#1072#1077#1090' '#1087#1086#1076#1089#1090#1088#1086#1082#1091' '#1080#1079' '#1089#1090#1088#1086#1082#1080'.'
      '- find() '#8211' '#1085#1072#1093#1086#1076#1080#1090' '#1087#1086#1076#1089#1090#1088#1086#1082#1091' '#1074' '#1089#1090#1088#1086#1082#1077'.'
      '- replace() '#8211' '#1079#1072#1084#1077#1085#1103#1077#1090' '#1095#1072#1089#1090#1100' '#1089#1090#1088#1086#1082#1080' '#1085#1072' '#1076#1088#1091#1075#1091#1102' '#1089#1090#1088#1086#1082#1091'.')
    ParentFont = False
    ReadOnly = True
    TabOrder = 2
  end
end
