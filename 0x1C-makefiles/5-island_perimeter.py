#!/usr/bin/python3
"""
This module contains the function island_perimeter
which calculates the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid;

    Args:
        grid (list of list): The grid representing the map.

    Returns:
        int : The perimeter of the island.
    """
    # Get the rows of the grid
    rows = len(grid)

    # Get the columns of the grid
    cols = len(grid[0])

    # Perimeter of the island
    perimeter = 0

    if not grid:
        return 0

    # Iterate through the rows and columns
    for i in range(rows):
        for j in range(cols):
            # If the cell is land, check its surroundings.
            if grid[i][j] == 1:
                # Perimeter
                perimeter += 4

                # Subtract 2 for each adjacent land cell
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter
