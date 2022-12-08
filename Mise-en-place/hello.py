from sys import stdout, stdin

arrSum = [0] * 10001


def update(i, n, val):
    while (i <= n):
        arrSum[i] += val
        i += (i & (-i))


def query(i):
    sum = 0
    while (i > 0):
        sum += arrSum[i]
        i -= (i & (-i))
    return sum


def range_update(i, j, n, val):
    update(i, n, val)
    update(j+1, n, -val)


t = int(stdin.readline())
for _ in range(t):
    n, u = stdin.readline().split()
    n = int(n)
    u = int(u)
    for _ in range(u):
        l, r, val = stdin.readline().split()
        l = int(l)
        r = int(r)
        val = int(val)
        range_update(l+1, r+1, n, val)

    k = int(stdin.readline())
    for _ in range(k):
        index = int(stdin.readline())
        print(query(index+1))
