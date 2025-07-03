/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queen_puzzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:15:55 by anadal-g          #+#    #+#             */
/*   Updated: 2025/07/03 16:24:55 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include <unistd.h>

#define SIZE 10  // Tamaño del tablero (10x10)

// Imprime una solución válida del tablero
void print_solution(int board[SIZE])
{
	int col = 0;
	char digit;
	while (col < SIZE)
	{
		digit = board[col] + '0';
		write(1, &digit, 1);
		col++;
	}
	write(1, "\n", 1);
}

// Calcula el valor absoluto de la diferencia entre dos enteros
int abs_diff(int a, int b)
{
	if (a > b)
		return a - b;
	else
		return b - a;
}

// Verifica si una reina puede colocarse en (row, col)
int is_valid_position(int board[SIZE], int row, int col)
{
	int prev_col = 0;
	while (prev_col < col)
	{
		// Verifica misma fila o diagonales en conflicto
		if (board[prev_col] == row || abs_diff(board[prev_col], row) == col - prev_col)
			return 0;
		prev_col++;
	}
	return 1;
}

// Algoritmo recursivo para colocar reinas en el tablero
void solve_queens(int board[SIZE], int col, int *solution_count)
{
	int row = 0;
	if (col == SIZE)
	{
		print_solution(board);
		(*solution_count)++;
		return;
	}
	while (row < SIZE)
	{
		if (is_valid_position(board, row, col)) 
		{
			board[col] = row;
			solve_queens(board, col + 1, solution_count);
		}
		row++;
	}
}

// Función principal del puzzle de las 10 reinas
int ft_ten_queens_puzzle(void)
{
	int board[SIZE];
	int i = 0;
	int solution_count = 0;

	// Inicializa el tablero con -1 (sin reinas)
	while (i < SIZE)
	{
		board[i] = -1;
		i++;
	}
	solve_queens(board, 0, &solution_count);
	return solution_count;
}


int	main(void) {
	int total;

	total = ft_ten_queens_puzzle();
	printf("Total de soluciones: %d\n", total);
	return 0;
}
