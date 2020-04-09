# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy2.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 05:41:29 by mavileo           #+#    #+#              #
#    Updated: 2020/04/08 05:41:30 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text:
        global ft_strcpy
	    extern ft_strlen

ft_strcpy:
    push rdi ;push adresse de dest sur la stack
    mov rdi, rsi ;mets src dans rdi pour le strlen
    call ft_strlen
    mov rcx, rax ;recupere la taille dans rcx registre compteur
    pop rdi ;recupere l'adresse de dst dans la stack
    mov rax, rdi ;mets l'adresse de dst dans rax pour le return

loop:
    cmp rcx, 0 ;continue tant que le compteur est pas a zero
    je stop
    mov bl, byte [rsi] ;mets le char actuel de src dans bl car pas possible de faire uen operation sur rsi et rdi en mm temps
    mov byte [rdi], bl ;mets le char de src dans dst
    inc rsi ;caractere suivant de src
    inc rdi ;caractere suivant de dst
    dec rcx ;decremente le compteur
    jmp loop

stop:
    ret