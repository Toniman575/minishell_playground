/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulti.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:57:52 by asadik            #+#    #+#             */
/*   Updated: 2026/06/24 16:52:10 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_state
{
	s_tokenlst	**tokens;
}		t_state;

typedef enum e_tokentype
{
	COMMAND,
	REDIRECTION,
	STRING
}	t_rtokentype;

typedef union u_value
{
	t_command		command;
	t_redirection	redirection;
	char			*str;
}	t_value;

typedef struct s_command
{
	char	*name;
	char	**args;
}		t_command;

typedef struct s_redirection
{
	char	*name;
}		t_redirection;

typedef struct s_tokenlst
{
	t_rtokentype	type;
	t_rreturn		value;
	t_tokenlst	*next
}	t_tokenlst;