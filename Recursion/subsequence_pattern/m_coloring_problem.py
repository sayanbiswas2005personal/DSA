class Solution:
    def graphColoring(self, v, edges, m):
        graph = []
        for i in range(v):
            graph.append([])
        for u,w in edges:
            graph[u].append(w)
            graph[w].append(u)
        color = [0] * v
        def helper(node):
            if node == v:
                return True
            for c in range(1,m+1):
                safe = True
                for x in graph[node]:
                    if color[x] == c:
                        safe = False
                        break
                if safe:
                    color[node] = c
                    if helper(node+1):
                        return True
                    color[node] = 0
            return False
        return helper(0)