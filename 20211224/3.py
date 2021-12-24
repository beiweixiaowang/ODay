S = ['thumb', 'forefinger', 'middle finger', 'third finger', 'little finger']


def check(a: str, b: str):
    global S
    t = S.index(a) - S.index(b)
    if t == 1 or t == -4:
        return False
    elif t == -1 or t == 4:
        return True
    else:
        return None


n = int(input())
for _ in range(n):
    try:
        s = input().split(',')
        r = check(s[0], s[1])
    except Exception:
        r = None
    if r is None:
        print('Draw')
    elif r:
        print('Win')
    else:
        print('Lose')