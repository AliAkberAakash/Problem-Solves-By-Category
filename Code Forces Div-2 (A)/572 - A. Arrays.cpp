/*
* Solution to 572- (A. Arrays)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,n1,n2,x,y,p1,p2;
    long long int a[100001],b[100001];

    scanf("%lld %lld %lld %lld", &n1, &n2, &x, &y);

    for(i=0; i<n1; i++)
        scanf("%lld", &a[i]);
    for(i=0; i<n2; i++)
        scanf("%lld", &b[i]);

    p1=x-1;
    p2=(n2-y);

    if(a[p1]<b[p2])
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
