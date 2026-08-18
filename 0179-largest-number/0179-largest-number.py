class Solution(object):
    def largestNumber(self, nums):

        arr = []

        for num in nums:
            arr.append(str(num))

        n = len(arr)

        for i in range(n):
            for j in range(i + 1, n):

                if arr[i] + arr[j] < arr[j] + arr[i]:
                    arr[i], arr[j] = arr[j], arr[i]

        ans = ""

        for x in arr:
            ans += x

        if ans[0] == "0":
            return "0"

        return ans