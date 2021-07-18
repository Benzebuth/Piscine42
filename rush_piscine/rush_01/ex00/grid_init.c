/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:26:07 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/18 16:10:12 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	backtracking(int grid[4][4], int *clues);
void	ft_putstr(char *c);
void	output(int grid[4][4]);

//a mettre en bas peut etre
void	put_four_p2(int grid[4][4], int *clues, int position)
{
	int charge;

	charge = 0;
	while ((clues[position]) && position <= 15)
	{
		if ((clues[position] == 4) && ((position >= 8 && position <= 11)))
			while (charge < 4)
			{
				grid[position % 4][charge] = charge + 1;
				charge++;
			}
		charge = 4;
		if ((clues[position] == 4) && ((position >= 12 && position <= 15)))
			while (charge > 0)
			{
				grid[4 % charge][position - 4] = charge;
				charge--;
			}
		position++;
	}
}

void	put_four(int grid[4][4], int *clues)
{
	int	position;
	int	charge;

	position = 0;
	charge = 0;
	while ((clues[position]) && position < 8)
	{
		if ((clues[position] == 4) && ((position >= 0 && position <= 3)))
			while (charge < 4)
			{
				grid[charge][position] = charge + 1;
				charge++;
			}
		charge = 4;
		if ((clues[position] == 4) && (position >= 4 && position <= 7))
			while (charge > 0)
			{
				grid[4 - charge][(position % 4)] = charge;
				charge--;
			}
		position++;
	}
	put_four_p2(grid, clues, position);
}

void	put_one(int grid[4][4], int *clues)//test **grid 
{
	int	position;

	position = 0;
	while (clues[position])
	{
		if ((clues[position] == 1) && ((position >= 0) && (position <= 3)))// test first line
			grid[0][position] = 4;
		if ((clues[position] == 1) && ((position >= 4) && (position <= 7)))
			grid[3][position - 4] = 4;
		if ((clues[position] == 1) && ((position >= 8) && (position <= 11)))
			grid[position - 8][0] = 4;
		if ((clues[position] == 1) && ((position >= 12) && (position <= 15)))
			grid[position - 12][3] = 4;
		position++;
	}
	return ;
}

int	init_grid(int *clues)
{
	int	line;
	int	col;
	int	grid[4][4];

	line = 0;
	col = 0;
	while (line < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[line][col] = 0;
			col++;
		}
		line++;
	}
	put_one(grid, clues);
	put_four(grid, clues);
	if ((backtracking(grid, clues)) == 1)
		output(grid);
	else
		ft_putstr("Impossible to play this GAME");
	return (0);
}
