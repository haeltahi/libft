#include "libft.h"

// int ft_strlcpy(char * restrict dst,const char * restrict src,size_t dstsize)
// {
// 	unsigned int i;
// 	unsigned int j;
// 	i = 0;
// 	j = 0;
// 	while(src[j])
// 	{
// 		j++;
// 	}
// 	while(i < dstsize - 1 && src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return(j);
// }
// int main()
// {
// 	char dst[]="annhghfghgghfghgfhfshf";
// 	char src[]="hassan";
// 	printf("%d\n",ft_strlcpy(dst,src,0));
// 	printf("%lu",strlcpy(dst,src,0));
// }