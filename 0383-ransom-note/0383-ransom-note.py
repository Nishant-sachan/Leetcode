class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        l=list(magazine)
        for i in ransomNote:
            if i not in l:
                return False
            l.remove(i)
        return True

        