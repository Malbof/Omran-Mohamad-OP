import math

out = 0
for i in range(1, 10):
    for j in range(10):
        for y in range(10):
            number = i * 10000 + j * 1000 + y * 100 + j * 10 + i
            simple = True
            if out < 10:
                for u in range(2, math.ceil(number ** 0.5) + 1):
                    if number % u == 0:
                        simple = False
                        break
                if simple:
                    print(number)
                    out += 1