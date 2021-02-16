world: 
	gcc -c -o helloworld.o helloworld.c -Wall && \
	gcc -o helloworld helloworld.o

clean: 
	rm helloworld.o
	rm helloworld