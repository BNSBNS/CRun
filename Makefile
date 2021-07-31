results: Main.o Newspaper.o Subscribers.o Delivery.o DataStructure.o
	gcc $^ -o results

Newspaper.o: Newspaper.c Newspaper.h
	gcc -c $<

Subscribers.o: Subscribers.c Subscribers.h
	gcc -c $<

Delivery.o: Delivery.c Delivery.h
	gcc -c $<

DataStructure.o: DataStructure.c DataStructure.h
	gcc -c $<	

clean:
	-rm *.o
	-rm results