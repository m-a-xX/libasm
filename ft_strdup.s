section .text:
        global ft_strdup
        extern malloc
	    extern ft_strlen
	    extern ft_strcpy

ft_strdup:
    cmp rdi, 0
    je error
    call ft_strlen
    push rdi
    mov rdi, rax
    add rdi, 1
    call malloc
    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret

error:
    ret;