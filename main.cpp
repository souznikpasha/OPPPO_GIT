double my_Pow(double x, int n)
{
    //����������� ���������� �������� ����� � ����� ������������� ������� � ������� �����(����� ���������)
    if (n == 0)
        return 1.0;
    else
        return x * myPow(x, n - 1);
}

//������� ���������� ����� num � ������� deg
long powerFast(long num, long deg) {
    long result = 1;
    while (deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num *= num;
        }
        else {
            deg--;
            result *= num;
        }
    }

    return result;
}