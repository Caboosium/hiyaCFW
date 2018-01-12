@echo off
cls

set /p PALETTE=Shared Palette name:

del sprites\*.img
del sprites\*.map
del sprites\*.pal
del h\*.h

grit.exe bmp\*.bmp -g -gTFF00FF -p -pS -ftb -O%PALETTE%

for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
move *.img sprites
move *.pal sprites
del *.map
move *.h h
pause
exit