/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argc_and_name.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:13:20 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/18 20:28:24 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_solong.h"

void	ft_check_argc_and_name(int argc, char *argv[])
{
	size_t	i;
	char	*c;

	if (argc != 2)
	{
		ft_put_error("Error: Wrong argc quantity");
		exit(EXIT_FAILURE);
	}
	i = ft_strlen(argv[1]);
	c = &argv[1][i - 4];
	if (ft_strncmp(c, ".ber", 4))
	{
		ft_put_error("Error: Wrong filename");
		exit(EXIT_FAILURE);
	}
	return ;
}
