class OrderedStream:

    def __init__(self, n: int):
        self.ptr = 0
        self.size = n
        self.stream = []

        for count in range(n):
            self.stream.append('')
        

    def insert(self, idKey: int, value: str) -> list[str]:
        self.stream[idKey -1] = value
        ret = []
        while self.ptr < self.size and self.stream[self.ptr] != "":
            ret.append(self.stream[self.ptr])
            self.ptr += 1
        return ret
        


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)
    
ob = OrderedStream(5)
param = ob.insert(3, 'ccccc')
print(param)
param = ob.insert(1, 'aaaaa')
print(param)
param = ob.insert(2, 'bbbbb')
print(param)
param = ob.insert(5, 'eeeee')
print(param)
param = ob.insert(4, 'ddddd')
print(param)