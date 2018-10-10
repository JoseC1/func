#This will be my makefile script for my main.cpp program which will do multiple functions




main: main.cpp
	g++ main.cpp -o main

run:
	./main

edit:
	vim main.cpp

debug:
	gdb ./main

clean:
	rm main







