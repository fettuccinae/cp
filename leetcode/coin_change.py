class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        mem = [-1 for _ in range(amount + 1)]
        target = amount
        slot = 0

        def dp(target):
            if target == 0:
                return 0
            if mem[target] != -1:
                return mem[target]
            minres = 999
            for i in coins:
                if target - i >= 0:
                    slot = dp(target - i) + 1
                    minres = min(slot, minres)
            mem[target] = minres
            return mem[target]

        return -1 if dp(target) >= 999 else dp(target)
