# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/08 05:41:18 by mavileo           #+#    #+#              #
#    Updated: 2020/04/08 05:41:19 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
		global ft_strcmp
 
ft_strcmp:
	mov rax, 0 ;initialise compteur a zero

loop:
	mov al, byte [rdi]
	cmp al, 0
	je stop
	cmp byte [rsi], 0
	je stop
	cmp al, byte [rsi]
	jne stop
    inc rdi
    inc rsi
    jmp loop

stop:
    movzx rbx, byte [rsi]
    movzx rax, byte [rdi]
    sub rax, rbx
	ret ;return final