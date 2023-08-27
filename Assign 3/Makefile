a.out:	lex.yy.c
		gcc lex.yy.c -lfl

lex.yy.c:	A3_6.l A3_6.c
		flex A3_6.l A3_6.c
        
clean:
		rm a.out lex.yy.c

test:
		./a.out < A3_6.nc
