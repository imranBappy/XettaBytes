n = int(input())

arr = []
for _ in range(n):
    item = int(input())
    arr.append(item)

sum_arr = []
sum_arr.append(arr[0])

for i in range(1, n):
    sum_arr.append(sum_arr[i-1] + arr[i])

t = int(input())

for _ in range(t):
    start = int(input())
    end = int(input())
    if start > 0:
        print(sum_arr[end] - sum_arr[start-1])
    else:
        print(sum_arr[end])
