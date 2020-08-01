cd /home/saleemuddin1/Lab2
echo "All File Contents in Lab2 Directory: "
ls -l
cd /home/saleemuddin1/Lab2
echo "All The Non-Directory Content in Lab2: "
ls -lh | grep -v '^d'
ls -lh | grep -v '^d' > /home/saleemuddin1/saleemuddin1812020/holders/FINAlinstruction.txt
echo "Non-Directory List located in FINAlinstruction/txt"
