x = input().split()
n1, n2, n3, n4 = x

m = (float(n1) + float(n2) + float(n3) + float(n4)) / 4
print('Media: {:.1f}'.format(m))

if m >= 7.0:
    print('Aluno Aprovado.')
if m < 5.0:
    print('Aluno Reprovado.')
if 5.0 <= m <= 6.9:
    print('Aluno em Exame.')
    y = float(input())
    print('Nota do exame: {}' .format(y))
    m2 = (m + y) / 2
    if m2 >= 5:
        print('Aluno Aprovado.')
        print('Media Final: {:.1f}' .format(m2))
    else:
        print('Aluno Reprovado.')
        print('Media Final: {:.1f}' .format(m2))