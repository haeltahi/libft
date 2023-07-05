#include "libft.h"

void *ft_memset(void *str,int c,size_t count)
{
	char *j = (char *)str;
	size_t i;
	i = 0;
	while(i < count)
	{
		j[i]=c;
		i++;
	}
	return (j);
}
// int main()
// {
// 	char str[] = "hassan";
// 	printf("%s",ft_memset(str,'*',3));
// }