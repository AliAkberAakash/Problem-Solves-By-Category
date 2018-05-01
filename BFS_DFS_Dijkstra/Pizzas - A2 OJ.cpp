/*
* Solution to Pizzas - A2 OJ
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,s;

    scanf("%d", &t);

    for(int to=1; to<=t; to++)
    {
        scanf("%d", &n);
        s=0;
        while(n--)
        {
            scanf("%d", &x);
            s+=x;
        }

        printf("Case %d: %d\n", to, s);
    }



    return 0;
}
