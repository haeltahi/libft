#include "libft.h"

	char *ft_strchr(const char *s, int c)
	{
		unsigned int i;
		char * j;
		i = 0;
		while(s[i])
		{
			if(s[i] == c)
			{
				j = (char *)&s[i];
				return(j);	
			}
			i++;	
		}
		return NULL;
	}
	// int main()
	// {
	// 	char s[]="jan";
	// 	int c = 'n';
	// 	const char *p = ft_strchr(s,c);
	// 	printf("'%c' is in location: %ld\n", c, p-s);
	// }