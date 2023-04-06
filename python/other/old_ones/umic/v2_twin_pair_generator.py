def twin_gen(d):
    lower_limit = 10**(d-1)
    upper_limit = 10**d
    twin_pairs = []
    for num in range(lower_limit, upper_limit):
        if num != 1:
            factor = 0
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
                    twin_pairs.append((num, num2))
    for pairs in twin_pairs:
        print(pairs)


print('''type a number(d), to find all twin primes having d decimal digits
type 'stop' to stop the program ''')


while True:
    cmd = input('> ')
    if cmd.isnumeric():
        cmd = int(cmd)
        twin_gen(cmd)
    elif cmd.lower() == 'stop':
        break
    else:
        print('wrong command!!!')