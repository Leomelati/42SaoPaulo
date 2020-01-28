#include <stdio.h>
#include <string.h>

void    ft_bzero(void *ptr, size_t n);

int		main(void)
{
	char str1[] = "banana";
    char str2[] = "banana";

    bzero(str1, 4);
    ft_bzero(str2, 4);

    printf("Bzero: %s\n", str1);
    printf("ft_bzero: %s\n", str2);
}
