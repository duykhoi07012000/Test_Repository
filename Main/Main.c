#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool CheckNum(unsigned long long int del)
{
    if (del>=0)
    {
        unsigned long long int sr = sqrt(del);
        return (sr*sr == del);
    }
    return false;
    /*unsigned long long int i = 0;
    while(i*i <= del)
    {
        if(i*i == del)
        {
            return 1;
        }
        ++i;
    }*/
}
int Result(unsigned long long int Candles)
{
    unsigned long long int delta;
    delta = 1 + 4*2*Candles;
    if(CheckNum(delta)==true)
    {
        return (-1+sqrt(delta))/2;
    }
    else
    {
        return -1;
    }

}
int main(void)
{
    int T, TestCase;
    unsigned long long int TotalCandles;
    int re;
    scanf("%d", &T);
    for(TestCase = 1; TestCase<=T; ++TestCase)
    {
        scanf("%lld", &TotalCandles);
        re = Result(TotalCandles);
        printf("#%d %d\n", TestCase, re);
    }
    return 0;
}