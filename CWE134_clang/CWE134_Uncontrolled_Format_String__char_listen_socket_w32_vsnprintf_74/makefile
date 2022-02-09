CC = g++
CFLAGS = -DINCLUDEMAIN -O3
OBJ = ../../../testcasesupport/io.c ../../../testcasesupport/std_thread.c
MYFILES = $(wildcard *.cpp)
INC = -I../../../testcasesupport
test:$(OBJ) $(MYFILES)
	$(CC) $(CFLAGS) $(INC) $^ -o $@ -lstdc++ -lpthread
clean:test
	rm -f test