from __future__ import print_function

def threeN(x):

	#print(x," ", end='')
	print(count)
	if(x == 0):
		return 
	if(x == 1):
		return 0
	elif((x % 2) == 1):
		return threeN((3*x)+1)
	else:
		return threeN(x/2)

#for i in range(1, 10000):
threeN(4)

