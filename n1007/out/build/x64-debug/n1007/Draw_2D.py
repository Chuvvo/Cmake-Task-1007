import matplotlib.pyplot as plt
Xk = list()
Yk = list()

Xkk = list()
Ykk = list()


with open("input.txt") as f:
    for i in range(3):
        f.readline()
    for line in f:
        Xk.append([float(x) for x in line.split()][0])
        Yk.append([float(x) for x in line.split()][1])
f.close()

with open("output.txt") as f:
    for line in f:
        Xkk.append([float(x) for x in line.split()][0])
        Ykk.append([float(x) for x in line.split()][1])
f.close()

plt.figure(0)
plt.title('кривая Бизье')
plt.plot(Xk, Yk)
plt.plot(Xkk, Ykk)
plt.show()