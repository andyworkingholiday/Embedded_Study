diary_exe : memo.o calendar.o main.o	
	gcc -o diary_exe memo.o calendar.o main.o

memo.o : memo.c
	gcc -c memo.c

calendar.o : calendar.c
	gcc -c calendar.c

main.o :  main.c
	gcc -c main.c

clean :
	rm *.o diary_exe

