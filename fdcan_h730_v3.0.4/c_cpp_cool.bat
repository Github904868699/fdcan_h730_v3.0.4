:: ʹ��UTF-8����
:: chcp 65001 >nul

@echo off
setlocal enabledelayedexpansion

:: ��֤���ߴ�����
where CoolFormat.exe >nul 2>nul
if errorlevel 1 (
    echo ����CoolFormat.exeδ��װ��δ��ӵ�PATH��������
    pause
    exit /b 1
)

:: �ݹ鴦���ļ�
for /r %%i in (*.c *.cpp *.h *.hpp *.cc *.cxx) do (
    echo ��ʽ��: %%~nxi
    :: echo CoolFormat.exe -f "%%i"
    CoolFormat.exe -f "%%i"
)

echo ����C/C++�ļ��Ѹ�ʽ�����
:: pause

