/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:07:43 by rpinto-r          #+#    #+#             */
/*   Updated: 2022/02/06 17:13:13 by rpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int execute_pwd(t_shell *shell)
{
	char *pwd;

	pwd = get_env(shell, "PWD");
	if (pwd)
		printf("%s\n", pwd);
	return (0);
}