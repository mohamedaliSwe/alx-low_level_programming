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

    # The number of cells that represent land
    cells = 1

    # Perimeter
    perimeter = 0

    # Iterate through the rows and columns
    for i in range (rows):
        for j in range (cols):
            # If the cell is land, check its surroundings.
            if grid[i][j] == 1:
                # Perimeter
                cells += 1
    perimeter = cells * 2

    return perimeter
