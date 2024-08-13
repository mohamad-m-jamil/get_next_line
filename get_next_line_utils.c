/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:12:15 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/27 19:07:33 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str, char stop)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != stop)
		len++;
	if (str[len] && str[len] == stop)
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*result;
	int		len;
	int		i;

	if (!str)
		return (ft_strdup(""));
	len = ft_strlen(str, '\0');
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_before_newline(char *str)
{
	char	*result;
	int		len;
	int		i;

	len = ft_strlen(str, '\n');
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		result[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_after_newline(char *str)
{
	char	*result;
	int		i;
	int		j;

	i = ft_strlen(str, '\n');
	j = ft_strlen(str, '\0');
	result = (char *)malloc((j - i) + 1);
	if (!result)
		return (NULL);
	j = 0;
	while (str[i + j])
	{
		result[j] = str[i + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

int	newline_reached(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
