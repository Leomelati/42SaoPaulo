#include <stdio.h>
#include <ctype.h>

int 	ft_isalpha(int c);

int		main(void)
{
	printf("ft_isalpha - 0: %d\n", ft_isalpha(0));
	printf("isalpha - 0: %d\n", isalpha(0));
	printf("ft_isalpha - 1: %d\n", ft_isalpha(1));
	printf("isalpha - 1: %d\n", isalpha(1));
	printf("ft_isalpha - a: %d\n", ft_isalpha('a'));
	printf("isalpha - a: %d\n", isalpha('a'));
	printf("ft_isalpha - g: %d\n", ft_isalpha('g'));
	printf("isalpha - g: %d\n", isalpha('g'));
	printf("ft_isalpha - z: %d\n", ft_isalpha('z'));
	printf("isalpha - z: %d\n", isalpha('z'));
	printf("ft_isalpha - A: %d\n", ft_isalpha('A'));
	printf("isalpha - A: %d\n", isalpha('A'));
	printf("ft_isalpha - G: %d\n", ft_isalpha('G'));
	printf("isalpha - G: %d\n", isalpha('G'));
	printf("ft_isalpha - Z: %d\n", ft_isalpha('Z'));
	printf("isalpha - Z: %d\n", isalpha('Z'));
	return (0);
}