class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        from typing import List

class Solution:
    def find_row_sum(self, grid: List[List[int]], r: int, c: int) -> int:
        visited = [False] * 10
        total_sum = 0
        for i in range(3):
            row_sum = 0
            for j in range(3):
                val = grid[r + i][c + j]
                if val == 0 or val >= 10 or visited[val]:
                    return -1
                visited[val] = True
                row_sum += val
            if i == 0:
                total_sum = row_sum
            else:
                if total_sum != row_sum:
                    return -1
        return total_sum

    def find_col_sum(self, grid: List[List[int]], r: int, c: int) -> int:
        total_sum = 0
        for j in range(3):
            col_sum = 0
            for i in range(3):
                val = grid[r + i][c + j]
                col_sum += val
            if j == 0:
                total_sum = col_sum
            else:
                if total_sum != col_sum:
                    return -1
        return total_sum

    def diagonal_sum(self, grid: List[List[int]], r: int, c: int) -> int:
        sum1 = grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2]
        sum2 = grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c]
        if sum1 == sum2:
            return sum1
        return -1

    def is_magic_square(self, grid: List[List[int]], r: int, c: int) -> bool:
        row_sum = self.find_row_sum(grid, r, c)
        if row_sum == -1:
            return False
        col_sum = self.find_col_sum(grid, r, c)
        if col_sum == -1:
            return False
        diag_sum = self.diagonal_sum(grid, r, c)
        if diag_sum == -1:
            return False
        return row_sum == col_sum == diag_sum

    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        count = 0
        for i in range(rows - 2):
            for j in range(cols - 2):
                if self.is_magic_square(grid, i, j):
                    count += 1
        return count
