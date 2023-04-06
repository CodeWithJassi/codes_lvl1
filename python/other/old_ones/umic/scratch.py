from time import sleep as s


# functions

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




# some variables
# snake player
tail = [x_m, y_m]
head = [x_m, y_m]

command_activated = 6


#loop
while True:
    command = input("> ")
    if command == "":
        position_handler(command_activated)
    elif command in ["2", "4", "6", "8"]:
        command_activated = int(command.copy())
        position_handler(command_activated)
    elif command.lower() == "stop":
        break
