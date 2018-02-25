a = open('text.txt')
b = 0
print('******************************')
for i in a.readlines():
    b += 1
    year1 = i[len(i) - 5:len(i)]
    year2 = i[len(i) - 12:len(i) - 8]
    delta = int(year1)- int(year2)
    print('{}-й Президент {} года рождения. у власти был {} лет'.format(b, i.split('-')[1].split('('), delta))
    print('******************************')
