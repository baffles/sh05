@echo off
rem make it!

if [%1] == [--help]   goto help
if [%1] == [--both]   goto libacc
if [%1] == [--libacc] goto libacc
if [%1] == [--prog]   goto prog
if [%1] == []         goto prog

goto prog

:help
echo makeit [--prog]/[--libacc]/[--both]
echo.
echo If you pass --prog it will compile only the program.
echo If you pass --libacc it will compile only libacc.
echo If you pass --both it will compile libacc and the program.
echo By default, only the program is compiled.
echo.
goto end

:libacc
echo Making libacc
cd libacc\src
gcc -c acc.c -I../include -g
ar -rc libacc.a acc.o
move libacc.a ..\lib\
cd ..\..

if [%1] == [--both] goto prog

:prog
echo Making program
gcc -c test2.c -Ilibacc\include -g
gcc test2.o -o test2  -Llibacc\lib  -lacc -lldpng -lpng -lz -lcurl -lalleg -g


:end
