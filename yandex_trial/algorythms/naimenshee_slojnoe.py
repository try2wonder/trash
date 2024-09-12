# Обозначим через S(n) сумму цифр натурального числа n
# Будем говорить, что натуральное число n сложное, если не существует такого натурального числа k, что
# n = 3k/S(k)^2
# Найти наименьшее сложное число
# import random


n = int(input('enter you number N: '))
k = 0
print(n)
# List of all 'k' that suffice the condition
k_list = []
# nar = []

# for i in n:
#     nar.append(int(i))
# print(nar)

# s = sum(nar)
# print(s)

def is_complex(k,n):
    # turn k into an array to sum it's digits
    k1 = str(k)
    kar = []
    for i in k1:
        kar.append(int(i))
    # check if 'k' fits
    if n == 3 * k /(sum(kar) ** 2):
        print(k)
        print('True')
        k_list.append(k)
        return True
    else:
        return False


for k in range(1,1000000):
    is_complex(k,n)

k_list.sort()
print(k_list)
print(f'The answer is: {k_list[0]}')
