//Find
	_send_bonus_info(ch);
	
///Add
#if defined(BL_SORT_LASTPLAYTIME)
	std::unique_ptr<SQLMsg> play(DBManager::instance().DirectQuery("UPDATE player%s SET last_play = NOW() WHERE name = '%s'", get_table_postfix(), ch->GetName()));
#endif