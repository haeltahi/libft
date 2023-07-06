#include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
	char *dstp = (char *)dst;
	const char *srcp = (const char *)src;
	unsigned int i;
	i =0 ;
	char *temp;
	temp =(char *)malloc (sizeof (char) *(len));
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
