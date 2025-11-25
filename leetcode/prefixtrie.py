class TrieNode:
    def __init__(self):
        self.children = [None]*26
        self.EOW = False

class PrefixTree:

    def __init__(self):
        self.root = TrieNode()
        

    def insert(self, word: str) -> None:
        curr = self.root

        for i in word:
            c = ord(i) - ord("a")
            if curr.children[c] == None:
                curr.children[c] = TrieNode()
            curr = curr.children[c]
        curr.EOW = True


    def search(self, word: str) -> bool:
        curr = self.root
        for i in word:
            c = ord(i) - ord("a")
            if curr.children[c] == None :
                return False
            curr = curr.children[c]
        return curr.EOW
        

    def startsWith(self, prefix: str) -> bool:
        curr = self.root
        for i in prefix:
            c = ord(i) - ord("a")
            if curr.children[c] == None:
                return False
            curr = curr.children[c]
        return True

        
        