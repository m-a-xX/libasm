# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 05:41:24 by mavileo           #+#    #+#              #
#    Updated: 2020/04/09 00:55:40 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text:
        global ft_strcpy

ft_strcpy:
    mov rax, rdi
    jmp loop

loop:
    mov bl, byte [rsi]
    cmp bl, 0
    je stop
    mov byte [rdi], bl
    inc rsi
    inc rdi
    jmp loop

stop:
    mov byte [rdi], 0
    ret