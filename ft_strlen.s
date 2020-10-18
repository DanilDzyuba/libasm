;size_t ft_strlen(char *str);
            global _ft_strlen

            section .text
_ft_strlen:
            mov rax, -1               ; set counter to zero
.loop:
            inc rax                   ; increment counter
            cmp byte [rdi + rax], 0   ; compare *(str + i) == NULL
            jne .loop                 ; repeat if not
            ret                       ; return rax