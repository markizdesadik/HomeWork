a = open('text.txt')
print('******************************')
for i in a.readlines():
    age1 = i[len(i) - 5:len(i)]
    age2 = i[len(i) - 12:len(i) - 8]
    delta = int(age1)- int(age2)
    print('Президент {} у власти был {} лет'.format(i, delta))
    print('******************************')
