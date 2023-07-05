#include "libft.h"

void* ft_memcpy(void *dst, const void *src, size_t len)
{
	char *dstp= (char*)dst;
	const char *srcp = (char*) src;
	unsigned int i;
	i =0 ;
	while(i < len)
	{
		dstp[i] = srcp[i];
		i++;
	}
	return (dstp);
}
// int main()
// {
// 	char src[] = "abcde";
	
// 	printf("%s\n",ft_memcpy(src+2,src,3));

// }