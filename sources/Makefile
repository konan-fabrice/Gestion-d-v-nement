CC=gcc
CFLAGS=-Wall
LIBS=-lmysqlclient
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
EXEC=main	

all: $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)
	
$(EXEC) : $(OBJ)
	$(CC) -o $@ $^ $(LIBS)
	
clean:
	rm -f *.o $(EXEC)
