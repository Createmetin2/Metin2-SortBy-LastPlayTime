//Find in bool CPythonNetworkStream::SendEnterGame()
	if (!SendSequence())
		return false;
	
///Add
#if defined(BL_SORT_LASTPLAYTIME)
	m_akSimplePlayerInfo[m_dwSelectedCharacterIndex].dwLastPlayTime = static_cast<DWORD>(time(0));
#endif