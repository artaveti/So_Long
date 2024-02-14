/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_solong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:46:12 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/18 20:28:42 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_solong.h"

int	main(int argc, char *argv[])
{
	t_data	game;

	game.xpm_size = 80;
	ft_check_argc_and_name(argc, argv);
	ft_check_map(argv, &game);
	game.mlx = mlx_init();
	game.mlx_win = mlx_new_window(game.mlx, game.x_of_window * game.xpm_size,
			game.y_of_window * game.xpm_size, "./so_long");
	ft_xpm_file_to_image(&game);
	game.collectible_count = 0;
	ft_put_image_to_window(&game);
	game.movement_count = 0;
	ft_put_movement_count(&game);
	mlx_key_hook (game.mlx_win, &ft_keypress, &game);
	mlx_hook(game.mlx_win, 17, 0, &ft_close_with_cross, &game);
	mlx_loop_hook(game.mlx, &ft_put_animation, &game);
	mlx_loop(game.mlx);
	mlx_destroy_window(game.mlx, game.mlx_win);
	free(game.mlx);
	exit(EXIT_SUCCESS);
}
