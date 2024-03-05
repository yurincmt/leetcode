class RecentCounter(object):

    def __init__(self):
        self.t = []
        self.count = 0
        self.timeFrame = 3000
        

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """

        lastRequests = 0
        self.t.append(t)
        self.count += 1
        for a in range(self.count-1, -1, -1):
            if (t - self.timeFrame) <= self.t[a] and self.t[a] <= t:
                lastRequests += 1
            else:
                break
        return lastRequests


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
            
ob = RecentCounter()
print(ob.ping(1))
print(ob.ping(100))
print(ob.ping(3001))
print(ob.ping(3002))