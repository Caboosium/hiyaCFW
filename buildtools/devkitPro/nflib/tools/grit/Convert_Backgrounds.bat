@echo off
cls
del backgrounds\*.img
del backgrounds\*.map
del backgrounds\*.pal
del h\*.h
grit.exe bmp\*.bmp -g -gTFF00FF -m -mRtf -mLs -p -ftb
for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
move *.img backgrounds
move *.map backgrounds
move *.pal backgrounds
move *.h h
pause
exit