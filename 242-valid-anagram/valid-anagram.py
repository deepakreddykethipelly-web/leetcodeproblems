class Solution(object):
    def isAnagram(self, s, t):
        if len(s)!=len(t):
            return False
        sh={}
        for sg in s:
            sh[sg]=sh.get(sg,0)+1
        for ch in t:
            if ch not in sh or sh[ch]==0:
                return False
            sh[ch]-=1
        return True
        