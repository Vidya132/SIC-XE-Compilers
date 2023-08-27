extern printf
extern scanf 

section .data
    msg1 db "Enter n: ",0
    msg2 db "Enter k: ",0
    formatint db "%ld",0
    formatf  db "%lf",0
    fmt db "kth largest element is %lf",10,0
section .bss
    num resq 1
    n resb 4
    k resb 4
    arrayfloats resq 200
    strNum resq 10
section .text
    global main

main:
    sub rsp ,8
    
    ;printing for n
    mov rdi , msg1
    call printf 

    ;scanning value to num
    mov rdi , formatf ;%lf for floating points
    lea rsi , [num] 
    call scanf

    ;converting float value of num to int and stroring as n
    movsd xmm0 , [num]
    cvtsd2si r10d , xmm0 
    mov dword [n] , r10d

    ;printing for k
    mov rdi , msg2
    call printf 

    ;scanning value to num
    mov rdi , formatf
    lea rsi , [num]
    call scanf

    ;converting float value of num to int and stroring as n
    movsd xmm0 , [num]
    cvtsd2si r10d , xmm0
    mov dword [k] , r10d

    xor r10 ,r10
    mov r14d , dword [n] ;n value for scanning till n
    
    mov r15d , 0 ;indexing
    loop1: ;scanning elements into array
        ;scanning each element
        mov rdi , formatf
        lea rsi , [num]
        call scanf

        ;storing in arrayfloats
        movsd xmm0 , [num]
        movsd qword [arrayfloats+8*r15d] , xmm0 
        inc r15
        cmp r15d , r14d ;scanning till n
        jne loop1

;INSERTION SORT
    mov r9d , 1   ; i=1
    loop2: ;for(int i=1;i<n;i++)
        movsd xmm2 , qword [arrayfloats + 8*r9d]  ; key=arr[i] (value at arr[i] stored in xxm2)
        mov r13d , r9d   
        mov r14d , r9d
        ;loop3 and change are for moving elements of arr[0...i-1]
        ;that are greater than key, to one position
        ;ahead of their current position
        loop3:
            dec r14d ;j=i-1
            movsd xmm1 , qword [arrayfloats + 8*r14d] ;arr[j] moved to xmm1
            ucomisd xmm2 , xmm1 ;checking for arr[j]>key
            ja change 
        movsd qword [arrayfloats+8*r13d] , xmm2 ;writing value of key at it's position
        inc r9d ;i=i+1
        cmp r9d,dword[n] ;checking for i<n
        jl loop2
        jmp finish ;func for finding and printing kth largest element

    change: ;moving greater values ahead 
        inc r14d 
        movsd qword [arrayfloats+8*r14d] , xmm1 ;changing the value at i(lesser one)to value at j
        dec r14d
        dec r13d ; j
        cmp r13d , 0 ;looping while j>=0
        jg loop3
        movsd qword [arrayfloats+8*r13d] , xmm2 ;writing key at it's position
        inc r9d ;i
        cmp r9d,dword[n]
        jl loop2
        jmp finish
    
    finish: ;kth element will be kth largest num in sorted array
    mov r9d,dword[k] 
    dec r9d
    movsd xmm0 , qword [arrayfloats+8*r9d]
    mov rdi , fmt
    call printf

    add rsp , 8
ret

    



