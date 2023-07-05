#include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
	char *dstp = (char *)dst;
	const char *srcp = (const char *)src;
	unsigned int i;
	i =0 ;
	char *temp;
	temp =(char *)malloc (sizeof (char) *(len));
		// if(static_cast<size_t>(temp[i]) == len)
		// {
		// 	return NULL;
		// }
	while(i < len)
	{
		
		temp[i] = srcp[i];
		i++;
	}
	// }
	// }
	i =0;
	while(i < len)
	{	
		dstp[i] =temp[i];
		i++;
	}
	free (temp);
	return (dstp);
	
}
// int main()
// {
// char src[] = "abcde";
	
// 	printf("%s\n",ft_memmove(src+2,src,3));
// }