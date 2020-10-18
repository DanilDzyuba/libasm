; char *ft_strdup(const char *s1);

            global _ft_strdup
            extern _malloc
            extern _ft_strlen
            extern _ft_strcpy

            section .text
_ft_strdup:
            call _ft_strlen     ; get rax = strlen
            push rdi            ; save *s1
            inc rax             ; += 1 for \0
            mov rdi, rax        ; malloc get num of bytes in rdi
            call _malloc
            test rax, rax       ; if malloc returns NULL
            je .error           ; goto error
            mov rdi, rax        ; rax = allocated memory
            pop rsi             ; = *s1
            call _ft_strcpy     ; it will copy rsi to rdi and mov rdi to rax
            ret                 ; return rax
.error:
            ret