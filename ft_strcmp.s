;int ft_strcmp(const char *s1, const char *s2);
            global _ft_strcmp

            section .text
_ft_strcmp:
            xor rax, rax                ; set rax to zero

.cmploop:   mov byte dl, [rdi + rax]    ; dl = byte from rdi
            mov byte cl, [rsi + rax]    ; cl = byte from rsi
            inc rax                     ; rax is a counter
            test dl, dl                 ; check if dl NULL
            jz  .f_end                  ; if yes goto f_end
            cmp dl, cl                  ; if no compare dl and cl
            je  .cmploop                ; if equal goto loop
            jl  .less                   ; if less goto less
            jg  .greater                ; else goto greater
.f_end:
            test cl, cl                 ; check if cl NULL (dl is NULL already)
            jnz .less                   ; if not goto less
            xor rax, rax                ; if yes return 0
            ret
.less:
            mov rax, -1                 ; return -1
            ret
.greater:
            mov rax, 1                  ; return 1
            ret
