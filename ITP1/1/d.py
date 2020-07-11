t = int(input())
h = t // 3600
t -= 3600*h
m = t // 60
t -= 60*m
s = t
print(f"{h}:{m}:{s}")
