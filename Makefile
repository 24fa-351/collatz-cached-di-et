collatz: collatz.c
	gcc -o collatz.exe collatz.c

clean: 
	rm collatz.exe

test: collatz
	bash test.sh