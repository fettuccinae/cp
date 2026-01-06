class Solution:
    def isPalindrome(self, s: str) -> bool:

        sss= [];
        ss = s.lower();
        for j in range(len(ss)):
            if (ss[j].isalpha() or ss[j].isnumeric()):
                sss.append(ss[j]);

        t = [];
        for i in range(len(sss)):
            t.append(sss[len(sss)-(i+1)]);
        print(sss)
        print(t)
        if sss == t:
            return True
        
        else:
            return False
            
        