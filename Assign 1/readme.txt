SETA QUESTION-7

nasm -f elf64 -o A1A_200101026.o A1A_200101026.asm
ld A1A_200101026.o -o A1A_200101026
./A1A_200101026

Input: Integer value
Output: Binary value of the given integer
	  TRUE if binary is palindrome
	  FALSE if binary is not a palindrome




SETB QUESTION-10 
nasm -f elf64 -g A1B_200101026.asm
gcc -o A1B_200101026 -no-pie A1B_200101026.o
./A1B_200101026

Input : n(size of array), k(kth largest element) values have to be given 
	Elements of the array are floating point numbers.
	These are sorted using insertion sort.
Output: kth largest element is printed