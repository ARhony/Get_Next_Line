/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_until.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:09:59 by aramon            #+#    #+#             */
/*   Updated: 2017/01/14 05:05:00 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_copy_until(char *s1, char *s2, char target)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s2[count] != '\0' && s2[count] != target)
		count++;
	s1 = (char*)malloc(sizeof(char) * count + 1);
	s1[count + 1] = '\0';
	while (i < count)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
