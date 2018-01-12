@echo off
cls
del bitmap8\*.img
del bitmap8\*.pal
grit.exe bmp\*.bmp -gb -gu8 -gB8 -pu16 -pS -ftb -fh! -Omypal.pal -gTFF00FF
for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
for /f "delims==" %%F in ('dir /b *.img') do copy "mypal.pal" "%%~nF.pal"
del mypal.pal
move *.img bitmap8
move *.pal bitmap8
pause
exit