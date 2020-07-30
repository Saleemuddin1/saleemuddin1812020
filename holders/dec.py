#f1 = open ('/home/saleemuddin1/holders/wc.txt', 'rb')
#f2 = open ('/home/saleemuddin1/holders/wd.txt','w')
print("The Decrypted Binary Contents: ")
with open('/home/saleemuddin1/FinalExam/holders/wc.txt') as f:
	key =150
	for line in f:
		#isplit = line.split ("\n")
		
		try:
			#for vals in split:
			#key = 150
			vil = int(line)
			c = vil-key
			key = (key -1)% 256
			print(c)
			#print ",".join(line.strip() for line in f)	
			#key = key+1
		except:
			pass
			
#f2.close()			
