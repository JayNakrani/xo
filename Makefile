
all: xo

CC = g++

xo: 
	$(CC) app/xo.cpp -o bin/xo

clean: 
	rm bin/xo
