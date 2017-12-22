#include "libft.h"

int	ft_nextwordlen(char *str)
{
	int	len;

	len = 0;
	while (str && *str && ft_check_charset(*str, " \t\n"))
		str++;
	while (str && *str && !ft_check_charset(*str, " \t\n"))
	{
		len++;
		str++;
	}
	return (len);
}
