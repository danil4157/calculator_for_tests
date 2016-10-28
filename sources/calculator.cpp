double summary (float a, float b) {
    return a + b;
}

double subtraction (float a, float b) {
    return a - b;
}

double multiplication (float a, float b) {
    return a * b;
}

double division (float a, float b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return -1;
    }
}

double involution (float a, int c) {
    double result = 0;
    result = a;
    if (c >= 1) {
        for (int i = 1; i < c; i++) {
            result *= a;
        }
        return result;
    }
    if (c == 0) {
        return 1;
    }
    if (c < -1) {
        return 1/a;
    }
}

double absolute (float a) {
    return (a >= 0) ? a : -a;
}
double square_root (float a)
{
    double x1 = 0 , x2;
    x2 = a;
    while (absolute(x1 - x2) > 0.00001) {
        x1 = x2;
        x2 = (x1 + a/x1)/2;
    }
    return x2;
}
