//-------------------------------------------------------------
//	NewXレンダラー
//	Copyright (C) 2019 by 津田N
//　Description: モデル(nx)　レンダリングエンジン
//  License: CDDL 1.0(http://opensource.org/lIcenses/CDDL-1.0)
//--------------------------------------------------------------

#include "CLight.h"

CLightManager* CLightManager::m_pInstance = nullptr;

void CLightManager::Create()
{
	// 複数生成を防ぐ
	if (m_pInstance != nullptr)
	{
		MessageBox(NULL, L"CLightManagerが複数生成されました。",
			L"エラー", MB_OK);
		return;
	}

	m_pInstance = new CLightManager;
}

CLightManager* CLightManager::GetInstance()
{
	if (m_pInstance == NULL)
	{
		MessageBox(NULL, L"CLightManagerクラスが生成されていません", L"エラー", MB_OK);
		return NULL;
	}
	return m_pInstance;
}

void CLightManager::Destory()
{
	if (m_pInstance != nullptr)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}