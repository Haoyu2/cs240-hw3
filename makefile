client-debug = client-debug.exe 
client-ag = client-ag.exe 

all : $(client-debug)
	./$< -n 12 -s 1010
	python plot.py


test : debug
	@rm -rf $(client-debug)

debug : $(client-debug)
	./$(client-debug)

$(client-debug) : client.c hw3.c 
	@gcc  -o $@ $^ -lm

$(client-ag) : client.c hw3.c 
	@gcc -o $@ $^ -D AUTOGRADER -lm 






