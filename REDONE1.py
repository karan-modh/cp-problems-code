T = int(input())
while(T):
	M = 1000000007
	n = int(input())
	ans = 1
	for i in range(2,n):
		ans = ans % M
		i = i % M
		j = ans*i
		j = j % M
		ans = ans + i + j
		ans = ans % M
	print(ans)
	print("\n")
	T = T-1 