/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_coord_exit_red_green.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:20:08 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/18 15:25:49 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_solong.h"

void	ft_check_is_coord_exit_red(t_data *game)
{
	int	x;
	int	y;

	x = game->player_coord_x;
	y = game->player_coord_y;
	if (game->collectible_count > 0)
	{
		if (game->splitted_str[y - 1][x] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_red, x * game->xpm_size,
				(y - 1) * game->xpm_size);
		else if (game->splitted_str[y + 1][x] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_red, x * game->xpm_size,
				(y + 1) * game->xpm_size);
		else if (game->splitted_str[y][x - 1] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_red, (x - 1) * game->xpm_size,
				y * game->xpm_size);
		else if (game->splitted_str[y][x + 1] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_red, (x + 1) * game->xpm_size,
				y * game->xpm_size);
	}
	return ;
}

void	ft_check_is_coord_exit_green(t_data *game)
{
	int	x;
	int	y;

	x = game->player_coord_x;
	y = game->player_coord_y;
	if (game->collectible_count == 0)
	{
		if (game->splitted_str[y - 1][x] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_green, x * game->xpm_size,
				(y - 1) * game->xpm_size);
		else if (game->splitted_str[y + 1][x] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_green, x * game->xpm_size,
				(y + 1) * game->xpm_size);
		else if (game->splitted_str[y][x - 1] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_green, (x - 1) * game->xpm_size,
				y * game->xpm_size);
		else if (game->splitted_str[y][x + 1] == 'E')
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->img_of_exit_green, (x + 1) * game->xpm_size,
				y * game->xpm_size);
	}
	return ;
}
