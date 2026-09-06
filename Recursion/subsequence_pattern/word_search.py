from typing import List

class Solution:
    def helper(self,i,j,board,word,ind):
        if ind == len(word):
            return True
        if i < 0 or j < 0 or i >= len(board) or j >= len(board[0]) or board[i][j] != word[ind]:
            return False
        temp = board[i][j]
        board[i][j] = '#'
        find = self.helper(i+1,j,board,word,ind+1) or self.helper(i-1,j,board,word,ind+1) or self.helper(i,j+1,board,word,ind+1) or self.helper(i,j-1,board,word,ind+1)
        board[i][j] = temp
        return find
    def exist(self, board: List[List[str]], word: str) -> bool:
        n = len(board)
        m = len(board[0])
        for i in range(n):
            for j in range(m):
                if self.helper(i,j,board,word,0):
                    return True
        return False