import sys

sa = sb = 0
ans = ""
s = set()

def string_to_int(bit_string):
    return int(bit_string.replace('*', '0'), 2)

def pdb(b, indb):
    if indb == sb:
        bit_int = string_to_int(''.join(b))
        s.add(bit_int)
        return
    if b[indb] == '*':
        teste = b[:]
        teste[indb] = '1'
        pdb(teste, indb + 1)
        teste[indb] = '0'
        pdb(teste, indb + 1)
        return
    pdb(b, indb + 1)

def pd(aa, inda):
    global ans
    if inda == sa:
        bit_int = string_to_int(''.join(aa))
        for c in s:
            if bit_int % c == 0:
                ans = ''.join(aa).replace('*', '0')[-sa:]
                print(ans)
                exit(0)
                
    if inda < sa:
        if aa[inda] == '*':
            aux = aa[:]
            aux[inda] = '1'
            pd(aux, inda + 1)
            aux[inda] = '0'
            pd(aux, inda + 1)
            return
    if inda < sa:
        pd(aa, inda + 1)

if __name__ == "__main__":
    #sys.setrecursionlimit(10**6)  # Ajusta o limite de recursão, se necessário
    a = list(input().strip())
    b = list(input().strip())
    sa = len(a)
    sb = len(b)
    pdb(b, 0)
    pd(a, 0)

