#!/usr/bin/python3
"""
Module that calculates the perimeter of an island described in a grid.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in a grid.

    Args:
        grid (list): List of lists representing the grid.

    Returns:
        int: Perimeter of the island.

    """
    perimeter = 0

    if not grid or not grid[0]:
        return perimeter

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter
