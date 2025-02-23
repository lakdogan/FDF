/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_lines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:10:29 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:06:46 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Processes a single line: checks capacity, reallocates if necessary,
// and adds the line.
// Check if the current size exceeds or equals the allocated capacity
// Attempt to allocate more space for lines
// If allocation fails, free the current line and return an error
// Add the line to the array and update size and line count
static int	process_line(t_data *data, char *line)
{
	size_t	len;

	len = ft_strlen(line);
	if (len > 0 && line[len - 1] == '\n')
		line[len - 1] = '\0';
	if (data->line_reader.size >= data->line_reader.capacity)
	{
		if (allocate_lines(data) == 0)
		{
			free(line);
			return (-1);
		}
	}
	data->line_reader.lines[data->line_reader.size++] = line;
	data->line_reader.line_count++;
	return (1);
}

// Function to read all lines from the file descriptor
// and store them in the line_reader structure
// Allocate initial space for storing lines
// Read the first line from the file descriptor
// Continue reading and processing lines until no more lines are available
// Delegate the processing of each line to the process_line function
// Read the next line
// Return success after all lines are read
int	ft_read_lines(t_data *data)
{
	char	*line;

	if (allocate_lines(data) == 0)
	{
		perror("Error allocating initial lines");
		return (-1);
	}
	line = get_next_line(data->line_reader.fd);
	if (line == NULL)
	{
		perror("Error getting first line");
		return (-1);
	}
	while (line != NULL)
	{
		if (process_line(data, line) == -1)
		{
			return (-1);
		}
		line = get_next_line(data->line_reader.fd);
	}
	return (1);
}
