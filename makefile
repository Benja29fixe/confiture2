all: main

main: main.o fonctions.o algo_dyn.o algo_glouton.o	
	gcc  main.o fonctions.o algo_dyn.o algo_glouton.o -o main

main.o: main.c
	gcc -c main.c -o main.o

fonctions.o: fonctions.c fonctions.h
	gcc -c fonctions.c -o fonctions.o

algo_dyn.o: algo_dynamique.c fonctions.h
	gcc -c algo_dynamique.c -o algo_dyn.o	

algo_glouton.o: algo_glouton.c fonctions.h
	gcc -c algo_glouton.c -o algo_glouton.o	

clean:
	rm -r *.o main


