// RegColection.h: interface for the CAppRegs class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REGCOLECTION_H__9368F0E4_571F_4BAD_87B0_93232C91E80E__INCLUDED_)
#define AFX_REGCOLECTION_H__9368F0E4_571F_4BAD_87B0_93232C91E80E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxtempl.h>

#define MAX_PASSWORD_SIZE 41

//#define Column constant
#define DOWNLOAD_CATEGORY_COLUMN	0
#define OTHER_CATEGORY_COLUMN		1

#define COLUMN_STATUS			0
#define COLUMN_RESUME			1
#define COLUMN_NAME				2
#define COLUMN_SIZE				3
#define COLUMN_COMPLETEDSIZE	4
#define COLUMN_PERCENTAGE		5
#define COLUMN_COSTEDTIME		6
#define COLUMN_LEFTTIME			7
#define COLUMN_SPEED			8
#define COLUMN_BLOCKS			9
#define COLUMN_RETRIES			10
#define COLUMN_URL				11
#define COLUMN_COMMENT			12
#define COLUMN_CREATETIME		13
#define COLUMN_COMPLETEDTIME	14

#define INT_N_R_		-1
#define STR_N_R_		NULL
#define BYTE_N_R_		(BYTE*)NULL

//Assign the range of Index
//define IDs for each InfoBase
#define REG_GENERAL_ID		0
#define REG_PROXY_ID		1

//define BASE
#define REG_FLAG_BASE										(1 << 8)
#define REG_FLAG_BASE_MASK									~((ULONG)REG_FLAG_BASE - 1)

//define General base
#define REG_FLAG_GENERAL_BASE								(REG_FLAG_BASE << 0)

//General section "Flags"
#define REG_FLAG_GENERAL_FLAGS								(REG_FLAG_GENERAL_BASE << 0)
#define REG_FLAG_GENERAL_START_MAINFRAME_MIIMIZED			REG_FLAG_GENERAL_FLAGS + 0
#define REG_FLAG_GENERAL_STOP_DOWNLOAD_EVERN_NON_RESUMABLE	REG_FLAG_GENERAL_FLAGS + 1
#define REG_FLAG_GENERAL_ERROR_STOP							REG_FLAG_GENERAL_FLAGS + 2
#define REG_FLAG_GENERAL_PROMPT_WHEN_DROP					REG_FLAG_GENERAL_FLAGS + 3
#define REG_FLAG_GENERAL_AUTO_SAVE							REG_FLAG_GENERAL_FLAGS + 4
#define REG_FLAG_GENERAL_ENABLESOUND						REG_FLAG_GENERAL_FLAGS + 7
#define REG_FLAG_GENERAL_GET_FILE_DATE_FROM_SERVER			REG_FLAG_GENERAL_FLAGS + 8
#define REG_FLAG_GENERAL_START_DOWNLOAD_ON_STARTUP			REG_FLAG_GENERAL_FLAGS + 9
#define REG_FLAG_GENERAL_USE_FILE_EXT						REG_FLAG_GENERAL_FLAGS + 10
#define REG_FLAG_GENERAL_ALWAYS_OBEY_SPEED_LIMIT			REG_FLAG_GENERAL_FLAGS + 11
#define REG_FLAG_GENERAL_ALWAYS_RETRY						REG_FLAG_GENERAL_FLAGS + 12
#define REG_FLAG_GENERAL_FILE_SIZE_IN_BYTES					REG_FLAG_GENERAL_FLAGS + 13
#define REG_FLAG_GENERAL_ALL_JOBS_USE_DEFAULT_PROXY			REG_FLAG_GENERAL_FLAGS + 14
#define REG_FLAG_GENERAL_MOVESOMEFILETOSTORAGE				REG_FLAG_GENERAL_FLAGS + 16
#define REG_FLAG_GENERAL_LOG_FOR_EACH_DOWNLOADED_FILE		REG_FLAG_GENERAL_FLAGS + 17
#define REG_FLAG_GENERAL_SHOWSUBCATEGORYINALPHAORDER		REG_FLAG_GENERAL_FLAGS + 18
#define REG_FLAG_GENERAL_OPENDOWNLOADEDFILE					REG_FLAG_GENERAL_FLAGS + 19
#define REG_FLAG_GENERAL_OPENDIALOGWHENDOWNLOADSUCCEED		REG_FLAG_GENERAL_FLAGS + 20
#define REG_FLAG_GENERAL_OPENDIALOGWHENDOWNLOADFAILED		REG_FLAG_GENERAL_FLAGS + 21
#define REG_FLAG_GENERAL_OPENDIALOGWHENDOWNLOADALL			REG_FLAG_GENERAL_FLAGS + 22


//General section "Flags1"
#define REG_FLAG_GENERAL_EXT_FLAGS							(REG_FLAG_GENERAL_BASE << 1)
#define REG_FLAG_GENERAL_EXT_BACKUP_EVERY_DAY				REG_FLAG_GENERAL_EXT_FLAGS + 0
#define REG_FLAG_GENERAL_EXT_ENABLE_COOKIE					REG_FLAG_GENERAL_EXT_FLAGS + 1
#define REG_FLAG_GENERAL_EXT_DROPZONESHOWFLOWCHART			REG_FLAG_GENERAL_EXT_FLAGS + 2
#define REG_FLAG_GENERAL_EXT_ENABLEMIRROWS					REG_FLAG_GENERAL_EXT_FLAGS + 4
#define REG_FLAG_GENERAL_EXT_AUTOSEARCHMIRRORSITE			REG_FLAG_GENERAL_EXT_FLAGS + 5
#define REG_FLAG_GENERAL_EXT_AUTOSELECTMIRRORSITE			REG_FLAG_GENERAL_EXT_FLAGS + 6
#define REG_FLAG_GENERAL_EXT_AUTOCALCADDMIRROR				REG_FLAG_GENERAL_EXT_FLAGS + 7
#define REG_FLAG_GENERAL_EXT_ENABLE_MIRROE_AND_FTP_SEARCH	REG_FLAG_GENERAL_EXT_FLAGS + 8
#define REG_FLAG_GENERAL_EXT_STOP_AFTER_99_NO_DATA			REG_FLAG_GENERAL_EXT_FLAGS + 9
#define REG_FLAG_GENERAL_EXT_HIDEWINDOWWHILEMINIMIZE		REG_FLAG_GENERAL_EXT_FLAGS + 10
#define REG_FLAG_GENERAL_EXT_CONFIRMQUITWHILEOPENMULIPLEWINDOWS	REG_FLAG_GENERAL_EXT_FLAGS + 11
#define REG_FLAG_GENERAL_EXT_CONFIRMQUITWHILEDOWNLOADING	REG_FLAG_GENERAL_EXT_FLAGS + 12
#define REG_FLAG_GENERAL_EXT_CONFIRMDOWNLOADUSEIEMENU		REG_FLAG_GENERAL_EXT_FLAGS + 13
#define REG_FLAG_GENERAL_EXT_CONFIRMQUITWHILEADDMUTIPLEJOBS	REG_FLAG_GENERAL_EXT_FLAGS + 14

//General section "Monitor Flags"
#define REG_FLAG_MONITOR_FLAGS								(REG_FLAG_GENERAL_BASE << 2)
#define REG_FLAG_MONITOR_CLIPBOARDMONITOR					REG_FLAG_MONITOR_FLAGS + 0
#define REG_FLAG_MONITOR_CLIPBOARDCONFIRM					REG_FLAG_MONITOR_FLAGS + 1
#define REG_FLAG_MONITOR_BROWSERNETSCAPE					REG_FLAG_MONITOR_FLAGS + 2
#define REG_FLAG_MONITOR_BROWSERIE							REG_FLAG_MONITOR_FLAGS + 3
#define REG_FLAG_MONITOR_BROWSERCONFIRM						REG_FLAG_MONITOR_FLAGS + 4
#define REG_FLAG_MONITOR_BROWSERUSEALT						REG_FLAG_MONITOR_FLAGS + 5
#define REG_FLAG_MONITOR_BROWSEROPENCANCELLEDURLS			REG_FLAG_MONITOR_FLAGS + 6
#define REG_FLAG_MONITOR_BROWSERFILLCOMMENTWITHCLIPBOARDCONTENT		REG_FLAG_MONITOR_FLAGS + 7
#define REG_FLAG_MONITOR_BROWSERIEMETHOD					REG_FLAG_MONITOR_FLAGS + 8
#define REG_FLAG_MONITOR_BROWSERWILDMATCH					REG_FLAG_MONITOR_FLAGS + 9

//General section "Dialup Flags"
#define REG_FLAG_DIALUP_FLAGS								(REG_FLAG_GENERAL_BASE << 3)
#define REG_FLAG_DIALUP_REDIALIFDISCONNECTED				REG_FLAG_DIALUP_FLAGS + 0
#define REG_FLAG_DIALUP_HANDUPWHENDONE						REG_FLAG_DIALUP_FLAGS + 1
#define REG_FLAG_DIALUP_QUITAFTERFINISHEDDOWNLOAD			REG_FLAG_DIALUP_FLAGS + 3

//General section "File Manager"
#define REG_FLAG_FILEMANAGER_FLAGS							(REG_FLAG_GENERAL_BASE << 4)
#define REG_FLAG_FILEMANAGER_SCANVIRUSWHENDOWNLOADED		REG_FLAG_FILEMANAGER_FLAGS + 31

//Special 2 bits mask for General Section "Double Click"
#define REG_DOUBLECLICK_DOWNLOADINGORREADYITEM				0
#define REG_DOUBLECLICK_DOWNLOADEDITEM						2
#define REG_DOUBLECLICK_FAILEDITEM							4


//Special 4 bits mask for General Section "File Manager"
#define REG_FILEMANAGER_MOVEDOWNLOADEDFILES					0
#define REG_FILEMANAGER_DESTINATIONEXISTS					8
#define REG_FILEMANAGER_MOVETOSTORAGE						12

//General section "Schedule Flags"
#define REG_FLAG_SCHEDULE_FLAGS								(REG_FLAG_GENERAL_BASE << 5)
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATMONDAY			REG_FLAG_SCHEDULE_FLAGS + 0
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATTUESDAY			REG_FLAG_SCHEDULE_FLAGS + 1
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATWEDNESDAY			REG_FLAG_SCHEDULE_FLAGS + 2
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATTHURSDAY			REG_FLAG_SCHEDULE_FLAGS + 3
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATFRIDAY			REG_FLAG_SCHEDULE_FLAGS + 4
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATSATURDAY			REG_FLAG_SCHEDULE_FLAGS + 5
#define REG_FLAG_SCHEDULE_ENABLEDOWNLOADATSUNDAY			REG_FLAG_SCHEDULE_FLAGS + 6
#define REG_FLAG_SCHEDULE_ENABLESTOPTIMER					REG_FLAG_SCHEDULE_FLAGS + 15



//#define Index base for each Infobase.

#define REG_INDEX_WIDTH_EACH_BASE	1000
#define REG_INDEX_BASE				0

#define REG_INDEX_GENERAL_BASE			REG_INDEX_BASE					+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_COLOR_BASE			REG_INDEX_GENERAL_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_CONNECTION_BASE		REG_INDEX_COLOR_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_DETAILSTATUS_BASE		REG_INDEX_CONNECTION_BASE		+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_DIALUP_BASE			REG_INDEX_DETAILSTATUS_BASE		+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_DOWNLOADDEFAULT_BASE	REG_INDEX_DIALUP_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_DROPZONE_BASE			REG_INDEX_DOWNLOADDEFAULT_BASE	+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_FIND_BASE				REG_INDEX_DROPZONE_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_LOGIN_BASE			REG_INDEX_FIND_BASE				+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_MAINFRAME_BASE		REG_INDEX_LOGIN_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_MAINLISTSTATUS_BASE	REG_INDEX_MAINFRAME_BASE		+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_MAINMENU_BASE			REG_INDEX_MAINLISTSTATUS_BASE	+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_MIRRORS_BASE			REG_INDEX_MAINMENU_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_PROTOCOL_BASE			REG_INDEX_MIRRORS_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_RECENTFILELIST_BASE	REG_INDEX_PROTOCOL_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_SELFOLDER_BASE		REG_INDEX_RECENTFILELIST_BASE	+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_SELURL_BASE			REG_INDEX_SELFOLDER_BASE		+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_SOUND_BASE			REG_INDEX_SELURL_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_TOOLBAR_BASE			REG_INDEX_SOUND_BASE			+ REG_INDEX_WIDTH_EACH_BASE
#define REG_INDEX_PROXY_BASE			REG_INDEX_TOOLBAR_BASE			+ REG_INDEX_WIDTH_EACH_BASE



//define Index for General SECTION
#define REG_GENERAL_APPPATH				REG_INDEX_GENERAL_BASE + 0
#define REG_GENERAL_AUTOSAVETIME		REG_INDEX_GENERAL_BASE + 1
#define REG_GENERAL_BACKDATE			REG_INDEX_GENERAL_BASE + 2
#define REG_GENERAL_BLOCKSIZE			REG_INDEX_GENERAL_BASE + 3
#define REG_GENERAL_DOUBLECLICK			REG_INDEX_GENERAL_BASE + 4
#define REG_GENERAL_FILEMANAGER			REG_INDEX_GENERAL_BASE + 5
#define REG_GENERAL_FLAGS				REG_INDEX_GENERAL_BASE + 6
#define REG_GENERAL_FLAGS1				REG_INDEX_GENERAL_BASE + 7
#define REG_GENERAL_FTPSEARCHMAXHIT		REG_INDEX_GENERAL_BASE + 8
#define REG_GENERAL_FTPSEARCHMINSIZE	REG_INDEX_GENERAL_BASE + 9
#define REG_GENERAL_LANGUAGEEX			REG_INDEX_GENERAL_BASE + 10
#define REG_GENERAL_MONITORFLAGS		REG_INDEX_GENERAL_BASE + 11
#define REG_GENERAL_MONITORTYPE			REG_INDEX_GENERAL_BASE + 12
#define REG_GENERAL_SCHEDULEFLAGS		REG_INDEX_GENERAL_BASE + 13
#define REG_GENERAL_SCHEDULESTARTTIME	REG_INDEX_GENERAL_BASE + 14
#define REG_GENERAL_SCHEDULESTOPTIME	REG_INDEX_GENERAL_BASE + 15
#define REG_GENERAL_VERSION				REG_INDEX_GENERAL_BASE + 16
#define REG_GENERAL_VIRUSSCANTYPE		REG_INDEX_GENERAL_BASE + 17
#define REG_GENERAL_VIRUSSCANNER		REG_INDEX_GENERAL_BASE + 18
#define REG_GENERAL_VIRUSSCANNERARGS	REG_INDEX_GENERAL_BASE + 19
#define REG_GENERAL_OPENTYPES			REG_INDEX_GENERAL_BASE + 20
#define REG_GENERAL_MINIMIZEWHENX		REG_INDEX_GENERAL_BASE + 21


//DEFINE INDEX FOR COLOR SECTION
#define REG_COLOR_BLOCKBACK				REG_INDEX_COLOR_BASE + 0
#define REG_COLOR_BLOCKSIZE				REG_INDEX_COLOR_BASE + 1
#define REG_COLOR_COMMAND				REG_INDEX_COLOR_BASE + 2
#define REG_COLOR_COMMANDBK				REG_INDEX_COLOR_BASE + 3
#define REG_COLOR_ERROR					REG_INDEX_COLOR_BASE + 4
#define REG_COLOR_ERRORBK				REG_INDEX_COLOR_BASE + 5
#define REG_COLOR_GRAPHBACK				REG_INDEX_COLOR_BASE + 6
#define REG_COLOR_GRAPHFORE				REG_INDEX_COLOR_BASE + 7
#define REG_COLOR_SCALE					REG_INDEX_COLOR_BASE + 8
#define REG_COLOR_SERVER				REG_INDEX_COLOR_BASE + 9
#define REG_COLOR_SERVERBK				REG_INDEX_COLOR_BASE + 10
#define REG_COLOR_STATE					REG_INDEX_COLOR_BASE + 11
#define REG_COLOR_STATEBK				REG_INDEX_COLOR_BASE + 12

//DEFINE INDEX FOR CONNECTION SECTION
#define REG_CONNECTION_CT				REG_INDEX_CONNECTION_BASE + 0
#define REG_CONNECTION_DT				REG_INDEX_CONNECTION_BASE + 1
#define REG_CONNECTION_RETRY			REG_INDEX_CONNECTION_BASE + 2
#define REG_CONNECTION_SIMJOBS			REG_INDEX_CONNECTION_BASE + 3
#define REG_CONNECTION_SPEEDLIMIT		REG_INDEX_CONNECTION_BASE + 4
#define REG_CONNECTION_WT				REG_INDEX_CONNECTION_BASE + 5

//DEFINE INDEX FOR DETAIL STATUS SECTION
#define REG_DETAILSTATUS_INFOWIDTH1		REG_INDEX_DETAILSTATUS_BASE + 0
#define REG_DETAILSTATUS_INFOWIDTH2		REG_INDEX_DETAILSTATUS_BASE + 1
#define REG_DETAILSTATUS_LINKWIDTH1		REG_INDEX_DETAILSTATUS_BASE + 2
#define REG_DETAILSTATUS_LINKWIDTH2		REG_INDEX_DETAILSTATUS_BASE + 3
#define REG_DETAILSTATUS_LOGWITH1		REG_INDEX_DETAILSTATUS_BASE + 4
#define REG_DETAILSTATUS_LOGWITH2		REG_INDEX_DETAILSTATUS_BASE + 5


//DEFINE INDEX FOR DIALUP SECTION
#define REG_DIALUP_ENTRY				REG_INDEX_DIALUP_BASE + 0
#define REG_DIALUP_FLAGS				REG_INDEX_DIALUP_BASE + 1
#define REG_DIALUP_PASSWORD				REG_INDEX_DIALUP_BASE + 2
#define REG_DIALUP_RETRY				REG_INDEX_DIALUP_BASE + 3
#define REG_DIALUP_TITLE				REG_INDEX_DIALUP_BASE + 4
#define REG_DIALUP_USERNAME				REG_INDEX_DIALUP_BASE + 5
#define REG_DIALUP_WT					REG_INDEX_DIALUP_BASE + 6

//DEFINE INDEX FOR DOWNLOADDEFAULT SECTION
#define REG_DOWNLOADDEFAULT_LOGIN		REG_INDEX_DOWNLOADDEFAULT_BASE + 0
#define REG_DOWNLOADDEFAULT_PASSWORD	REG_INDEX_DOWNLOADDEFAULT_BASE + 1
#define REG_DOWNLOADDEFAULT_PATH		REG_INDEX_DOWNLOADDEFAULT_BASE + 2
#define REG_DOWNLOADDEFAULT_PROXY		REG_INDEX_DOWNLOADDEFAULT_BASE + 3
#define REG_DOWNLOADDEFAULT_REFERER		REG_INDEX_DOWNLOADDEFAULT_BASE + 4
#define REG_DOWNLOADDEFAULT_SERVER		REG_INDEX_DOWNLOADDEFAULT_BASE + 5
#define REG_DOWNLOADDEFAULT_SPLIT		REG_INDEX_DOWNLOADDEFAULT_BASE + 7
#define REG_DOWNLOADDEFAULT_START		REG_INDEX_DOWNLOADDEFAULT_BASE + 8
#define REG_DOWNLOADDEFAULT_USERNAME	REG_INDEX_DOWNLOADDEFAULT_BASE + 6


//DEFINE INDEX FOR DROPZONE SECTION
#define REG_DROPZONE_SHOW				REG_INDEX_DROPZONE_BASE + 0
#define REG_DROPZONE_SX					REG_INDEX_DROPZONE_BASE + 1
#define REG_DROPZONE_SY					REG_INDEX_DROPZONE_BASE + 2
#define REG_DROPZONE_TRANSPARENT		REG_INDEX_DROPZONE_BASE + 3

//DEFINE INDEX FOR FIND SECTION
#define REG_FIND_FLAGS					REG_INDEX_FIND_BASE + 0

//DEFINE INDEX FOR LOGIN SECTION
#define REG_LOGIN_COUNT					REG_INDEX_LOGIN_BASE + 0

//DEFINE INDEX FOR MAINFRAME SECTION
#define REG_MAINFRAME_FRMAE				REG_INDEX_MAINFRAME_BASE + 0
#define REG_MAINFRAME_SPLITTER			REG_INDEX_MAINFRAME_BASE + 1

//DEFINE INDEX FOR MAINLISTSTATUS SECTION
#define REG_MAINLISTSTATUS_ORDER1		REG_INDEX_MAINLISTSTATUS_BASE + 0
#define REG_MAINLISTSTATUS_ORDER2		REG_INDEX_MAINLISTSTATUS_BASE + 1
#define REG_MAINLISTSTATUS_SHOW1		REG_INDEX_MAINLISTSTATUS_BASE + 2
#define REG_MAINLISTSTATUS_SHOW2		REG_INDEX_MAINLISTSTATUS_BASE + 3

//DEFINE INDEX FOR MAINMENU SECTION
#define REG_MAINMENU_FLAGS				REG_INDEX_MAINMENU_BASE + 0

//DEFINE INDEX FOR MIRRORS SECTION
#define REG_MIRRORS_LIST				REG_INDEX_MIRRORS_BASE + 0

//DEFINE INDEX FOR PROTOCOL SECTION
#define REG_PROTOCOL_ASCIIMODE			REG_INDEX_PROTOCOL_BASE + 0
#define REG_PROTOCOL_EMAIL				REG_INDEX_PROTOCOL_BASE + 1
#define REG_PROTOCOL_FLAGS				REG_INDEX_PROTOCOL_BASE + 2
#define REG_PROTOCOL_USERAGENT			REG_INDEX_PROTOCOL_BASE + 3
#define REG_PROTOCOL_USERAGENTTEXT		REG_INDEX_PROTOCOL_BASE + 4

//DEFINE INDEX FOR RECENTFILELIST SECTION
#define REG_RECENTFILELIST1				REG_INDEX_RECENTFILELIST_BASE + 0

//DEFINE INDEX FOR SELFOLDER SECTION
#define REG_SELFOLDER1					REG_INDEX_SELFOLDER_BASE + 0

//DEFINE INDEX FOR SELFOLDER SECTION
#define REG_SELURL_WINDOWPLACEMENT		REG_INDEX_SELURL_BASE + 0

//DEFINE INDEX FOR SOUND SECTION
#define REG_SOUND_SOUND0				REG_INDEX_SOUND_BASE + 0
#define REG_SOUND_SOUND1				REG_INDEX_SOUND_BASE + 1
#define REG_SOUND_SOUND2				REG_INDEX_SOUND_BASE + 2
#define REG_SOUND_SOUND3				REG_INDEX_SOUND_BASE + 3


//DEFINE INDEX FOR TOOLBAR SECTION
#define REG_TOOLBAR_DEFAULT				REG_INDEX_TOOLBAR_BASE + 0
#define REG_TOOLBAR_STATE				REG_INDEX_TOOLBAR_BASE + 1

//DEFINE INDEX FOR PROXY SECTION
#define REG_PROXY_COUNT					REG_INDEX_PROXY_BASE + 0
#define REG_PROXY_DEFAULTFORFTP			REG_INDEX_PROXY_BASE + 1
#define REG_PROXY_DEFAULTFORHTTP		REG_INDEX_PROXY_BASE + 2
#define REG_PROXY_ROLLBACK				REG_INDEX_PROXY_BASE + 3

#define REG_PROXY_INFO_BASE				REG_INDEX_PROXY_BASE + 10
#define REG_PROXY_INFO_WIDTH			10
#define	REG_PROXY_INFO_SIZE				7

#define REG_PROXY_INFO_FLAGS			REG_PROXY_INFO_BASE + 0
#define REG_PROXY_INFO_PASSWORD			REG_PROXY_INFO_BASE + 1
#define REG_PROXY_INFO_PORT				REG_PROXY_INFO_BASE + 2
#define REG_PROXY_INFO_SERVER			REG_PROXY_INFO_BASE + 3
#define REG_PROXY_INFO_TITLE			REG_PROXY_INFO_BASE + 4
#define REG_PROXY_INFO_TYPE				REG_PROXY_INFO_BASE + 5
#define REG_PROXY_INFO_USERNAME			REG_PROXY_INFO_BASE + 6

typedef struct tagInfoBase
{
	int		m_iIndex;
	char	*m_pszSubKey;
	char	*m_pszName;
	int		m_iCurVal;
	int		m_iDefVal;
	char	*m_pszCurVal;
	char	*m_pszDefVal;
	BYTE	*m_pbCurVal;
	BYTE	*m_pbDefVal;
	int		m_iCurValLen;
	int		m_iDefValLen;
	int		m_iValType;
	DWORD	m_dwItemType;
}INFOBASE, *PINFOBASE;

#define REG_ITEM_PRECISE		0
#define REG_ITEM_SERIAL			1
#define REG_ITEM_GROUP_START	2
#define REG_ITEM_GROUP_MEMBER	3
#define REG_ITEM_GROUP_END		4	

class CInfoBase
{
public:
	void SetDefault();
	void SetItemType(DWORD dwItemType);
	DWORD GetItemType();
	BOOL GetVal(BYTE **ppbBuf, DWORD *dwValLen);
	BOOL GetVal(LPSTR *ppszBuf);
	BOOL GetVal(DWORD *pdwVal);
	DWORD GetIndex();
	void SetCurVal(DWORD dwType, BYTE *pbData, DWORD dwValLen = 0);
	int GetValtype();
	LPCTSTR GetName();
	LPCTSTR GetSubKey();
	void SetSubKey(LPCTSTR lpszSubKey);
	void SetDefValByte(BYTE *lpbVal, int iValLen);
	void SetCurValByte(BYTE *lpbVal, int iValLen);
	void SetCurValStr(LPCTSTR lpszVal);
	void SetName(LPCTSTR lpszName);
	void SetCurValInt(int iVal);
	void SetValType(int iValType);
	void SetDefValStr(LPCTSTR lpszVal);
	void SetDefValInt(int iVal);
	void SetIndex(int iIndex);
	CInfoBase();
	virtual ~CInfoBase();


protected:
	int		m_iIndex;
	CString m_strSubKey;
	CString m_strName;
	BYTE	*m_pbCurVal;
	BYTE	*m_pbDefVal;
	int		m_iCurValLen;
	int		m_iDefValLen;
	int		m_iValType;
	DWORD	m_dwItemType;
};

class CRegBase
{
public:
	UINT GetID();
	BOOL SetVal(DWORD dwRegItemIndex, BYTE *pbVal, DWORD dwValLen);
	BOOL SetVal(DWORD dwRegItemIndex, DWORD dwVal);
	BOOL SetVal(DWORD dwRegItemIndex, LPCTSTR lpszVal);
	BOOL GetVal(DWORD dwRegItemIndex, BYTE **ppbBuf, DWORD *pdwValLen);
	BOOL GetVal(DWORD dwRegItemIndex, LPSTR *ppszBuf);
	BOOL GetVal(DWORD dwRegItemIndex, DWORD *pdwVal);
	CRegBase(HKEY hkeyBase = HKEY_CURRENT_USER);
	virtual ~CRegBase();
	void	Load();
	void	Save();

protected:
	CInfoBase * CopyItem(DWORD dwIndexCopyFrom, DWORD dwDistanceCopyTo = 1, DWORD dwIndexIncrement = 1);
	virtual DWORD GetGroupCount() {return 0;};
	virtual DWORD GetGroupSize() {return 0;};
	virtual DWORD GetGroupIndexWidth() {return 0;};
	virtual DWORD GetGroupMemberIndex(DWORD dwGroupIndex, DWORD dwGroupMemberIndex) {return 0;};
	virtual void GetGroupKey(DWORD dwIndex, LPSTR lpszGroupKey) {};

	DWORD GetGroupItems(DWORD dwStartIndex, CInfoBase *pStartInfoBase, DWORD *pdwSkipItemsCount);
	DWORD GetSerialItems(DWORD dwStartIndex, CInfoBase *pStartInfoBase, DWORD *pdwTotalFoundItemsCount);
	DWORD GetPreciseItem(CInfoBase *pInfoBase);
	void FillInfoBase(PINFOBASE pInitTable, int iSizeOfInitTable);
	HKEY m_hkeyBase;

	CArray <CInfoBase *, CInfoBase *> m_arInfoBase;
	UINT	m_uID;
};

typedef struct{
	TCHAR *pszTitle;
	TCHAR *pszServer;
	TCHAR *pszUserName;
	TCHAR *pszPassword;
	DWORD dwPort;
	DWORD dwType;
	DWORD dwFlag;
} PROXYSTRUCT, *PPROXYSTRUCT;

class CRegProxy : public CRegBase
{
public:
	BOOL SetProxyData(PPROXYSTRUCT pProxyStruct, DWORD dwIndex);
	BOOL ClearProxyData();
	CRegProxy();
	virtual ~CRegProxy();
protected:
	DWORD GetGroupIndexWidth();
	DWORD GetGroupSize();
	DWORD GetGroupCount();
	DWORD GetGroupMemberIndex(DWORD dwGroupIndex, DWORD dwGroupMemberIndex);
	void GetGroupKey(DWORD dwIndex, LPSTR lpszGroupKey);

	static INFOBASE m_InitTable[];
	static int m_iSizeOfInitTable ;
};


class CRegGeneral : public CRegBase
{
public:
	CRegGeneral();
	virtual ~CRegGeneral();

protected:
	static INFOBASE m_InitTable[];
	static int m_iSizeOfInitTable ;
};

class CAppRegs  
{
public:
	BOOL SetFileManagerFlag(DWORD dwIndex, DWORD dwBits, BYTE bVal);
	CRegBase * GetRegBase(UINT uID);
	BOOL ClearProxyData();
	BOOL SetProxyData(PPROXYSTRUCT pProxyStruct, DWORD dwIndex);
	void SetFlag(DWORD dwRegItemIndex, BOOL bOn);
	BOOL SetVal(DWORD dwRegItemIndex, BYTE *pbVal, DWORD dwValLen);
	BOOL SetVal(DWORD dwRegItemIndex, DWORD dwVal);
	BOOL SetVal(DWORD dwRegItemIndex, LPCTSTR lpszVal);
	DWORD GetVisibleColumnCount(DWORD dwColumnType);
	DWORD GetColumnIndexByScreenOrder(DWORD dwColumnType, DWORD dwScreenOrder);
	DWORD GetColumnIndexByOrder(DWORD dwColumnType, DWORD dwOrder);
	DWORD GetColumnShowInfo(DWORD dwColumnType, DWORD dwColumnIndex);
	BOOL IsColumnVisible(DWORD dwColumnType, DWORD dwColumnIndex);
	DWORD GetColumnWidth(DWORD dwColumnType, DWORD dwColumnIndex);
	DWORD GetColumnAlignStyle(DWORD dwColumnType, DWORD dwColumnIndex);
	DWORD GetColumnCount(DWORD dwColumnType);
	BYTE GetDoubleClickFlag(DWORD dwIndex, DWORD dwBits = 2);
	BYTE GetFileManagerFlag(DWORD dwIndex, DWORD dwBits = 4);
	BOOL GetProxyData(PPROXYSTRUCT pProxyStruct, DWORD dwIndex);
	BOOL IsFlagOn(ULONG ulIndex);
	BOOL GetVal(DWORD dwRegItemIndex, BYTE **ppbBuf, DWORD *pdwValLen);
	BOOL GetVal(DWORD dwRegItemIndex, LPSTR *ppszBuf);
	BOOL GetVal(DWORD dwRegItemIndex, DWORD *pdwVal);
	void Add(CRegBase *pInfoBase);
	void Load();
	void Save();	
	
	CAppRegs();
	virtual ~CAppRegs();

protected:


	CArray <CRegBase *, CRegBase *> m_arRegBase;
};

#endif // !defined(AFX_REGCOLECTION_H__9368F0E4_571F_4BAD_87B0_93232C91E80E__INCLUDED_)
