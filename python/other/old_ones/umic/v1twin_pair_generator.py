# # number ia prime
#
#
# def check(num):
#     factor = 0
#     if num == 1:
#         print("1 is neither a prime nor a composite number")
#     elif num <= 0:
#         pass
#     else:
#         for i in range(1, int(num) + 1):
#             if int(num) % i == 0:
#                 factor += 1
#         if factor <= 2:
#             print(f'{num} is a prime number')
#         else:
#             print(f'{num} is a composite number')
#
#
# while True:
#     cmd = input("> ")
#     if cmd.isnumeric():
#         check(int(cmd))
#     elif cmd.lower == "stop":
#         break
#     else:
#         print("wrong command!!!")

def check(num):
    factor = 0
    if num == 1:
        print("1 is neither a prime nor a composite number \nso it will not form a twin pair")
    elif num <= 0:
        pass
    else:
        for i in range(1, int(num) + 1):
            if int(num) % i == 0:
                factor += 1
        if factor <= 2:
            num2 = num + 2
            factor = 0
            for i in range(1, int(num2) + 1):
                if int(num2) % i == 0:
                    factor += 1
            if factor <= 2:
                print(f'{num} and {num2} is a a twin pair')
            else:
                print(f'{num} has no twin pair')
        else:
            print(f'{num} is a composite number \nso, it will not form a twin pair')


while True:
    cmd = input("> ")
    if cmd.isnumeric():
        check(int(cmd))
    elif cmd.lower == "stop":
        break
    else:
        print("wrong command!!!")

