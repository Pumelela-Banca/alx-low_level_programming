#!/usr/bin/python3

"""
Module with function to calculate 
the perimetter of a square
"""

def island_perimeter(grid):
    """
    counts the amount of consecetive ones
    """
    edges = 0
    size = 0
    for i, row in enumerate(grid):
        for j, element in enumerate(row):
            if element == 1:
                size += 1
                if (j > 0 and row[j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
