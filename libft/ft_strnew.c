/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrice <hrice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:12:53 by hrice             #+#    #+#             */
/*   Updated: 2018/12/11 15:34:33 by hrice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 == 0)
		return (NULL);
	str = (char *)malloc(size + 1);
	if (str)
		return (ft_memset(str, '\0', size + 1));
	else
		return (NULL);
}
