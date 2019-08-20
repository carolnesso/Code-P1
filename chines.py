def euclides(a, b):
    if(a % b == 0): return b
    return euclides(b, a % b)

def quocientes(a, b):
    lista = []

    while((a % b) != 0):
        lista.append(a // b)
        a = a % b
        a, b = b, a
    lista.append(a // b)
    return lista

def table(lista):
    if(len(lista) == 1):
        lista.append(lista[0] + 1)
        lista[0] = 1

    elif(len(lista) == 2):
        lista.reverse()
        lista[0] = -1
        lista[1] *= -1

    else:
        lista.pop()
        lista.reverse()

        x = 1

        for i in range(len(lista)):
            if(i > 0):
                lista[i] *= lista[i - 1]
                lista[i] += x
                x = lista[i-1]
    
    if (len(lista) % 2 == 0): lista[-2] *= -1
    else: lista[-1] *= -1
    return lista[-2], lista[-1]

def combLinear(a, b):
    inverted = False

    if (a < b):
        inverted = True
        a, b = b, a
    
    lista = quocientes(a, b)

    s, t = table(lista)

    if (inverted):
        s, t = t, s

    return s

def Inverso(a, b, m):
    inverso = combLinear(a, m) * b
    inverso %= m  
    return inverso

# def congrLinear(a, b, m):
#     mdc = euclides(a, m)
#     if(mdc == 1):
#         inv = Inverso(a, m) * b
#         print("{}*{} ≡ {} mod {}".format(a, inv, b, m))
#     elif(b % mdc == 0):
#         inv0 = Inverso(a//mdc, b//mdc, m//mdc)
#         print(inv0)
#         for i in range(mdc):
#             print("{}*{} ≡ {} mod {}".format(a, inv0+(i*m//mdc), b, m))
#     else: print("Nao possui solucao")

print("quantas congruencias?")
n = int(input())
r, m, s = [], [], []
print("")
for i in range(n):
    r.append(int(input()))
    m.append(int(input()))

M = 1

for i in m:
    M *= i
Mlista = []

for i in m:
    Mlista.append(M//i)

for i in range(n):
    s.append(Inverso(Mlista[i], 1, m[i]))

x = 0

for i in range(n):
    x += Mlista[i]*s[i]*r[i]

print(x % M)
#congrLinear(a, b, m)