def init():
    n = int(input('n: '))
    x = float(input('x: '))
    e = float(input('e: '))
    return (x, n, e)


def solution(x, n, e):
    elem1 = 0
    k = 0
    res = 0
    while True:
        elem = elem_generate(x, n, k)
        k += 1
        res += elem
        if abs(elem - elem1) <= e:
            break
    return res


def elem_generate(x, n, k):
    return ((-1) ** k) / (factorial(k) * factorial(n + k)) * ((x / 2) ** (2 * k + n))


def factorial(n):
    if n == 1 or n == 0:
        return (1)
    else:
        return factorial(n - 1) * n


def browse(d):
    print(d)


x, n, e = init()
res = solution(x, n, e)
browse(res)