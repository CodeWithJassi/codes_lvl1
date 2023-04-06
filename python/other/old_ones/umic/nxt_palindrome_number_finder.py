# # first check is it's  a palindrome number
# def check(num):
#     if list(str(num)) == list(str(num))[::-1]:
#         print(True)
#     else:
#         print(False)
#
#
# while True:
#     cmd = input('> ')
#     if cmd.isnumeric():
#         check(cmd)
#     elif cmd.lower() == 'stop':
#         break
#     else:
#         print('wrong command!!!')

# function definitions


def check(num):
    if list(str(num)) == list(str(num))[::-1]:
        while True:
            num += 1
            if list(str(num)) == list(str(num))[::-1]:
                break
        print(f"Next palindrome number is {num}")
    else:
        print("It's not a palindrome number")


print('''type any palindrome number to find its next palindrome number
type 'stop' to stop the program ''')


while True:
    cmd = input('> ')
    if cmd.isnumeric():
        cmd = int(cmd)
        check(cmd)
    elif cmd.lower() == 'stop':
        break
    else:
        print('wrong command!!!')