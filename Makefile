OUT = main.o funcs.o
SRC = main.c funcs.c
FUN = funcs.c funcs.h
all: $(OUT)
        gcc -std=c99 $(OUT) -o output
main.o: main.c
        gcc -std=c99 -c main.c -o main.o
funcs.o: $(FUN)
        gcc -std=c99 -c funcs.c -o funcs.o
clean:
        rm *.o output
run:
        ./output
