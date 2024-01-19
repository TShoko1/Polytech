def euler_phi_function(n):
    phi = n
    p = 2
    while p * p <= n:
        if n % p == 0:
            while n % p == 0:
                n //= p
            phi -= phi // p
        p += 1

    if n > 1:
        phi -= phi // n

    return phi

# Пример использования
n = 4387
result = euler_phi_function(n)
print(f"Значение функции Эйлера для {n}: {result}")