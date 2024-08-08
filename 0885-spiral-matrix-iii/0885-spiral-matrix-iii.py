class Solution:
    def spiralMatrixIII(self, rows: int, cols: int, rStart: int, cStart: int) -> List[List[int]]:
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]  # East, South, West, North
        steps = 1
        x, y = rStart, cStart
        result = [[x, y]]
        dir_index = 0

        while len(result) < rows * cols:
            for _ in range(2):  # Change direction every two sides
                for _ in range(steps):
                    x += directions[dir_index][0]
                    y += directions[dir_index][1]
                    if 0 <= x < rows and 0 <= y < cols:
                        result.append([x, y])
                dir_index = (dir_index + 1) % 4
            steps += 1  # Increase the step size after each full cycle

        return result

