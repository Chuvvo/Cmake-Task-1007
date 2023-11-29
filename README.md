# Cmake-Task-1007
Решение задачи с собеседования в Созвездие (Построение Кривой Бизье)
Используется:
С++ Visual Studio 2022
Python PyCharm Community Edition 2022.2.3
Для Python так же необходимо установить package matplotlib 3.8.2 для визуализации Кривых Бизье
Инструкция:

Перейдите в Cmake-Task-1007/n1007/out/build/x64-debug
/n1007
Там хранятся текстовые файлы для ввода данных и исполняемый файл.

1)
В Файл input.txt вписать тестовые значения таком виде:
int R - размерность точек
int N - кол-во точек
int T - равномерное разбиение отрезка [0, 1] на T+1-штук точек (Чем больше T, тем кривая более плавная)
// для 3х мерного случая
x1 y1 z1
x2 y2 z2
.  .  .
.  .  .
.  .  .
xn yn zn
2)
Запустить файл n1007.exe
(Примеры)
Тестовые значения 3D:
3
3
10
0 0 0
1. 2. 3
10. 6. 4
Тестовые значения 2D:
2
3
10
0 0 
1 2
10 6
