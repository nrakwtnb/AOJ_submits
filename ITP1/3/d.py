a,b,c = map(int, input().split())

print(sum([ c%d == 0 for d in range(a,b+1) ]))
