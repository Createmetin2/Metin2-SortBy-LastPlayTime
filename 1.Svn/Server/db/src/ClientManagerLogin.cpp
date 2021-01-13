///Add
#if defined(BL_SORT_LASTPLAYTIME)
static DWORD GetLastPlayTime(DWORD id)
{
	static char query[64];
	snprintf(query, sizeof(query), "SELECT UNIX_TIMESTAMP(last_play) FROM player%s WHERE id=%u", GetTablePostfix(), id);
	std::unique_ptr<SQLMsg> pMsg(CDBManager::instance().DirectQuery(query, SQL_PLAYER));
	
	SQLResult* sResult = pMsg->Get();
	if (sResult && sResult->uiNumRows && sResult->pSQLResult) {
		MYSQL_ROW row = mysql_fetch_row(sResult->pSQLResult);
		if (row[0] && *row[0])
			return strtoul(row[0], NULL, 10);
	}

	return 0;
}
#endif

//Find
				TPlayerTable * pt = pc ? pc->Get(false) : NULL;
				
///Add
#if defined(BL_SORT_LASTPLAYTIME)
				pkTab->players[j].dwLastPlayTime = GetLastPlayTime(player_id);
#endif