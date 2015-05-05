def play(c, n, p, a): #c is number of cookies, n is max number taken on one turn, p is prev turn, a is alice turn(1 or -1 for Bob)
    if (n >= c or (n != p and n == c)):
        if (a == 1):
            #print("Alice wins!")
            return 1
        else:
            return 0
    else:
        if (a == 1):
            for i in range(1, n + 1):
                if (i != p):
                #print("%d: %d cookies left, taking %d")%(a, c, i)
                    if (play(c - i, n, i, a * -1) == 1):
                        return 1
            return 0
        else:
            for i in range(1, n + 1):
                if (i != p):
                #print("%d: %d cookies left, taking %d")%(a, c, i)
                    if (play(c - i, n, i, a * -1) == 0):
                        return 0
            return 1            
        #print(check)
        #check = []
        #for i in range(1, n + 1):
            #if (i != p):
                #print("%d: %d cookies left, taking %d")%(a, c, i)
                #check.append(play(c - i, n, i, a * -1))
        #if (a == 1):
        #    if (check.count(1) > 0):
        #            return 1
        #    return 0
        #else:
        #   if (check.count(0) > 0):
        #            return 0
        #   return 1

win = 0
f = open("cookies.txt", "r")
f.readline()
for i in range(0, 1000):
    a = f.readline().split(" ")
    a[0] = int(a[0])
    a[1] = int(a[1])
    print("Playing %d cookies at %d max.")%(a[0],a[1])
    win = win + play(a[0], a[1], 0, 1)
    print("Current wins: %d.")%(win)
    print("Finished games: %d.")%(i + 1)
