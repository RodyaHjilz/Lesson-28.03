
// Lesson 28.03.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CLesson2803App:
// Сведения о реализации этого класса: Lesson 28.03.cpp
//

class CLesson2803App : public CWinApp
{
public:
	CLesson2803App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CLesson2803App theApp;
