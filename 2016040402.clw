; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRightFrame
LastTemplate=CFrameWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "2016040402.h"
LastPage=0

ClassCount=13
Class1=CMy2016040402App
Class2=CMy2016040402Doc
Class3=CMy2016040402View
Class4=CMainFrame

ResourceCount=8
Resource1=IDD_DIALOG1
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CLeftPane
Resource3=IDD_DRAW1
Class7=Cdraw1
Resource4=IDD_CONTROL1
Class8=CControl1
Resource5=IDD_LEFTPANE_FORMVIEW
Resource6=IDD_DRAW2
Class9=CDraw2
Resource7=IDD_ABOUTBOX
Class10=CControl2
Class11=CSplitter1
Class12=CSplitter2
Class13=CRightFrame
Resource8=IDD_CONTROL2

[CLS:CMy2016040402App]
Type=0
HeaderFile=2016040402.h
ImplementationFile=2016040402.cpp
Filter=N

[CLS:CMy2016040402Doc]
Type=0
HeaderFile=2016040402Doc.h
ImplementationFile=2016040402Doc.cpp
Filter=N

[CLS:CMy2016040402View]
Type=0
HeaderFile=2016040402View.h
ImplementationFile=2016040402View.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=2016040402.cpp
ImplementationFile=2016040402.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_LEFTPANE_FORMVIEW]
Type=1
Class=CLeftPane
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_LEFTPANE_TREE,SysTreeView32,1350631431

[CLS:CLeftPane]
Type=0
HeaderFile=LeftPane.h
ImplementationFile=LeftPane.cpp
BaseClass=CFormView
Filter=D
LastObject=IDC_LEFTPANE_TREE
VirtualFilter=VWC

[DLG:IDD_DRAW1]
Type=1
Class=Cdraw1
ControlCount=1
Control1=IDC_RADIO1,button,1342177289

[CLS:Cdraw1]
Type=0
HeaderFile=draw1.h
ImplementationFile=draw1.cpp
BaseClass=CFormView
Filter=D
LastObject=Cdraw1

[DLG:IDD_CONTROL1]
Type=1
Class=CControl1
ControlCount=3
Control1=IDC_STATIC,static,1342308352
Control2=IDC_Control1_STATIC,static,1342308352
Control3=IDC_CHECK1,button,1342242819

[CLS:CControl1]
Type=0
HeaderFile=Control1.h
ImplementationFile=Control1.cpp
BaseClass=CFormView
Filter=D

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[DLG:IDD_DRAW2]
Type=1
Class=CDraw2
ControlCount=1
Control1=IDC_CHECK1,button,1342242819

[CLS:CDraw2]
Type=0
HeaderFile=Draw2.h
ImplementationFile=Draw2.cpp
BaseClass=CFormView
Filter=D

[DLG:IDD_CONTROL2]
Type=1
Class=CControl2
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_Control2_STATIC,static,1342308352

[CLS:CControl2]
Type=0
HeaderFile=Control2.h
ImplementationFile=Control2.cpp
BaseClass=CFormView
Filter=D

[CLS:CSplitter1]
Type=0
HeaderFile=Splitter1.h
ImplementationFile=Splitter1.cpp
BaseClass=CView
Filter=C
VirtualFilter=VWC

[CLS:CSplitter2]
Type=0
HeaderFile=Splitter2.h
ImplementationFile=Splitter2.cpp
BaseClass=CView
Filter=C
VirtualFilter=VWC

[CLS:CRightFrame]
Type=0
HeaderFile=RightFrame.h
ImplementationFile=RightFrame.cpp
BaseClass=CFrameWnd
Filter=T
VirtualFilter=fWC

