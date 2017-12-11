dsarray: main.o dynamicstringarray.o
	g++ main.o dynamicstringarray.o -o dsarray

main.o: main.cpp
	g++ -c main.cpp

dynamicstringarray.o: dynamicstringarray.cpp dynamicstringarray.h
	g++ -c dynamicstringarray.cpp

clean:
	rm *.o dsarray
