client-debug = client-debug.exe 
client-ag = client-ag.exe 

all : $(client-ag)
	./$< -n 32 -s 2020
	python plot.py


test : debug
	@rm -rf $(client-debug)

debug : $(client-debug)
	./$(client-debug)

$(client-debug) : client.c hw3.c 
	@gcc -o $@ $^

$(client-ag) : client.c hw3.c 
	@gcc -o $@ $^ -D AUTOGRADER






