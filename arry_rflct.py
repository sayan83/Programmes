# m = int(input('Enter m'))
# n = int(input('Enter n'))
m = 5;
n = 5;
arr = [[1,2,3,4,5],
       [7,8,9,10,11],
       [13,14,15,16,17],
       [19,20,21,22,23],
       [25,26,27,28,29],
#         [31,32,33,34,35]
      ]
#arr = [[1,2,3],[4,5,6],[7,8,9]]
# for i in range(0,m):
#     for j in range(0,n):
#         arr[i][j] = int(input('Enter no.'))
for i in range(0,m):
    print(arr[i])        
# int wkx,wky
# bool dblx,dbly
# dblx = (m%2 == 0?True:False)
# dbly = (n%2 == 0?True:False)
# x = m/2
# y = n/2



for j in range (0,int((n-1)/2)+1):
    if m%2 == 0:
        t1 = arr[int(m/2)][j]
        t2 = arr[int((m/2))-1][j]
        arr[int(m/2)][j] = arr[int(m/2)][n-1-j]
        arr[int((m/2))-1][j] = arr[int((m/2))-1][n-1-j]
        arr[int(m/2)][n-1-j] = t1
        arr[int((m/2))-1][n-1-j] = t2
    else:
        t1 = arr[int(m/2)][j]
        arr[int(m/2)][j] = arr[int(m/2)][n-1-j]
        arr[int(m/2)][n-1-j] = t1

for j in range (0,int((m-1)/2)+1):
    if n%2 == 0:
        t1 = arr[j][int(n/2)]
        t2 = arr[j][int((n/2))-1]
        arr[j][int(n/2)] = arr[m-1-j][int(n/2)]
        arr[j][int((n/2))-1] = arr[m-1-j][int((n/2))-1]
        arr[m-1-j][int(n/2)] = t1
        arr[m-1-j][int((n/2))-1] = t2
    else:
        t1 = arr[j][int(n/2)]
        arr[j][int(n/2)] = arr[-1-j][int(n/2)]
        arr[m-1-j][int(n/2)] = t1
for i in range(0,m):
    print(arr[i])
