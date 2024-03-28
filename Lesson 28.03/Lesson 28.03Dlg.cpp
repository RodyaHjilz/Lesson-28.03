
// Lesson 28.03Dlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "Lesson 28.03.h"
#include "Lesson 28.03Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Диалоговое окно CLesson2803Dlg



CLesson2803Dlg::CLesson2803Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LESSON_2803_DIALOG, pParent)
	, Chislo(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLesson2803Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Chislo);
}

BEGIN_MESSAGE_MAP(CLesson2803Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CLesson2803Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLesson2803Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CLesson2803Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CLesson2803Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CLesson2803Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CLesson2803Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CLesson2803Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CLesson2803Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CLesson2803Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CLesson2803Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CLesson2803Dlg::OnBnClickedButton11)
END_MESSAGE_MAP()


// Обработчики сообщений CLesson2803Dlg

BOOL CLesson2803Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CLesson2803Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CLesson2803Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CLesson2803Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CLesson2803Dlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	Chislo += _T("1");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton2()
{
	UpdateData(TRUE);
	Chislo += _T("2");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton3()
{
	UpdateData(TRUE);
	Chislo += _T("3");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton4()
{
	UpdateData(TRUE);
	Chislo += _T("4");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton5()
{
	UpdateData(TRUE);
	Chislo += _T("5");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton6()
{
	UpdateData(TRUE);
	Chislo += _T("6");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton7()
{
	UpdateData(TRUE);
	Chislo += _T("7");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton8()
{
	UpdateData(TRUE);
	Chislo += _T("8");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton9()
{
	UpdateData(TRUE);
	Chislo += _T("9");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton10()
{
	UpdateData(TRUE);
	Chislo += _T("0");
	UpdateData(FALSE);
}


void CLesson2803Dlg::OnBnClickedButton11()
{
	MessageBoxW(Chislo);
}
