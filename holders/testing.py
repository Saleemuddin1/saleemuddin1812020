f1 = open ('/home/saleemuddin1/FinalExam/holders/binaryholder.bin', 'rb')
f2 = open ('/home/saleemuddin1/FinalExam/holders/wc.txt','w')
print ("The Encrypted Binary Contents from Lab2 Directory: ")
for i in f1:
	split = i.split(",")
	key = 150
	try:
		for val in split:
			vil = int(val)	
			#c = temp +int(i)
			c = vil +key
			# 1 > 0: 
			#if key -1 >0:
			key = (key - 1)%256
			
			print(c) 
			print >> f2, c 
			
		#f2.write(c)
#		with open('wc.txt') as f:
 #   		print ",".join(line.strip() for line in f) 
		
	except:
		pass
#with open('wc.txt') as f:
#	print ",".join(line.strip() for line in f)

	f2.write(str(c))
	f2.close()
	print ("Encrypted Binary Contents Also Listed in wc.txt")	
		
