
// ciratefi.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CciratefiApp:
// �аѾ\��@�����O�� ciratefi.cpp
//

class CciratefiApp : public CWinAppEx
{
public:
	CciratefiApp();
	static void ShowMatOnPicture(cv::Mat& image, CDialog *dlg, int pID);

// �мg
	public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CciratefiApp theApp;