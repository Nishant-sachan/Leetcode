class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        def Summ(s):
            ans=0
            for ch in s:
                ans+=int(ch)
            return ans

        s=str(num)
        ans=Summ(s)
        while(ans>=10):
            ans=Summ(str(ans))
        return ans
        