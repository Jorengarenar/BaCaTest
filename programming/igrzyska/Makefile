source: test.cpp
	@mkdir -p bad
	@g++ -Wall -std=c++03 -g test.cpp -o test -fsanitize=address -O2 -m32
	@./test
