class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.keys = []
        self.maps = {}
        self.count = 0

    def get(self, key: int) -> int:
        if key in self.maps:
            self.keys.remove(key)
            self.keys.append(key)

            return self.maps[key]
        else:
            return -1


    def put(self, key: int, value: int) -> None:
        if self.get(key) != -1:
            self.maps[key] = value
        else:
            if self.count < self.capacity:
                self.keys.append(key)
                self.maps[key] = value
                self.count+=1
            else:
                self.maps.pop(self.keys[0])
                self.keys.pop(0)
                self.keys.append(key)
                self.maps[key] = value


