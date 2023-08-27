section .data
    msg db "Enter number in decimal : "
    len equ $-msg
    true db "TRUE",10
    false db "FALSE",10

section .bss
    inpnum resb 200
    digitSpace resb 300 ;to Store String
    digitSpacePos resb 8 ;how far we are in the string (Pointer)

section .text
    global _start
_start:
    ;displaying Enter num in dec
    mov rax,1
    mov rdi,1
    mov rsi,msg
    mov rdx,len
    syscall

    ;take input 
    mov rax,0
    mov rdi,0
    mov rsi,inpnum
    mov rdx,200
    syscall
    
    xor r8,r8
    mov r8,inpnum

    call inputnumber ;gives decimal number in r10
    mov rax,r10
    
    call _convertRAX ;converts rax to binary 
    call _printRAXloop ;prints binary
    call _checkingPalindrome ;prints true if palindrome false if not
    
    ;exit
    mov rax,60
    mov edi,0
    syscall

_convertRAX: 
    ;stores new line at the beginning of digitSpace
    mov rcx,digitSpace ;digitSpace postion is the beginning
    mov rbx,10
    mov [rcx],rbx
    inc rcx
    mov [digitSpacePos],rcx ;rcx has initial address which is given to digitSpacePos
_convertRAXloop:
    ;converts the value in rax to decimal 
    ;and stores in digitSpace
    mov rdx,0
    mov rbx,2
    div rbx ;rbx(2) divides rax
    ;quotient stored at rax 
    ;remainder stored at rdx
    
    push rax
    add rdx,48 

    mov rcx,[digitSpacePos]
    mov [rcx],dl ;lower 8 bits of rdx given at rcx's address
    inc rcx ;to go to the next add & to update digitSpacePosition
    mov [digitSpacePos],rcx

    pop rax
    cmp rax,0
    jne _convertRAXloop

    mov r9,[digitSpacePos]
    dec r9;end location in r9
    mov r8,digitSpace
    inc r8;begining pointer in r8

    ret

_printRAXloop: ;prints the value in rax
    mov rcx,[digitSpacePos]

    ;prints a digit in rax
    mov rax,1
    mov rdi,1
    mov rsi,rcx
    mov rdx,1
    syscall

    ;decrements pointer using rcx
    mov rcx,[digitSpacePos]
    dec rcx
    mov [digitSpacePos],rcx

    cmp rcx,digitSpace;check if digitSpacePos has reached beginning 
    jge _printRAXloop
    ret

_checkingPalindrome:
    
    loopx:
        mov r14b,byte[r8] ;moving first byte in binary to r14
        mov r15b,byte[r9] ;moving last byte in binary to r15
       
        cmp r14b,r15b 
        
        jne notPali
        inc r8 ;moves first pointer to next position
        dec r9 ;moves second pointer to position before it
        cmp r8,r9 
        jl loopx ;loop till both pointers meet
    ;palindrome
    mov rax,1
    mov rdi,1
    mov rsi,true
    mov rdx,5
    syscall
    ret

    notPali: ;not a palindrome
        ;write false
        mov rax,1
        mov rdi,1
        mov rsi,false
        mov rdx,6
        syscall
    ret

inputnumber: ;converting input string in r8 into int and storing at r10
    mov r9 ,10
    xor rax , rax    
    loop1:
        mov r10 , rax
        xor r11 , r11
        mov r11b , byte [r8];moving each byte to r8 to r11b
        sub r11 , 48;converting ASCII to decimal
        
        add r10 , r11
        mov rax , r10
        
        mul r9 ;multiplying rax with r9
        inc r8 
        cmp byte [r8] , 10 ;taking input till newline(pressing Enter)
        jne loop1
    ret