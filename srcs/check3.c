/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:07:26 by rpinto-r          #+#    #+#             */
/*   Updated: 2022/03/17 09:52:03 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_builtin_no_pipe_command( t_cmd *cmd)
{
	if (str_compare(cmd->name, "cd") == 0)
		return (1);
	else if (str_compare(cmd->name, "exit") == 0)
		return (1);
	else if (str_compare(cmd->name, "export") == 0)
		return (1);
	else if (str_compare(cmd->name, "unset") == 0)
		return (1);
	else
		return (0);
}
