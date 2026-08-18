class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        ans =0
        s=str(n)
        sign=1
        for ch in s:
            ans+=int(ch)*sign
            sign*=-1
        return ans
        