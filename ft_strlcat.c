#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned	int i;
	i = 0;
	int lendest;
	lendest= 0;
	while(dest[lendest])
	{
		lendest++;
	}
	while(src[i] && i < size)
	{
		dest[lendest++] = src[i++];
	}
	dest[lendest] = '\0';
	return(lendest);
}
// int main()
// {
// 	char str[]="hassan";
// 	char str1[]="abdullah";
// 	printf("%zu\n",ft_strlcat(str1 ,str ,14));
// 	printf("%zu\n",strlcat(str1,str,14));
// }