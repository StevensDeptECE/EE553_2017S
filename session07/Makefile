CC	:= g++
DEBUG	:= -g
OPT	:= #-O2
CFLAGS	:= -c -std=c++11 $(DEBUG) $(OPT)
String3: String3.o main3.o
	$(CC) $(DEBUG) String3.o main3.o -o String3

String3.o: String3.cc String3.hh
	$(CC) $(CFLAGS) String3.cc

main3.o: main3.cc String3.hh
	$(CC) $(CFLAGS) main3.cc

.cc.o:
	$(CC) $(CFLAGS) $<

clean:
	rm *.o *.exe
