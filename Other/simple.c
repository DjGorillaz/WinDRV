#include <ntddk.h>

VOID Unload(PDRIVER_OBJECT pDriverObject)
{
	DbgPrint("Goodbye!\r\n");
}


//������� �����
//PDRIVER_OBJECT - ����� ������� ��������
//PUNICODE_STRING - ���� � ������� � ���������� ��������
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
	DbgPrint("Hello world!\r\n");
	pDriverObject->DriverUnload = Unload;
	return STATUS_SUCCESS;

}

