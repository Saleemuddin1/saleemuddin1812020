bin2 = open ('/home/saleemuddin1/Lab2/pushed.sh' ,"rb")
bin3 = open ('/home/saleemuddin1/Lab2/echod.sh', "rb")
bin4 = open ('/home/saleemuddin1/Lab2/BasicCommands.txt', "rb")
f = open('/home/saleemuddin1/saleemuddin1812020/holders/binaryholder.bin', 'wb')
print ("The Binary Contents from Lab2 Directory: ")
#f = open('/home/saleemuddin1/holders/binaryholder.bin', 'r')
for line in bin2:
    	temp = "".join(str(ord(c)) + "," for c in list(line))
	print(temp)
	#f=open('/home/saleemuddin1/holders/binaryholder.bin', 'wb')	
	f.write(temp)	
for liner in bin3:
	temp2 =  "".join(str(ord(d)) + "," for d in list(liner))
	print(temp2)
	f.write(temp2)
for lines in bin4:
        temp3 =  "".join(str(ord(e)) + "," for e in list(lines))
        print(temp3)
        f.write(temp3) 
	


