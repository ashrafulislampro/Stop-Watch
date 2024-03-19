#include <stdio.h>

int main()
{
    int hour, minute, second;
    printf("Enter Hour Minute Second : ");
    scanf("%d%d%d", &hour, &minute, &second);

    int h, m, s;
    while (1)
    {
        printf("%0.2d:%0.2d:%0.2d", hour, minute, second);
        if (h == hour && m == minute && s == second)
        {
            break;
        };
        s++;
        if (s == 60)
        {
            m++;
            s = 0;
        };
        if (m == 60)
        {
            h++;
            m = 0;
        };
    }
    return 0;
}