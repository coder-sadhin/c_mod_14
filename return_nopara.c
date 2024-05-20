#include <stdio.h>

int sumTotal(){
    int x,y;
    scanf("%d %d", &x, &y);
    int sum=x+y;
    return sum;
}

int main()
{
    int s=sumTotal();
    printf("%d",s);
    return 0;

}