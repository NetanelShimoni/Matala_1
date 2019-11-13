#define e 2.71828
double Exp(int x)
{
    if (x == 0)
    {
        return 1;
    }
    if (x > 0)
    {
        return (e * Exp(x - 1));
    }
    if (x < 0)
    {
        return 1 / (Exp(-x));
    }
    return 0;
}
double Pow(double x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y > 0)
    {
        return x * Pow(x, y - 1);
    }
    else
    {
        return 1 / Pow(x, -y);
    }
}