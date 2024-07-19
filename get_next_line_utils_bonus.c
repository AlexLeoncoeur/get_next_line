/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:15:51 by aarenas-          #+#    #+#             */
/*   Updated: 2024/04/26 10:50:24 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_in_str(const char *s, int c)
{
	unsigned char	aux;
	size_t			i;
	char			*tmp;

	i = 0;
	aux = (char)c;
	tmp = (char *)s;
	if (tmp == NULL)
		return (0);
	while (tmp[i] != '\0')
	{
		if (tmp[i] == aux)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		size;
	char		*aux;
	int			i;
	int			j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	aux = malloc(sizeof(char) * (size + 1));
	if (aux == NULL)
		return (0);
	while (s1 && s1[i] != '\0')
	{
		aux[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		aux[i + j] = s2[j];
		j++;
	}
	aux[i + j] = '\0';
	return (aux);
}

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	int				i;
	int				limit;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	i = 0;
	limit = count * size;
	while (i < limit)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}
