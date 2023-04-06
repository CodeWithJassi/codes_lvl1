#30 verticle, 178 horizontal
from time import sleep as s

x_w, y_w = 178, 30

sc = [[' ' for i in range(x_w)] for i in range(y_w)]


# class

class Point:

    def __init__(self, x, y):
        self.x = x
        self.y = y


# func
def executer(screen):
    row_num = 0
    for i in screen:
        row = ''
        for j in screen[row_num]:
            row += j
        row_num += 1
        print(row)


def point_em(point, screen, pix='0'):
    screen[point.y][point.x] = pix


def el_shower(el, dic, max):
    if el <= max:
        return dic[el]
    else:
        return dic[0]



# work
updown = [0,1,2,3,2,1]
j = 0
for i in range(1,31):
    s(0.3)
    point_em(Point(i,updown[j]+5),sc)
    executer(sc)
    if j <= 4:
        j += 1
    else:
        j = 0





