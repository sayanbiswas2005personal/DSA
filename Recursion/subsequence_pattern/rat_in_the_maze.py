class Solution:
    def __init__(self):
        self.N = 0
        self.ans = []
        self.row = [0,0,1,-1]
        self.col = [1,-1,0,0]
        self.directions = ['R','L','D','U']
    def helper(self,r,c,maze,ds):
        if r == self.N-1 and c == self.N-1:
            self.ans.append("".join(ds))
            return
        maze[r][c] = 0
        for i in range(len(self.directions)):
            n_row = r + self.row[i]
            n_col = c + self.col[i]
            if(n_row >= 0 and n_col >= 0 and n_row < self.N and n_col < self.N and maze[n_row][n_col] == 1):
                ds.append(self.directions[i])
                self.helper(n_row,n_col,maze,ds)
                ds.pop()
        maze[r][c] = 1
    def ratInMaze(self, maze: list[list[int]]) -> list[str]:
        self.N = len(maze)
        ds = []
        if maze[0][0] == 0:
            return []
        self.helper(0,0,maze,ds)
        self.ans.sort()
        return self.ans