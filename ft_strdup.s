# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 05:41:09 by mavileo           #+#    #+#              #
#    Updated: 2020/04/09 02:36:01 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text:
        global ft_strdup
        extern malloc
	    extern ft_strlen
	    extern ft_strcpy

ft_strdup:
    call ft_strlen
    mov rsi, rdi
    mov rdi, rax
    add rdi, 1
    call malloc
    mov rdi, rax
    call ft_strcpy
    mov rax, rdi
    ret