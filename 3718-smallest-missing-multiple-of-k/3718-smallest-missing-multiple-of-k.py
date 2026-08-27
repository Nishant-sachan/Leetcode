class Solution(object):
    def missingMultiple(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        s=set(nums)
        x=k
        while(True):
            if k in s:
                k+=x
            else:
                break
        return k