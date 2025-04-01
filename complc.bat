@echo off

@rem To compile the source file
g++ src/messy_codec.cpp -o console.exe

@if exist "console.exe" (
    echo Running...
    console.exe
) else (
    echo The file, 'console.exe' does not exist.
    exit /b 1
)

pause

