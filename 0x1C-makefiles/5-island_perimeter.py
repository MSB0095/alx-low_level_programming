#!/usr/bin/python3
"""
Island Perimeter
You are given a map in form of a two-dimensional
integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally).
 The grid is completely surrounded by water, and
there is exactly one island (i.e., one or more connected land cells).
The island doesn't have "lakes" (water inside
that isn't connected to the water around the island).
One cell is a square with side length 1. The grid is rectangular,
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island described in grid
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if i < height - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j < width - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
    return perimeter
