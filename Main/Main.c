#include <stdio.h>
#include <stdbool.h>




#define N 100000
int main(void)
{
    int a[N];
    int T, TestCase, NumSize, cnt, check;
    scanf("%d", &T);
    for(TestCase = 1; TestCase <= T; ++TestCase)
    {
        scanf("%d", &NumSize);
        for(int i = 0; i < NumSize; i++)
        {
            scanf("%d",&a[i]);
        }
        cnt = 0;
        int Pos = 0;
        int Check = 0;
        for(int j = 0; j == Check; j++)
        {
            for(int k = Pos; k < NumSize-2; k++)
            {
                if(a[k] < a[k+1])
                {
                    if(a[k+1] <= a[k+2])
                    {
                        continue;
                    }
                    else
                    {
                        Pos = k+2;
                        Check++;
                        cnt++;
                        break;
                    }
                }
                else if(a[k] > a[k+1])
                {
                    if(a[k+1] >= a[k+2])
                    {
                        continue;
                    }
                    else
                    {
                        Pos = k+2;
                        Check++;
                        cnt++;
                        break;
                    }
                }
                else
                {
                    continue;
                }                
            }
        }    
        printf("%d\n", cnt+1);
    }
    
    return 0;
}