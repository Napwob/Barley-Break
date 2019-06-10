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
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)gafu.o $(OD)menu.o $(OD)output_matrix.o -lncurses
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c -lncurses
$(OD)gafu.o: $(SD)gafu.c
	$(CC) $(CFLAGS) -c -o $(OD)gafu.o $(SD)gafu.c -lncurses
$(OD)menu.o: $(SD)menu.c
	$(CC) $(CFLAGS) -c -o $(OD)menu.o $(SD)menu.c -lncurses
$(OD)output_matrix.o: $(SD)output_matrix.c
	$(CC) $(CFLAGS) -c -o $(OD)output_matrix.o $(SD)output_matrix.c -lncurses

clean:
	rm -rf $(EXECUTABLE) $(OD)*.o bin/main_test build/test/*.o
test: build/test bin/main_test
build/test:
	mkdir build/test -p
bin/main_test: build/test/main.o build/test/gafu.o build/test/menu.o build/test/output_matrix.o
	$(CC) $(CFLAGS) build/test/main.o build/test/gafu.o build/test/menu.o build/test/output_matrix.o -o bin/main_test -lncurses
build/test/main.o: test/main.c
	$(CC) $(CFLAGS) -c -I thirdparty -I src test/main.c -o build/test/main.o -lncurses
build/test/gafu.o: src/gafu.c
	$(CC) $(CFLAGS) -c -I thirdparty -I src src/gafu.c -o build/test/gafu.o -lncurses
build/test/menu.o: src/menu.c
	$(CC) $(CFLAGS) -c -I thirdparty -I src src/menu.c -o build/test/menu.o -lncurses
build/test/output_matrix.o: src/output_matrix.c
	$(CC) $(CFLAGS) -c -I thirdparty -I src src/output_matrix.c -o build/test/output_matrix.o -lncurses         
