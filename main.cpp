double my_Pow(double x, int n)
{
    //����������� ���������� �������� ����� � ����� ������������� ������� � ������� �����(����� ���������)
    if (n == 0)
        return 1.0;
    else
        return x * myPow(x, n - 1);
}