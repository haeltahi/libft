#include "libft.h"

size_t ft_strlen(const char *c)
{
	size_t i;
	i = 0;
	while(c[i])
		i++;
	return(i);
}
// int main()
// {
// 	char str[] = "hassan";
// 	printf("%zu",ft_strlen(str));
// }	