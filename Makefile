# makefile
# This is easily understood like here,
# target target_name : prerequisites 
# command with tab space

# Other way to remember is 
# food: food items 
# making food 

main: Main.o Test1.o Test2.o 
	gcc -Wall Main.o Test1.o Test2.o -o Main

# test1.o: test1.h test1.c
# 	gcc -Wall -c test1.c

clean: 
		rm *.o
