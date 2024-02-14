/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:49:34 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/18 14:49:37 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_solong.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && i < n - 1)
	{
		if ((unsigned char) *s1 == (unsigned char) *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return ((unsigned char) *s1 - (unsigned char) *s2);
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
