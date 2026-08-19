class Solution(object):
    def minimumSum(self, num):
        """
        :type num: int
        :rtype: int
        """
        s=str(num)
        s=list(s)
        s.sort()
        num1 = s[0]+s[2]
        num2 =s[1]+s[3]
        return int(num1)+int(num2)

        
            

        