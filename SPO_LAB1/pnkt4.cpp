#pragma warning(disable : 4996)

#define WINVER 0x0A00
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#define BUFSIZE MAX_PATH

using namespace std;

int main() {
    char buffer[MAX_PATH + 1];
    DWORD  CBufLen = MAX_PATH;
    char buff1[MAX_PATH + 1];
    CHAR VolumeName[MAX_PATH];
    __int64 total, available, free;


    HANDLE search = FindFirstVolumeA(VolumeName, BUFSIZE);
    printf("\n      %s", VolumeName);

    do {
        printf("\n      %s", buff1);
        GetVolumePathNamesForVolumeNameA(buff1, buffer, CBufLen, &CBufLen);
        char* path = buffer;
        printf("\npath: %s", path);
        GetDiskFreeSpaceExA(buffer, (PULARGE_INTEGER)&available, (PULARGE_INTEGER)&total, (PULARGE_INTEGER)&free);
        printf("\nsize: %ll  bytes ", total);
        printf("\nFree space: %ll  bytes\n", available);

    } while (FindNextVolumeA(search, buff1, BUFSIZE));
    FindVolumeClose(search);
}
