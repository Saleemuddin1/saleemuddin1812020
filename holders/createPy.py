import os 
direct = "FINALpython"
parent = "/home/saleemuddin1/FinalExam"
pathway = os.path.join(parent,direct)
try:
	os.mkdir(pathway)
	print("Directory Created!")
except:
	print ("Error")
root = "/home/saleemuddin1/FinalExam/FINALpython"
folders = ['copies','encrypted','decrypted']
try:
	for folder in folders:
		os.mkdir(os.path.join(root,folder))



        print("Subdirectories Created!")
except:
	print ("Error")



