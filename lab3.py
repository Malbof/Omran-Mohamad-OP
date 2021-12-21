x, e = map(float, input('Enter x and e: ').split())
shx = 0
n = 0
a = 0
fact = 1
while True:
    for i in range(1, 2 * n + 2):
        fact *= i
    a0 = a
    a = x ** (2 * n + 1) / fact
    diff = abs(a - a0)
    shx += a
    n += 1
    fact = 1
    if not (diff > e):
        break
print(shx)