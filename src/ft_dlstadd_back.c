/* ************************************************************************** */
/*                                                                            */
/*                                                          /  /  /  /   ) )  */
/*   ft_dlstadd_back.c                                     /  /  /  /         */
/*                                                        /  /  /  /          */
/*   By: jcazako <jeancharles.cazako@gmail.com>          /  /  /  /           */
/*                                                      /  /  /  /            */
/*   Created: 2024/10/01 15:12:04 by jcazako           /  /  /  /             */
/*   Updated: 2024/10/01 15:12:04 by jcazako    ( (___/  /  (  (____/ /       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief add the new pointer to the bottom of the double list
/// @param dlst the double list
/// @param new the new double to add list
void ft_dlstadd_back(t_dlist *dlst, t_dlist *new)
{
	if (!dlst || !new)
		return;
	while (dlst->next)
		dlst = dlst->next;
	dlst->next = new;
	new->prev = dlst;
}
