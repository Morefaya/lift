/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:45:13 by jcazako           #+#    #+#             */
/*   Updated: 2016/01/26 20:33:24 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		temp[len + 1];

	temp[len] = '\0';
	ft_memcpy(temp, src_i, len);
	ft_memcpy(dst_i, temp, len);
	return (dst);
}
