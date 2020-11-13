double my_Pow(double x, int n)
{
    //выполняющую возведение дробного числа в целую положительную степень с помощью цикла(через умножение)
    if (n == 0)
        return 1.0;
    else
        return x * myPow(x, n - 1);
}