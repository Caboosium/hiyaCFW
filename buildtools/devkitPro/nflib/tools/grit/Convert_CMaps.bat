@echo off
cls
del cmaps\*.cmp
del h\*.h
grit.exe bmp\*.bmp -g -gTFF00FF -m -mRt -mLf -p -ftb
for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
ren *.map *.cmp
ren *.img *.dat
del *.pal
move *.cmp cmaps
move *.dat cmaps
move *.h h
pause
exit