/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_inttab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atardif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:54:07 by atardif           #+#    #+#             */
/*   Updated: 2023/01/31 17:30:08 by atardif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_free_inttab(int **tab, int tabsize)
{
	int	**tmp;
	int x;

	tmp = tab;
	x = 0;
	while (x < tabsize)
	{
		free(tmp[x]);
		x++;
	}
	free(tab);
}
