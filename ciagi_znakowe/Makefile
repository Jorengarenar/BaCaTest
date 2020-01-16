SRC=src

BaCaTest: $(SRC)/check.cpp kod.cpp custom.cpp
	@g++ -I $(SRC) -o out $(SRC)/check.cpp $(SRC)/tests.cpp custom.cpp $(SRC)/good.o -static -O2 -m32
	@./out
