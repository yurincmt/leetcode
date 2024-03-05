class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        retstr = []
        stack = []
        for c in s:
            if c == '(':
                if len(stack) > 0:
                    retstr.append(c)
                stack.append(c)
            else:
                if len(stack) > 1:
                    retstr.append(c)
                stack.pop()

        return ''.join(retstr)

ob = Solution()
print(ob.removeOuterParentheses("(()())(())(()(()))"))
print(ob.removeOuterParentheses("()()"))
