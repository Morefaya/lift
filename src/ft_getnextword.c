#include "libft.h"

char	*ft_getnextword(char *str)
{
	char	*next_word;
	int	len;

	if (!str || !(len = ft_nextwordlen(str)))
		return (NULL);
	else if (!(next_word = ft_strnew(len)))
		return (NULL);
	while (*str && ft_check_charset(*str, " \t\n"))
		str++;
	if (*str)
		ft_strncat(next_word, str, len);
	return (next_word);
}
