class UnionFindTree:  # UnionFind木を作る
    def __init__(self, n):
        self.par = [i for i in range(n+1)]
        self.rank = [0] * (n+1)

    def find(self, x):  # 根を検索する
        if self.par[x] == x:
            return x
        else:
            self.par[x] = self.find(self.par[x])
            return self.par[x]

    def union(self, x, y):  # 木を併合する
        x = self.find(x)
        y = self.find(y)
        if self.rank[x] < self.rank[y]:
            self.par[x] = y
        else:
            self.par[y] = x
            if self.rank[x] == self.rank[y]:
                self.rank[x] += 1

    def same_check(self, x, y):  # 同じ木に属するかチェックする
        return self.find(x) == self.find(y)

N, M = map(int, input().split())

tree = UnionFindTree(N)

for i in range(1, M+1):
    x, y, w = map(int, input().split())
    tree.union(x, y)

root_list = []

for i in range(1, N+1):
    root_list.append(tree.find(i))

root_list = list(set(root_list))

print(len(root_list))
