import math

n = int(input('Enter n: '))
gre = 0
val = 1
for i in range(n):
    gre += ((-1) ** i) * (1 / (2 * i + 1))
gre *= 4
for i in range(1, n + 1):
    if i % 2 == 1:
        val *= (2 * (i // 2 + 1)) / (2 * (i // 2 + 1) - 1)
    else:
        val *= (2 * (i // 2)) / (2 * (i // 2) + 1)
val *= 2
gre_dif = abs(math.pi - gre)
val_dif = abs(math.pi - val)
dif = abs(gre - val)
print ('The difference between the values is equal to ', dif)
print('The value of Gregorys formula differs from the exact value of ', gre_dif)
print('The value from the Wallis formula differs from the exact value on ', val_dif)