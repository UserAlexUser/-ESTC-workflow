double sum(double v1[], double v2[], double resv[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        resv[i] = v1[i] + v2[i];
    }
    return 0;
}

double sub(double v1[], double v2[], double resv[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        resv[i] = v1[i] - v2[i];
    }
    return 0;
}

double dot(double v1[], double v2[])
{
    int i;
    double resv;
    resv = 0;
    for (i = 0; i < 3; i++)
    {
        resv += v1[i] * v2[i];
    }
    return resv;
}

double cross(double v1[], double v2[], double resv[])
{
    resv[0] = v1[1] * v2[2] - v1[2] * v2[1];
    resv[1] = v1[2] * v2[0] - v1[0] * v2[2];
    resv[2] = v1[0] * v2[1] - v1[1] * v2[0];
    return 0;
}