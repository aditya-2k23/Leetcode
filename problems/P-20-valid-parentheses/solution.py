class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        map = {')': '(', '}': '{', ']': '['}

        for c in s:
            if c in map:
              if not stack or stack[-1] != map[c]:
                return False
              stack.pop()
            else:
               stack.append(c)
        
        return not stack