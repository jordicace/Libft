/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanigue <jcanigue@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:19:50 by jcanigue          #+#    #+#             */
/*   Updated: 2022/01/10 14:28:53 by jcanigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha (int c)
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return(1);
		return(0);
	}
