/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanigue <jcanigue@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:57:48 by jcanigue          #+#    #+#             */
/*   Updated: 2022/01/10 17:01:02 by jcanigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
	{
		if(( c >= 0 && c <= 127))
			return(1);
		return(0);
	}
