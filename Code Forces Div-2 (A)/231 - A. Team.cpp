/*
* Solution to 231 A. Team
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;

    scanf("%d", &t);

    int ans=0;

    while(t--)
    {
        scanf("%d %d %d", &a, &b,&c);

        if((a&b)||(a&c)||(b&c))
        {
            ans++;
        }

    }

    printf("%d\n", ans);

    return 0;
}
