/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felayan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:46:14 by felayan           #+#    #+#             */
/*   Updated: 2025/07/01 20:48:00 by felayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minishell.h"

int	main(int ac, char **av, char **envp)
{
	t_data data;

	(void)ac;
	(void)av;
	ft_memset(&data, 0, sizeof(data));
	start_shell(&data, envp);
	clean_shell(&data, 0);
}
