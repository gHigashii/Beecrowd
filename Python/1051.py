x = float(input())

if 0.00 <= x <= 2000.00:
    print('Isento')

if 2000.00 < x <= 3000.00:
    y = x - 2000.00
    z = 0.08 * y

if 3000.00 < x <= 4500.00:
    i8 = 0.08 * 1000.00
    i18 = 0.18 * (x - 3000.00)
    z = i8 + i18

if x > 4500.00:
    i8 = 0.08 * 1000
    i18 = 0.18 * 1500
    i28 = 0.28 * (x - 4500.00)
    z = i8 + i18 + i28

if x > 2000.00:
    z = float(z)
    print('R$ {:.2f}'.format(z))
 