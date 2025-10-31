#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int t;
    int p;
    int n;
    int k;
    printf("あなたの年齢は？");
    scanf("%d", &a);
    
    printf("あなたは今まで煙草を何本吸ったか？");
    scanf("%d",&t);
    b = 520000;
    
    p = a * b;
    c = 52596000;
    n = c - p;
    
    d = 15;
    
    e = t * d;
    k = n - e;
    
    if (k <= 0)
    {
        printf("死んでる");
    }
    
    else if (k >= 26298720)
    {
        printf("余裕");
    }
    
    else
    {
        printf("頑張れ");
    }
    
    return 0;
}