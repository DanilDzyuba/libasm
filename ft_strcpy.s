;char *ft_strcpy(char * dst, const char * src);
            global _ft_strcpy

            section .text
_ft_strcpy:
            push rdi            ; push to stack for return
            cld                 ; set forward direction for string
.loop:
            lodsb               ; read rsi byte and inc rsi
            stosb               ; save byte to rdi and inc rdi
            cmp al, 0           ; compare if byte NULL
            jne .loop           ; if not goto loop
            pop rdi             ; pop from stack rdi
            mov rax, rdi        ; move for return
            ret                 ; return rax