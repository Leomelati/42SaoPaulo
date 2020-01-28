#include <stdio.h>
#include <string.h>

size_t		ft_strlen(const char *str);

int main(void)
{
	char str1[] = "banana";

    printf("Strlen: %lu\n", strlen(str1));
    printf("ft_strlen: %lu\n", ft_strlen(str1));

	return (0);
}