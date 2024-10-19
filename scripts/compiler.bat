@echo off
setlocal

cls

set SRC_DIR=src
set BIN_DIR=bin

set SRCS=%SRC_DIR%\*.c

set TARGET=%BIN_DIR%\out

set PROJECT_ROOT=%~dp0..\

if not exist %BIN_DIR% (
  mkdir %BIN_DIR%
)

gcc %SRCS% -o %TARGET%

if %errorlevel% neq 0 (
  echo Compilation failed!
  pause
  exit /b
)

for %%i in (%*) do (
  if "%%i"=="--run" (
    %TARGET%
  )
)

endlocal