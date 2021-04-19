

n,m =  input().split(" ")
n,m = [int(n),int(m)]

s = 10**n-1

if (s<m):
	print(-1)
else:
	res = s%m
	
	s = s-res
	
	print(s)
