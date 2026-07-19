class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # create a empty python list as a stack
        stack = []

        # create dictionary of matcing the pattern rather than if-else
        pairs = {
            ')' : '(',
            '}' : '{',
            ']' : '['
        }

        # iterate over the charcters
        for ch in s:
            # if it is opening bracket then push in stack
            if ch in "({[":
                stack.append(ch)

            # if it is closing brakcet
            else:
                if not stack:
                    return False

                if stack[-1] != pairs[ch]:
                    return False
                    
                stack.pop()

        return len(stack) == 0
        