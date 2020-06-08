#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int		main()
{
	int ret = read(-3, "", 1);
	printf("errno : %d\n", errno);
	printf("ret : %d\n", ret);
}
