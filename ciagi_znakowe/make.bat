@ECHO OFF
g++ -I src/ -o out src/check.cpp src/tests.cpp custom.cpp src/good_win.o -static -O2 -m32
out.exe
