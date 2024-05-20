#include <stdio.h>


int sumTotal(int x,int y){
    int s=x+y;
    return s;
}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int sum=sumTotal(x,y);
    printf("%d", sum);
    return 0;
}