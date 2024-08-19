class Solution(object):
    def minSteps(self, n):
        ans, i = 0, 2

        while i*i <= n:
            while not n % i:
                ans += i
                n //= i
            i += 1

        if n > 1:
            ans += n
        return ans 