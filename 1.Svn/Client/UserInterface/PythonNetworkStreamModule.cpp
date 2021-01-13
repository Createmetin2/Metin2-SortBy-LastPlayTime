//Find
	PyModule_AddIntConstant(poModule, "ACCOUNT_CHARACTER_SLOT_HAIR", CPythonNetworkStream::ACCOUNT_CHARACTER_SLOT_HAIR);
	
///Add
#if defined(BL_SORT_LASTPLAYTIME)
	PyModule_AddIntConstant(poModule, "ACCOUNT_CHARACTER_SLOT_LAST_PLAYTIME", CPythonNetworkStream::ACCOUNT_CHARACTER_SLOT_LAST_PLAYTIME);
#endif