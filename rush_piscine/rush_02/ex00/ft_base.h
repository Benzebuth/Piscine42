/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:25:43 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/25 00:06:48 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BASE_H
# define FT_BASE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_one_arg(char *str);
char	*ft_create_lib(void);
struct s_lib_en	*ft_create_tab_struct(char *lib);

typedef struct s_lib_en
{
	char	*id;
	char	*value;
}	t_lib_en;

#endif
