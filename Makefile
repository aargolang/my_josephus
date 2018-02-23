OBJS = main.o TestVectorMyJosephus.o TestListMyJosephus.o Person.o ListMyJosephus.o VectorMyJosephus.o
CC = g++
CPPFLAGS = -Wall -c -g -std=c++11
LFLAGS = -Wall -g

a: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o a

main.o: main.cpp 
	$(CC) $(CPPFLAGS) main.cpp 

TestVectorMyJosephus.o: TestVectorMyJosephus.cpp 
	$(CC) $(CPPFLAGS) TestVectorMyJosephus.cpp 

TestListMyJosephus.o: TestListMyJosephus.cpp TestListMyJosephus.h 
	$(CC) $(CPPFLAGS) TestListMyJosephus.cpp 

Person.o: Person.cpp Person.h
	$(CC) $(CPPFLAGS) Person.cpp

ListMyJosephus.o: ListMyJosephus.cpp ListMyJosephus.h
	$(CC) $(CPPFLAGS) ListMyJosephus.cpp

VectorMyJosephus.o: VectorMyJosephus.cpp VectorMyJosephus.h
	$(CC) $(CPPFLAGS) VectorMyJosephus.cpp

clean: 
	rm -f *.o 
	rm -f a
