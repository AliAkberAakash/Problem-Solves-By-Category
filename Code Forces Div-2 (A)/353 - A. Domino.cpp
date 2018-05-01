/*
* Solution to 353 - A. Domino
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

bool isOdd(int n)
{
    if(n%2)
        return true;
    return false;
}

bool isEven(int n)
{
    if(n%2)
        return false;
    return true;
}

int main()
{
    int n,x,y,oddUp,oddLow;

    scanf("%d", &n);

    int sum1,sum2;

    sum1=sum2=oddUp=oddLow=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        sum1+=x;
        sum2+=y;
        if(isOdd(x))
            oddUp++;
        if(isOdd(y))
            oddLow++;
    }

    if(isEven(sum1) && isEven(sum2))
        printf("0\n");
    else if(isOdd(oddUp) && isOdd(oddLow))
    {
        if(n==1)
        {
            if(oddUp==oddLow)
            printf("-1\n");
        }
        else
            printf("1\n");
    }
    else
        printf("-1\n");

    return 0;
}
