class Solution(object):
    def largestNumber(self, nums):

        l = []

        for i in nums:
            l.append(str(i))

        for i in range(len(l)):
            for j in range(i + 1, len(l)):

                if l[i] + l[j] < l[j] + l[i]:
                    l[i], l[j] = l[j], l[i]

        ans = ""

        for i in l:
            ans += i

        if ans[0] == "0":
            return "0"

        return ans