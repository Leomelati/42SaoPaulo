#include <string.h>
#include <stdio.h>

void    ft_memset(void *ptr, int x, size_t n);

int main(void)
{
    char str1[] = "banana";
    char str2[] = "banana";

    memset(str1, '.', 4);
    ft_memset(str2, '.', 4);

    printf("Memset: %s\n", str1);
    printf("ft_memset: %s\n", str2);
}