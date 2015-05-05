def powerof2(f):
    def inner():
        r = f()
        ret = []
        for a in r:
            ret.append(pow(2,a))
        return ret
    return inner

@powerof2
def get_powers():
    nums = [3,5,1,6,7,2]
    return nums
