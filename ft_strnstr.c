/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takonaga <takonaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:00:13 by takonaga          #+#    #+#             */
/*   Updated: 2022/10/12 22:24:53 by takonaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *seek, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	seek_len;

	i = 0;
	if (!*seek)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	seek_len = ft_strlen(seek);
	while (i < len && str[i] != '\0')
	{
		j = 0
		while ()
	}

}

