/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 05:45:42 by iganich           #+#    #+#             */
/*   Updated: 2017/10/31 05:46:26 by iganich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, const char *s2)
{
	int		i;
	char	*s1;

	s1 = (char*)str;
	if (*s2 == '\0')
		return (s1);
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			i = -1;
			while (s2[++i] != '\0')
				if (s2[i] != s1[i])
					break ;
			if (s2[i] == '\0')
				return (s1);
		}
		s1++;
	}
	return (NULL);
}
