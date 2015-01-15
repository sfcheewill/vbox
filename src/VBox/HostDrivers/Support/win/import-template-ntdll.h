SUPHARNT_IMPORT_SYSCALL(NtAllocateVirtualMemory, 24)
SUPHARNT_IMPORT_SYSCALL(NtClearEvent, 4)
SUPHARNT_IMPORT_SYSCALL(NtClose, 4)
SUPHARNT_IMPORT_SYSCALL(NtCreateEvent, 20)
SUPHARNT_IMPORT_SYSCALL(NtCreateFile, 44)
SUPHARNT_IMPORT_SYSCALL(NtCreateSymbolicLinkObject, 16)
SUPHARNT_IMPORT_SYSCALL(NtDelayExecution, 8)
SUPHARNT_IMPORT_SYSCALL(NtDeviceIoControlFile, 40)
SUPHARNT_IMPORT_SYSCALL(NtDuplicateObject, 28)
SUPHARNT_IMPORT_SYSCALL(NtFreeVirtualMemory, 16)
SUPHARNT_IMPORT_SYSCALL(NtGetContextThread, 8)
SUPHARNT_IMPORT_SYSCALL(NtMapViewOfSection, 40)
SUPHARNT_IMPORT_SYSCALL(NtOpenDirectoryObject, 12)
SUPHARNT_IMPORT_SYSCALL(NtOpenEvent, 12)
SUPHARNT_IMPORT_SYSCALL(NtOpenKey, 12)
SUPHARNT_IMPORT_SYSCALL(NtOpenProcess, 16)
SUPHARNT_IMPORT_SYSCALL(NtOpenProcessToken, 12)
SUPHARNT_IMPORT_SYSCALL(NtOpenSymbolicLinkObject, 12)
SUPHARNT_IMPORT_SYSCALL(NtOpenThread, 16)
SUPHARNT_IMPORT_SYSCALL(NtOpenThreadToken, 16)
SUPHARNT_IMPORT_SYSCALL(NtProtectVirtualMemory, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryDirectoryFile, 44)
SUPHARNT_IMPORT_SYSCALL(NtQueryDirectoryObject, 28)
SUPHARNT_IMPORT_SYSCALL(NtQueryEvent, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryInformationFile, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryInformationProcess, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryInformationThread, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryInformationToken, 20)
SUPHARNT_IMPORT_SYSCALL(NtQueryObject, 20)
SUPHARNT_IMPORT_SYSCALL(NtQuerySecurityObject, 20)
SUPHARNT_IMPORT_SYSCALL(NtQuerySymbolicLinkObject, 12)
SUPHARNT_IMPORT_SYSCALL(NtQuerySystemInformation, 16)
SUPHARNT_IMPORT_SYSCALL(NtQueryTimerResolution, 12)
SUPHARNT_IMPORT_SYSCALL(NtQueryValueKey, 24)
SUPHARNT_IMPORT_SYSCALL(NtQueryVirtualMemory, 24)
SUPHARNT_IMPORT_SYSCALL(NtReadFile, 36)
SUPHARNT_IMPORT_SYSCALL(NtReadVirtualMemory, 20)
SUPHARNT_IMPORT_SYSCALL(NtResetEvent, 8)
SUPHARNT_IMPORT_SYSCALL(NtResumeProcess, 4)
SUPHARNT_IMPORT_SYSCALL(NtResumeThread, 8)
SUPHARNT_IMPORT_SYSCALL(NtSetContextThread, 8)
SUPHARNT_IMPORT_SYSCALL(NtSetEvent, 8)
SUPHARNT_IMPORT_SYSCALL(NtSetInformationFile, 20)
SUPHARNT_IMPORT_SYSCALL(NtSetInformationObject, 16)
SUPHARNT_IMPORT_SYSCALL(NtSetInformationProcess, 16)
SUPHARNT_IMPORT_SYSCALL(NtSetInformationThread, 16)
SUPHARNT_IMPORT_SYSCALL(NtSetTimerResolution, 12)
SUPHARNT_IMPORT_SYSCALL(NtSuspendProcess, 4)
SUPHARNT_IMPORT_SYSCALL(NtSuspendThread, 8)
SUPHARNT_IMPORT_SYSCALL(NtTerminateProcess, 8)
SUPHARNT_IMPORT_SYSCALL(NtTerminateThread, 8)
SUPHARNT_IMPORT_SYSCALL(NtUnmapViewOfSection, 8)
SUPHARNT_IMPORT_SYSCALL(NtWaitForMultipleObjects, 20)
SUPHARNT_IMPORT_SYSCALL(NtWaitForSingleObject, 12)
SUPHARNT_IMPORT_SYSCALL(NtWriteFile, 36)
SUPHARNT_IMPORT_SYSCALL(NtWriteVirtualMemory, 20)
SUPHARNT_IMPORT_SYSCALL(NtYieldExecution, 0)
SUPHARNT_IMPORT_SYSCALL(NtCreateSection, 28)
SUPHARNT_IMPORT_SYSCALL(NtQueryVolumeInformationFile, 20)

SUPHARNT_IMPORT_STDCALL_EARLY(LdrInitializeThunk, 12)
SUPHARNT_IMPORT_STDCALL_EARLY_OPTIONAL(LdrRegisterDllNotification, 16)
SUPHARNT_IMPORT_STDCALL_EARLY(LdrGetDllHandle, 16)

SUPHARNT_IMPORT_STDCALL(RtlAddAccessAllowedAce, 16)
SUPHARNT_IMPORT_STDCALL(RtlAddAccessDeniedAce, 16)
SUPHARNT_IMPORT_STDCALL(RtlAllocateHeap, 12)
SUPHARNT_IMPORT_STDCALL(RtlCompactHeap, 8)
SUPHARNT_IMPORT_STDCALL(RtlCopySid, 12)
SUPHARNT_IMPORT_STDCALL(RtlCreateAcl, 12)
SUPHARNT_IMPORT_STDCALL(RtlCreateHeap, 24)
SUPHARNT_IMPORT_STDCALL(RtlCreateProcessParameters, 40)
SUPHARNT_IMPORT_STDCALL(RtlCreateSecurityDescriptor, 8)
SUPHARNT_IMPORT_STDCALL(RtlCreateUserProcess, 40)
SUPHARNT_IMPORT_STDCALL(RtlCreateUserThread, 40)
SUPHARNT_IMPORT_STDCALL(RtlDestroyProcessParameters, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlDosApplyFileIsolationRedirection_Ustr, 36)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlEqualSid, 8)
SUPHARNT_IMPORT_STDCALL_EARLY_OPTIONAL(RtlExitUserProcess, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlExitUserThread, 4)
SUPHARNT_IMPORT_STDCALL(RtlExpandEnvironmentStrings_U, 16)
SUPHARNT_IMPORT_STDCALL(RtlFreeHeap, 12)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlFreeUnicodeString, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlGetLastNtStatus, 0)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlGetLastWin32Error, 0)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlGetVersion, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlInitializeSid, 12)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlNtStatusToDosError, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlReAllocateHeap, 16)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlRestoreLastWin32Error, 4)
SUPHARNT_IMPORT_STDCALL(RtlSetDaclSecurityDescriptor, 16)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlSetLastWin32Error, 4)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlSetLastWin32ErrorAndNtStatusFromNtStatus, 4)
SUPHARNT_IMPORT_STDCALL(RtlSizeHeap, 12)
SUPHARNT_IMPORT_STDCALL_EARLY(RtlSubAuthoritySid, 8)

