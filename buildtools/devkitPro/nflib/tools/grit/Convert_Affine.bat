@echo off

cls

del affine\*.img
del affine\*.map
del affine\*.pal
del h\*.h

grit.exe bmp\*.bmp -g -gTFF00FF -m -mRtf -mLa -p -pS -ftb -fa -Omypal.pal

for /f "delims==" %%F in ('dir /b *.bin') do ren "%%~nxF" "%%~nF"
for /f "delims==" %%F in ('dir /b *.img') do copy "mypal.pal" "%%~nF.pal"

del mypal.pal

move *.img affine
move *.map affine
move *.pal affine
move *.h h

pause

exit