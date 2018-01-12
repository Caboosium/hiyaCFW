@echo off
cls
del bitmap16\*.img
grit.exe bmp\*.bmp -gb -gu16 -gB16 -ftb -fh! -gTFF00FF
for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
move *.img bitmap16
pause
exit