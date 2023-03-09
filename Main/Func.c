#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define N 200001
char a[N];

// int Calculate(char a[])
// {
//     int len = strlen(a);
//     int cnt = 0;
//     bool fCheck = true;
//     bool fStop = true;
//     int i = 0;
//     int ii = 0;
//     int cnt_b = 0;
//     while(fCheck == true)
//     {
//         if(a[i] == 'B')
//         {
//             cnt_b++;
//             if(a[i+1] == 'W')
//             {
//                 *&a[i+1] = 'B';
//                 i = cnt_b+ii;
//                 cnt += cnt_b;
//                 cnt_b = 0;
//             }
//             else
//             {
//                 if(i == len-1 && a[i] != 'W')
//                 {
//                     fCheck = false;
//                 }
//                 else
//                 {
//                     i++;
//                 }
//             }
//         }
//         if(a[ii] == 'W' && fStop == true)
//         {
//             ii++;
//             if(a[ii] == 'B')
//             {
//                 i = ii;
//                 fStop = false;
//             }
//             else if(ii == len-1 && a[ii] == 'W')
//             {
//                 fCheck = false;
//             }
//         }
//     }
//     return cnt;
// }

int main(void)
{
    int T, TestCase, re;
    scanf("%d", &T);
    for(TestCase = 1; TestCase <= T; ++TestCase)
    {
        scanf("%s", &a);
        int len = strlen(a);
        int cnt = 0;
        bool fCheck = true;
        bool fStop = true;
        int i = 0;
        int ii = 0;
        int cnt_b = 0;
        while(fCheck == true)
        {
            if(a[i] == 'B')
            {
                cnt_b++;
                if(a[i+1] == 'W')
                {
                    *&a[i+1] = 'B';
                    i = cnt_b+ii;
                    cnt += cnt_b;
                    cnt_b = 0;
                }
                else
                {
                    if(i == len-1 && a[i] != 'W')
                    {
                        fCheck = false;
                    }
                    else
                    {
                        i++;
                    }
                }
            }
            if(a[ii] == 'W' && fStop == true)
            {
                ii++;
                if(a[ii] == 'B')
                {
                    i = ii;
                    fStop = false;
                }
                else if(ii == len-1 && a[ii] == 'W')
                {
                    fCheck = false;
                }
            }
        }
        printf("#%d %d\n", TestCase, cnt);
    }
    return 0;
}