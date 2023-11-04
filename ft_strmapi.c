/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:00:23 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:00:24 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*self;
	size_t	i;

	if (!s || !f)
		return (NULL);
	self = ft_strdup(s);
	if (!self)
		return (NULL);
	i = -1;
	while (self[++i])
		self[i] = (*f)(i, self[i]);
	return (self);
}