#46 verticle , 60 horizontal
from time import sleep as s
x_w, y_w = 60,24

sc = [[' ' for i in range(x_w)] for i in range(y_w)]
#class

class Point:
	
	def __init__(self,x,y):
		self.x = x
		self.y = y
		
		
		
		

#func
def executer(screen):
	row_num = 0
	for i in screen:
		row = ''
		for j in screen[row_num]:
			row += j
		row_num += 1
		print(row)
		
def point_em(point,screen,pix='0'):
	screen[point.y][point.x]  = pix
	
	
def el_shower(el,dic,max):
	if el <= max:
		return dic[el]
	else:
		return dic[0]

	
	
	
	
'N@#W$9876543210?!abc;:+=-,_'
#dic
di = { 0 : 'N',
1 : '@',
2 : '#',
3 : 'W',
4 : '$',
5 : '9',
6 : '8',
7 : '7',
8 : '6',
9 : '5',
10 : '4',
11 : '3',
12 : '2',
13 : '1',
14 : '0',
15 : '?',
16 : '!',
17 : 'a',
18 : 'b',
19 : 'c',
20 : ';',
21 : ':',
22 : '+',
23 : '=',
24 : '-',
25 : '_',
26 : ','

}
	
			

#point_em(Point(2,3), sc, 'h')			
#executer(sc)
k = 0
while True:
	for j in range(y_w):
		x = 0
		el = j + k%26
		for i in range(x_w):
			point_em(Point(x, j),sc,di[el])
			el += 1
			x += 1
			if el == 27:
				el = 1
		executer(sc)
		k += 1
	
	