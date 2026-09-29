### Задача 1. Kisa and Osya was here
```py
name1 = input()
name2 = input()
print(name1 + " and " + name2 + " was here")
```

### Задача 2. Три плюс два
```py
a = input().split()
b = input().split()
print(a[0], b[0], a[1], b[1], a[2], sep=",")
```

### Задача 3. Работа по письму
```py
s1, a1 = input().split()
s2, a2 = input().split()
s3, a3 = input().split()

a1 = int(a1)
a2 = int(a2)
a3 = int(a3)

result = len(s1) * a1 + len(s2) * a2 + len(s3) * a3
print(result)
```

### Задача 4. Строка в рамке
```py
s = input()

print("*" * (len(s) + 4))
print("* " + s + " *")
print("*" * (len(s) + 4))
```

### Задача 5. Время на дистанции
```py
h1, m1, s1 = map(int, input().split())
h2, m2, s2 = map(int, input().split())

q = h1 * 60 * 60 + m1 * 60 + s1
w = h2 * 60 * 60 + m2 * 60 + s2

print(w - q)
```

### Задача 6. Обратный отсчёт
```py
n = int(input())

if n == 1:
    print("pusk")
else:
    print(n - 1)
```

### Задача 7. Дырка
```py
a, b, c = map(int, input().split())

if a == 3 and b == 3 and c == 3:
    print("hole")
else:
    print(a + b + c)
```

### Задача 8. Самое длинное слово
```py
a, b, c = input().split()

if len(a) > len(b) and len(a) > len(c):
    print(a)
elif len(b) > len(a) and len(b) > len(c):
    print(b)
else:
    print(c)
```

### Задача 9. Больше меньше
```py
a, b = map(int, input().split())

if a < b:
    print("<")
elif a > b:
    print(">")
else:
    print("=")
```

### Задача 10. Расстояние до отрезка
```py
a, b, c = map(int, input().split())

l = min(a, b)
r = max(a, b)

if l <= c <= r:
    print(0)
elif c < l:
    print(l - c)
else:
    print(c - r)
```

### Задача 11. 3x+1
```py
n = int(input())

while n != 1:
    print(n, end=" ")
    if n % 2 != 0:
        n = 3 * n + 1
    else:
        n = n // 2
print(n)
```

### Задача 12. Ближайшая степень двойки
```py
n = int(input())
q = 1

while q * 2 <= n:
    q = q * 2
print(q)
```

### Задача 13. Номер в очереди
```py
s = input()
q = 1

while s != "Petr":
    q = q + 1
    s = input()

print(s)
```

### Задача 14. Не делится на ...
```py
n, a = map(int, input().split())
cnt = 0
q = a

while cnt < n:
    if q % 2 != 0 and q % 3 != 0 and q % 5 != 0 and q % 7 != 0:
        print(q, end=" ")
        cnt = cnt + 1
    q = q + 1
```

### Задача 15. НОД
```py
a, b = map(int, input().split())

while b != 0:
    a, b = b, a % b
print(a)
```