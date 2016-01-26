/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:04:50 by jcazako           #+#    #+#             */
/*   Updated: 2016/01/26 20:23:33 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t len)
{
	char	*new;

	if (!(new = malloc(len)))
		return (NULL);
	ft_memset(new, 0, size);
	return (new);
}
