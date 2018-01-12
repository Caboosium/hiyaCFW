@echo off
cls
del fonts\*.img
del fonts\*.map
del fonts\*.pal
del h\*.h

grit.old.exe bmp\*.bmp -g -gTFF00FF -mR! -p -ftb

for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
ren *.img *.fnt
move *.fnt fonts
move *.pal fonts
del *.map
move *.h h
pause
exit