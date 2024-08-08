/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:31:40 by minfinga          #+#    #+#             */
/*   Updated: 2024/08/08 18:26:20 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static char	count_words(char *str, char c)
{
	int	count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == c)
			++str;
		while (*str != c && *str)
		{
			if (!inside_word)
			{
				count++;
				inside_word = true;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char c)
{
	static int	cursor;
	char	*next_word;
	int	len;
	int	i;
	
	len = 0;
	i = 0;
	
	while (str[cursor] == c)
		cursor++;
	while (str[cursor + len] != c && (str[cursor +len]))
		len++;
	next_word = malloc(sizeof(char) * len + 1);
	if (!next_word)
		return (NULL);
	while (str[cursor] != c && str[cursor])
		next_word[i++] = str[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *str, char c)
{
	int	words_count;
	int	i;
	char	**result_array;

	i = 0;
	words_count = count_words(str, c);
	if (!words_count)
		exit (1);
	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result_array)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result_array[i] = malloc(sizeof(char));
			if (!result_array[i])
				return (NULL);
			result_array[i++][0] = '\0';
			continue ;
		}
		result_array[i++] = get_next_word(str, c);
	}
	result_array[i] = NULL;
	return (result_array);
}

void	free_split(char **result_array)
{
	char	**current;
	
	current = result_array;
	if (result_array == NULL)
		return ;
	
	while (*current)
	{
		free(*current);
		current++;
	}
	free(result_array);	
}