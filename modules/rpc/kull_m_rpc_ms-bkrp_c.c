#include "kull_m_rpc_ms-bkrp.h"

const GUID
	BACKUPKEY_BACKUP_GUID = {0x7f752b10, 0x178e, 0x11d1, {0xab, 0x8f, 0x00, 0x80, 0x5f, 0x14, 0xdb, 0x40}},
	BACKUPKEY_RESTORE_GUID_WIN2K = {0x7fe94d50, 0x178e, 0x11d1, {0xab, 0x8f, 0x00, 0x80, 0x5f, 0x14, 0xdb, 0x40}},
	BACKUPKEY_RETRIEVE_BACKUP_KEY_GUID = {0x018ff48a, 0xeaba, 0x40c6, {0x8f, 0x6d, 0x72, 0x37, 0x02, 0x40, 0xe9, 0x67}},
	BACKUPKEY_RESTORE_GUID = {0x47270c64, 0x2fc7, 0x499b, {0xac, 0x5b, 0x0e, 0x37, 0xcd, 0xce, 0x89, 0x9a}};

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
typedef struct _ms2Dbkrp_MIDL_TYPE_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[65];
} ms2Dbkrp_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dbkrp_MIDL_PROC_FORMAT_STRING {
	SHORT Pad;
	CHAR Format[73];
} ms2Dbkrp_MIDL_PROC_FORMAT_STRING;

extern const ms2Dbkrp_MIDL_TYPE_FORMAT_STRING ms2Dbkrp__MIDL_TypeFormatString;
extern const ms2Dbkrp_MIDL_PROC_FORMAT_STRING ms2Dbkrp__MIDL_ProcFormatString;
static const RPC_CLIENT_INTERFACE BackupKey___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0x3dde7c30, 0x165d, 0x11d1, {0xab, 0x8f, 0x00, 0x80, 0x5f, 0x14, 0xdb, 0x40}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000000};
static RPC_BINDING_HANDLE BackupKey__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC BackupKey_StubDesc = {(void *) &BackupKey___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &BackupKey__MIDL_AutoBindHandle, 0, 0, 0, 0, ms2Dbkrp__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};

NET_API_STATUS BackuprKey(handle_t h, GUID *pguidActionAgent, byte *pDataIn, DWORD cbDataIn, byte **ppDataOut, DWORD *pcbDataOut, DWORD dwParam)
{
	return (NET_API_STATUS) NdrClientCall2((PMIDL_STUB_DESC) &BackupKey_StubDesc, (PFORMAT_STRING) &ms2Dbkrp__MIDL_ProcFormatString.Format[0], h, pguidActionAgent, pDataIn, cbDataIn, ppDataOut, pcbDataOut, dwParam).Simple;
}

static const ms2Dbkrp_MIDL_PROC_FORMAT_STRING ms2Dbkrp__MIDL_ProcFormatString = {0, {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x32, 0x00, 0x00, 0x00, 0x54, 0x00, 0x24, 0x00, 0x47, 0x07, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x01,
	0x08, 0x00, 0x0c, 0x00, 0x0b, 0x01, 0x10, 0x00, 0x1c, 0x00, 0x48, 0x00, 0x18, 0x00, 0x08, 0x00, 0x13, 0x20, 0x20, 0x00, 0x28, 0x00, 0x50, 0x21, 0x28, 0x00, 0x08, 0x00, 0x48, 0x00, 0x30, 0x00,
	0x08, 0x00, 0x70, 0x00, 0x38, 0x00, 0x08, 0x00, 0x00,
}};
static const ms2Dbkrp_MIDL_TYPE_FORMAT_STRING ms2Dbkrp__MIDL_TypeFormatString = {0, {
	0x00, 0x00, 0x11, 0x00, 0x08, 0x00, 0x1d, 0x00, 0x08, 0x00, 0x01, 0x5b, 0x15, 0x03, 0x10, 0x00, 0x08, 0x06, 0x06, 0x4c, 0x00, 0xf1, 0xff, 0x5b, 0x11, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00,
	0x29, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x5b, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x54, 0x28, 0x00, 0x00, 0x00, 0x01, 0x5b, 0x11, 0x0c, 0x08, 0x5c,
	0x00,
}};
#elif defined(_M_IX86)
typedef struct _ms2Dbkrp_MIDL_TYPE_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[65];
} ms2Dbkrp_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dbkrp_MIDL_PROC_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[71];
} ms2Dbkrp_MIDL_PROC_FORMAT_STRING;

extern const ms2Dbkrp_MIDL_TYPE_FORMAT_STRING ms2Dbkrp__MIDL_TypeFormatString;
extern const ms2Dbkrp_MIDL_PROC_FORMAT_STRING ms2Dbkrp__MIDL_ProcFormatString;
static const RPC_CLIENT_INTERFACE BackupKey___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0x3dde7c30, 0x165d, 0x11d1, {0xab, 0x8f, 0x00, 0x80, 0x5f, 0x14, 0xdb, 0x40}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000000};
static RPC_BINDING_HANDLE BackupKey__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC BackupKey_StubDesc = {(void *) &BackupKey___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &BackupKey__MIDL_AutoBindHandle, 0, 0, 0, 0, ms2Dbkrp__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};
#pragma optimize("", off) 
NET_API_STATUS BackuprKey(handle_t h, GUID *pguidActionAgent, byte *pDataIn, DWORD cbDataIn, byte **ppDataOut, DWORD *pcbDataOut, DWORD dwParam)
{
    return (NET_API_STATUS) NdrClientCall2((PMIDL_STUB_DESC) &BackupKey_StubDesc, (PFORMAT_STRING) &ms2Dbkrp__MIDL_ProcFormatString.Format[0], (unsigned char *) &h).Simple;
}
#pragma optimize("", on)
static const ms2Dbkrp_MIDL_PROC_FORMAT_STRING ms2Dbkrp__MIDL_ProcFormatString = {0, {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x32, 0x00, 0x00, 0x00, 0x54, 0x00, 0x24, 0x00, 0x47, 0x07, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x04, 0x00,
	0x0c, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x1c, 0x00, 0x48, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x13, 0x20, 0x10, 0x00, 0x28, 0x00, 0x50, 0x21, 0x14, 0x00, 0x08, 0x00, 0x48, 0x00, 0x18, 0x00, 0x08, 0x00,
	0x70, 0x00, 0x1c, 0x00, 0x08, 0x00, 0x00,
}};
static const ms2Dbkrp_MIDL_TYPE_FORMAT_STRING ms2Dbkrp__MIDL_TypeFormatString = {0, {
	0x00, 0x00, 0x11, 0x00, 0x08, 0x00, 0x1d, 0x00, 0x08, 0x00, 0x01, 0x5b, 0x15, 0x03, 0x10, 0x00, 0x08, 0x06, 0x06, 0x4c, 0x00, 0xf1, 0xff, 0x5b, 0x11, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00,
	0x29, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x5b, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x54, 0x14, 0x00, 0x00, 0x00, 0x01, 0x5b, 0x11, 0x0c, 0x08, 0x5c,
	0x00,
}};
#endif