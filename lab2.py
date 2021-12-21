x, y = map(float, input('Enter a value for x and y: ').split())
dist = ((x + 2) ** 2 + y ** 2) ** 0.5
if x >= -1:
    ans = 'The point belongs to the shaded area'
elif 2 >= dist and dist >= 1:
    ans = 'The point belongs to the shaded area'
else:
    ans = 'The point does not belong to the shaded area '
print(ans)