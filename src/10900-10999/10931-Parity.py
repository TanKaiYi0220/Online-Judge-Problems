def to_binary(num):
    binary_string = ""
    _sum = 0
    while num > 0:
        if num % 2 == 0:
            binary_string += "0"
        else:
            binary_string += "1"
            _sum += 1
        num //= 2
    return binary_string[::-1], _sum



while True:
    n = int(input())
    if n == 0:
        break
    binary_string, _sum = to_binary(n)
    print(f"The parity of {binary_string} is {_sum} (mod 2).")