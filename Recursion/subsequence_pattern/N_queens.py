from typing import List # this is added to validate the hinting of the function solveNQueens
class Solution:
    def __init__(self):
        self.N = 0
        self.ans = []
        self.col = []
        self.diagonal = []
        self.anti_diagonal = []
    def helper(self,row,board):
        if row == self.N:
            temp = []
            for rows in board:
                temp.append("".join(rows))
            self.ans.append(temp)
            return
        for c in range(self.N):
            if (self.col[c] == 1 or self.diagonal[row+c] == 1 or self.anti_diagonal[row - c + self.N - 1] == 1):
                continue
            board[row][c] = 'Q'
            self.col[c] = 1
            self.diagonal[row+c] = 1
            self.anti_diagonal[row - c + self.N - 1] = 1
            self.helper(row+1,board)
            board[row][c] = '.'
            self.col[c] = 0
            self.diagonal[row+c] = 0
            self.anti_diagonal[row - c + self.N - 1] = 0
    def solveNQueens(self, n: int) -> List[List[str]]:
        board = []
        for i in range(n):
            row = []
            for j in range(n):
                row.append('.')
            board.append(row)
        self.N = n
        self.ans = []
        self.col = [0] * n
        self.diagonal = [0] * (2 * n - 1)
        self.anti_diagonal = [0] * (2 * n - 1)
        self.helper(0,board)
        return self.ans