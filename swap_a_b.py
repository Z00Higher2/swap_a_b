# this program swaps the values of a and b if a is
# greater than b and otherwise leaves a and b unchanged.

def sort(a ,b):
    if (a > b):
        i = max(a , b)
        j = min(a, b)
        a = j
        b = i
        print(a, b)
    return a, b

def main():
    num_1 = int(input("Enter the first number: "))
    num_2 = int(input("Enter the second number: "))

    print(sort(num_1, num_2))

main()

