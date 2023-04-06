#30 verticle, 178 horizontal
from time import sleep as s

x_w, y_w = 178, 30
x_m, y_m = 89, 15

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


def position_handler(command_activated_var):
    if command_activated_var == 6:
        head[0] += 1
        tail[0] += 1
    if command_activated_var == 4:
        head[0] -= 1
        tail[0] -= 1
    if command_activated_var == 8:
        head[1] -= 1
        tail[1] -= 1
    if command_activated_var == 2:
        head[1] += 1
        tail[1] += 1

# list to point
def lp(list_var, point_var):
    point_var.x = list_var[0]
    point_var.y = list_var[1]

# some variables
# snake player
tail = [x_m, y_m]
head = [x_m, y_m]

command_activated = 6

#points
head_point = Point(head[0], head[1])
tail_point = Point(tail[0], tail[1])


#work


# while True:
#     command = input("> ")
#     if command == "2":

# lx, ly = x, y location of head
# lx, ly = x_m, y_m
# while True:
#     point_em(Point(lx, ly), sc)
#     executer(sc)
#     command = input("> ")
#     if command == '':
#         lx += 1
#     elif command == '4':
#         lx -= 1
#     elif command == '6':
#         lx += 1
#     elif command == '8':
#         ly -= 1
#     elif command == '2':
#         ly += 1
#     s(0.3)


# loop
while True:
    command = input("> ")
    if command == "":
        position_handler(command_activated)
    elif command in ["2", "4", "6", "8"]:
        command_activated = int(command.copy())
        position_handler(command_activated)
    elif command.lower() == "stop":
        break
    point_em(head_point, sc, "o")
    point_em(tail_point, sc, "x")
    executer(sc)
    s(0.3)


