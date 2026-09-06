from typing import List

def palindrome_check(self,s,start,end):
        while start < end:
            if s[start] != s[end]:
                return False
            start+=1
            end-=1
        return True
def helper(self,ind,s,ans,ds):
    if ind == len(s):
        ans.append(ds.copy())
        return
    for i in range(ind,len(s)):
        if self.palindrome_check(s,ind,i):
            ds.append(s[ind:i+1])
            self.helper(i+1,s,ans,ds)
            ds.pop()
def partition(self, s: str) -> List[List[str]]:
    ans = []
    ds = []
    self.helper(0,s,ans,ds)
    return ans  