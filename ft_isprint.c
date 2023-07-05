#include "libft.h"

int ft_isprint(int c)
{
	if(c >= 40 && c<= 176)
		return 1;
	return 0;
}
// int main()
// {
// 	int ch;
// 	ch = '\t';
// 	printf("%i",ft_isprint(ch));
// }