#include "libft.h"
int	ft_toupper(int c)
{
	if(c >='a' && c <= 'z')
	{
		return(c -32);
	}
	return(c);
}
// int main()
// {
// 	printf("%c",ft_toupper('z'));
// }