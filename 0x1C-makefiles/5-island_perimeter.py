#!/usr/bin/python3
"""This is a function that calculate the perimeter of an island"""


def island_perimeter(grid):
    """Here is the math behind it and in the end it returns the perimeter of the island"""
    border = 0
    size = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size = size + 1
                if (j > 0 and grid[i][j - 1] == 1):
                    border = border + 1
                if (i > 0 and grid[i - 1][j] == 1):
                    border = border + 1
    return ((size * 4) - (border * 2))
