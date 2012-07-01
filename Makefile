GCC = g++
CFLAGS = -g -W -Wall
INCLUDE = -I. -I/usr/include -I./includes -I/usr/local/include -I/usr/include/opencv 
INCDIR = includes
LIBS = -lpthread -lncurses -lhighgui -lcv -lml -lboost_thread-mt
SRCS =  cVision.cpp speech.cpp main.cpp 
OBJS =  cVision.o speech.o main.o

all: $(OBJS)
	$(GCC) $(CFLAGS) $(LIBS) $(OBJS)    -o  ISIS.out

cVision.o: cVision.cpp $(INCDIR)/cVision.h $(INCDIR)/constants.h
	$(GCC) $(CFLAGS) $(INCLUDE) -c cVision.cpp

speech.o: speech.cpp $(INCDIR)/speech.h $(INCDIR)/constants.h
	$(GCC) $(CFLAGS) $(INCLUDE) -c speech.cpp

main.o: main.cpp $(INCDIR)/speech.h $(INCDIR)/cVision.h $(INCDIR)/constants.h
	$(GCC) $(CFLAGS) $(INCLUDE) -c main.cpp
clean:
	rm -f *.o *~ ISIS.out

