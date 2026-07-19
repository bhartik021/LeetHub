class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []

        pairs = {
            ')' : '(',
            '}' : '{',
            ']' : '['
        }

        for ch in s:
            # opeming bracket
            if ch in "({[":
                stack.append(ch)

            else:
                if not stack:
                    return False

                if stack[-1] != pairs[ch]:
                    return False
                stack.pop()

        return len(stack) == 0

        