double my_Pow(double x, int n)
{
    //����������� ���������� �������� ����� � ����� ������������� ������� � ������� �����(����� ���������)
    if (n == 0)
        return 1.0;
    else
    {   
        if (x < 0)
        {
            if (n % 2 = 0)
            {
                x = -x;
                return x * myPow(x, n - 1);
            }
            else
            {
                return x * myPow(x, n - 1);
            }
        }
        return x * myPow(x, n - 1);
    }

}