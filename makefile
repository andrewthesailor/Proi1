OBJS=class.o main.o test.o
CXX=g++
CFLAGS=-Wall
LFLAGS=
projekt1.out: $(OBJS) proj1.h test.h
	$(CXX) $(OBJS) -o projekt1.out

main.o:main.cpp
	$(CXX) -c $(CFLAGS) main.cpp -o main.o

class.o:class.cpp
	$(CXX) -c $(CFLAGS) class.cpp -o class.o

test.o:test.cpp
	$(CXX) -c $(CFLAGS) test.cpp -o test.o


clean:
	rm -f *.o
.PHONY: clean
