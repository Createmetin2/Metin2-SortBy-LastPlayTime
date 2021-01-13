//Find
		case ACCOUNT_CHARACTER_SLOT_HAIR:
			return rkSimplePlayerInfo.wHairPart;
			break;
			
///Add
#if defined(BL_SORT_LASTPLAYTIME)
		case ACCOUNT_CHARACTER_SLOT_LAST_PLAYTIME:
			return rkSimplePlayerInfo.dwLastPlayTime;
			break;
#endif