def add(*gugu):
    result = 0
    for num in gugu:
        result += num
    return result


print(add(4,4,4))