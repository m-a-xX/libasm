/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 01:39:26 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/09 02:27:26 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

extern size_t ft_strlen(char *str);
extern int ft_strcmp(const char *s1, const char *s2);
extern char *ft_strcpy(char *dest, const char *src);
extern char *ft_strdup(const char *s);
extern ssize_t ft_write(int fd, const void *buf, size_t count);
extern ssize_t ft_read(int fd, const void *buf, size_t count);

void	test_strlen()
{
	printf("-----------------\n");
	printf("----FT_STRLEN----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s\n", "string", "\"\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen(""));
	printf("%-15s : %zu\n\n", "strlen", strlen(""));

	printf("%-15s : %s\n", "string", "\"Salut ca va ?\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("Salut ca va ?"));
	printf("%-15s : %zu\n\n", "strlen", strlen("Salut ca va ?"));

	printf("%-15s : %s\n", "string", "\"0123456789\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("0123456789"));
	printf("%-15s : %zu\n\n", "strlen", strlen("0123456789"));

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("abcdefghijklmoopqrstuvwxyz"));
	printf("%-15s : %zu\n\n", "strlen", strlen("abcdefghijklmoopqrstuvwxyz"));
}

void	test_strcmp()
{
	printf("-----------------\n");
	printf("----FT_STRCMP----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s %s\n", "strings", "\"\"", "\"Salut ca va ?\"");
	printf("%-15s : %d\n", "ft_strcmp", ft_strcmp("", "Salut ca va ?"));
	printf("%-15s : %d\n\n", "strcmp", strcmp("", "Salut ca va ?"));

	printf("%-15s : %s %s\n", "strings", "\"0123456789\"", "\"0123446789\"");
	printf("%-15s : %d\n", "ft_strcmp", ft_strcmp("0123456789", "0123446789"));
	printf("%-15s : %d\n\n", "strcmp", strcmp("0123456789", "0123446789"));

	printf("%-15s : %s %s\n", "strings", "\"tropico\"", "\"caprisun\"");
	printf("%-15s : %d\n", "ft_strcmp", ft_strcmp("tropico", "caprisun"));
	printf("%-15s : %d\n\n", "strcmp", strcmp("tropico", "caprisun"));
}

void	test_strcpy()
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;

	s1 = malloc(sizeof(char) * 14);
	s2 = malloc(sizeof(char) * 11);
	s3 = malloc(sizeof(char) * 27);
	s4 = malloc(sizeof(char) * 1);

	printf("-----------------\n");
	printf("----FT_STRCPY----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s\n", "string", "\"Salut ca va ?\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s1, "Salut ca va ?"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s1, "Salut ca va ?"));

	printf("%-15s : %s\n", "string", "\"0123446789\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s2, "0123446789"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s2, "0123446789"));

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s3, "abcdefghijklmoopqrstuvwxyz"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s3, "abcdefghijklmoopqrstuvwxyz"));

	printf("%-15s : %s\n", "string", "\"\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s4, ""));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s4, ""));
}

void	test_strdup()
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;

	printf("-----------------\n");
	printf("----FT_STRDUP----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s\n", "string", "\"Salut ca va ?\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s1, "Salut ca va ?"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s1, "Salut ca va ?"));

	printf("%-15s : %s\n", "string", "\"0123446789\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s2, "0123446789"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s2, "0123446789"));

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s3, "abcdefghijklmoopqrstuvwxyz"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s3, "abcdefghijklmoopqrstuvwxyz"));

	printf("%-15s : %s\n", "string", "\"\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s4, ""));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s4, ""));
}

void	test_write()
{
	int i;
	int j;

	printf("----------------\n");
	printf("----FT_WRITE----\n");
	printf("----------------\n\n");

	printf("%-15s : %s\n", "string", "\"\"");
	i = ft_write(1, "", 0);
	write(1, "\n", 1);
	j = write(1, "", 0);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write", i);
	printf("%-15s : %d\n\n", "write", j);

	printf("%-15s : %s\n", "string", "\"Salut ca va ?\"");
	i = ft_write(1, "Salut ca va ?", 14);
	write(1, "\n", 1);
	j = write(1, "Salut ca va ?", 14);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write", i);
	printf("%-15s : %d\n\n", "write", j);

	printf("%-15s : %s\n", "string", "\"0123446789\"");
	i = ft_write(1, "0123446789", 10);
	write(1, "\n", 1);
	j = write(1, "0123446789", 10);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write", i);
	printf("%-15s : %d\n\n", "write", j);

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	i = ft_write(1, "abcdefghijklmoopqrstuvwxyz", 26);
	write(1, "\n", 1);
	j = write(1, "abcdefghijklmoopqrstuvwxyz", 26);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write", i);
	printf("%-15s : %d\n\n", "write", j);
}

int main()
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
}
