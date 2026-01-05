class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        s_dick={}
        for i in range(len(s)):
            count = 0;
            for j in range(len(s)):
                if s[i] == s[j]:
                    count +=1;
            s_dick[s[i]] = count;
            


        t_dick={}
        for i in range(len(t)):
            count = 0;
            for j in range(len(t)):

                if t[i] == t[j]:
                    count +=1;
            t_dick[t[i]] = count;

        if (s_dick == t_dick):
            return True
        else:
            return False
        

        