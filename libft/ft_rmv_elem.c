/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmvelem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:24:58 by aramon            #+#    #+#             */
/*   Updated: 2017/01/14 05:05:35 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_rmv_elem(char **matrix, int n)
{
	int		i;
	int		j;
	char	*tmp;
	int		count;
	char	**new_matrix;

	i = 0;
	j = 0;
	count = 0;
	if (matrix == NULL || matrix[n] == NULL)
		return (NULL);
	while (matrix[i++] != NULL)
		count++;
	if (n > count || n == 0)
		return (NULL);
	new_matrix = (char**)malloc(sizeof(char*) * (count));
	i = 0;
	tmp = matrix[n - 1];
	while (i < count)
	{
		if (matrix[i] == tmp)
			i++;
		new_matrix[j++] = matrix[i++];
	}
	return (new_matrix);
}
