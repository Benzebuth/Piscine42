/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:48:17 by hsabir            #+#    #+#             */
/*   Updated: 2021/07/18 16:50:32 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	scan_clues(int grid[4][4], int *clues);

int free_cases(int grid[4][4], int *line, int *col)
{
     // We have to find the free cases in the grid
}


int	backtracking(int grid[4][4], int *clues)
{
	int	line;
	int	col;
	int	i;
	int	j;

	j = 1;
	i = 0;
	if ((free_cases(grid)) && (scan_clues())
		return (1);
	while (j <= 4)
	{
		if (free_case(grid, line, col, j))
		{
			grid[line][col] = j;
			if (backtracking(grid, clues) == 1)
				return (1);
			grid[line][col] = 0;
		}
		j++;
	}
	return (0);
}
