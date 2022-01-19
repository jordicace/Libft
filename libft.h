/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanigue <jcanigue@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:03:14 by jcanigue          #+#    #+#             */
/*   Updated: 2022/01/19 12:17:39 by jcanigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;	
}	t_list;

size_t	ft_strlen(const char *str);



#endif
