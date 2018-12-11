/*
** Insert a string in an other string.
*/

#include "libft.h"

char	*ft_strstr_ins(char *str, char *ins, int start)
{
	char	*new;
	int	len_str;
	int	len_ins;

	new = NULL;
	if (str && ins && start >= 0)
	{
		if ((len_str = ft_strlen(str) < start)
			return (NULL);
		else if (!(len_ins = ft_strlen(ins)))
			return (ft_strdup(str));
		else if (!(new = ft_strnew(len_str + len_ins)))
			return (NULL);
		ft_strncpy(new, str, start);
		ft_strcpy(new + start, ins);
		ft_strcpy(new + start + len_ins, str + start);
	}
	return (new);
}
