import matplotlib.pyplot as plt
Xk = list()
Yk = list()
Zk = list()

Xkk = list()
Ykk = list()
Zkk = list()

with open("input.txt") as f:
    for i in range(3):
        f.readline()
    for line in f:
        Xk.append([float(x) for x in line.split()][0])
        Yk.append([float(x) for x in line.split()][1])
        Zk.append([float(x) for x in line.split()][2])
f.close()

with open("output.txt") as f:
    for line in f:
        Xkk.append([float(x) for x in line.split()][0])
        Ykk.append([float(x) for x in line.split()][1])
        Zkk.append([float(x) for x in line.split()][2])
f.close()


fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
plt.title('кривая Бизье')

ax.plot(Xk, Yk, Zk)
ax.plot(Xkk, Ykk, Zkk)
plt.show()
