CC = gcc
CFLAGS = -DINCLUDEMAIN -O3
OBJ = ../../../testcasesupport/io.c ../../../testcasesupport/std_thread.c
MYFILES = $(wildcard *.c)
INC = -I../../../testcasesupport
test:$(OBJ) $(MYFILES)
	$(CC) $(CFLAGS) $(INC) $^ -o $@ -pthread
clean:test
	rm -f test