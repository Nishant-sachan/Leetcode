class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=sum(nums)
        s2=0
        st=""
        for i in nums:
            st+=str(i)
        for ch in st:
            s2+=int(ch)
        return s-s2