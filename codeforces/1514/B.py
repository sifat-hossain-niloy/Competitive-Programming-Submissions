t = int(input())
while True:
		n,a = input().split(" ")
		n, a = [int(n), int(a)]
		s = 0
		
		s = n**a
		s = s%1000000007
			
		print(s)
		t = t-1;
		if (t==0):
			break;
		

	