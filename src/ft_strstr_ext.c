#include "libft.h"

char	*ft_strstr_ext(char *str, char *ext)
{
	char	*start;
	char	*new;
	int	len;
	
	if (!str || !ext || !(start = ft_strstr(str, ext)))
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(str) - ft_strlen(ext))))
		return (NULL);
	ft_strncpy(new, str, start - str);
	len = start - str;
	ft_strcpy(new + len, start + ft_strlen(ext));
	return (new);
}
