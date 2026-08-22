class Solution(object):
    def checkDivisibility(self, n):
        """
        :type n: int
        :rtype: bool
        """
        s= str(n)
        m=1
        summ =0
        for i in s:
            m*=int(i)
            summ+=int(i)
        return n%(m+summ)==0

        