t = int(input())
while t:
	x = int(input())
	y = 1
	for i in range(1,x+1):
		y = y*i
	print(y)
	t = t-1