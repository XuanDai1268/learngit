
// LearnGit.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLearnGitApp:
// �йش����ʵ�֣������ LearnGit.cpp
//

class CLearnGitApp : public CWinApp
{
public:
	CLearnGitApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLearnGitApp theApp;