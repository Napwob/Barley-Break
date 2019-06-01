.PHONY:all clean
CC = gcc
CFLAGS = -Wall
SD = src/
OD = build/
EXECUTABLE = bin/main.exe

all: build/ bin/ $(EXECUTABLE)
build/:
	mkdir build/ -p
bin/:
	mkdir bin/ -p
$(EXECUTABLE):	$(OD)main.o $(OD)gafu.o $(OD)menu.o $(OD)output_matrix.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main $(OD)gafu.o $(OD)menu.o $(OD)output_matrix.o
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c
$(OD)gafu.o: $(SD)gafu.c
	$(CC) $(CFLAGS) -c -o $(OD)gafu.o $(SD)gafu.c
$(OD)menu.o: $(SD)menu.c
	$(CC) $(CFLAGS) -c -o $(OD)menu.o $(SD)menu.c
$(OD)output_matrix.o: $(SD)output_matrix.c
	$(CC) $(CFLAGS) -c -o $(OD)output_matrix.o $(SD)output_matrix.c

clean:
	rm -rf $(EXECUTABLE) $(OD)*.o         
