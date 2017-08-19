CC= g++
CFLAGS= -ggdb -Wall -std=c++11

main: Deque.h.gch main.cpp
	$(CC) $(CFLAGS) -o main main.cpp
Deque.h.gch: Deque.h
	$(CC) $(CFLAGS) Deque.h
clean:
	rm -f main Deque.h.gch
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --track-origins=yes main
