#include <stdio.h>

int times=0;

void hanoi(int n, char A, char B, char C) 
{
    if(n == 1) 
    {
        printf("從 %c 移到 %c\n", A, C);
        times++;
    }
    else 
    {
        hanoi(n-1, A, C, B);	 
        hanoi(1, A, B, C);		
        hanoi(n-1, B, A, C);	
    }
}

int main() 
{
    int n;
    printf("輸入河內塔層數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("\完成轉移需%d\個步驟\n\n",times);
    system("pause");
    return 0;
}

