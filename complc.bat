@echo off
g++ src/messy_codec.cpp -o console.exe

@rem To compile the source file
@if exist "console.exe" (
    echo Running...
    console.exe
) else (
    echo The file, 'console.exe' does not exist.
    exit /b 1
)

pause

