@echo off
cls

del sprites\*.img
del sprites\*.map
del sprites\*.pal
del h\*.h

grit.exe bmp\*.bmp -g -gTFF00FF -p -ftb

for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
move *.img sprites
move *.pal sprites
del *.map
move *.h h
pause
exit