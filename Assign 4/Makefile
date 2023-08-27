a.out: lex.yy.c A4_6.tab.c A4_6.o
	gcc A4_6.tab.c lex.yy.c A4_6.o -lfl 


lex.yy.c: A4_6.l
	flex A4_6.l

A4_6.tab.c: A4_6.y
		bison -dtv A4_6.y

A4_6.o: A4_6.c
		gcc -c A4_6.c

clean:
	rm A4_6.tab.h A4_6.tab.c lex.yy.c A4_6.o a.out A4_6.output output.txt

test:
	./a.out < A4_6.nc > output.txt
