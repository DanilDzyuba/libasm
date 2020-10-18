; size_t ft_read(int fd, void *buf, size_t nbyte);

            global _ft_read
            extern ___error

            section .text
_ft_read:
            mov rax, 0x2000003        ; read instruction
            syscall                   ; system call
            jc .error                 ; if syscall got error it set CF and error code returned in rax
            ret
.error:
            push rdx                  ; we will use rdx later so push it to stack
            mov rdx, rax              ; save error code to rdx
            call ___error             ; get errno pointer
            mov [rax], rdx            ; write error code in errno adress
            pop rdx                   ; set rdx as it was
            mov rax, -1               ; set returned value to -1
            ret