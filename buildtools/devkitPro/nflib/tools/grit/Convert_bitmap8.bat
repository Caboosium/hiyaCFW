@echo off
cls
del bitmap8\*.img
del bitmap8\*.pal
grit.exe bmp\*.bmp -gb -gu8 -gB8 -pu8 -ftb -fh! -gTFF00FF
for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
move *.img bitmap8
move *.pal bitmap8
pause
exit