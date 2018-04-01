/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:09:18 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/03 16:11:56 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	size;
	size_t	i;

	if (!s)
		return ;
	i = 0;
	size = ft_strlen(s);
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
}
