#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *s1p;
	const char *s2p;
	unsigned int i;
	s1p = (char *)s1;
	s2p = (char *)s2;
	while(s1p[i] && s2p[i] && i < n)
	{
		if(s1p[i] != s2p[i])
		{
			return(s1p[i] - s2p[i]);
			
		}
		i++;
	}
	return(0);
}
int main()
{
	char s[]="hasdsan";
	char p[]="gfsdfsdfds";
	size_t n = 3;

	printf("%d\n",ft_memcmp(s,p,n));
	printf("%d\n",memcmp(s,p,n));
}