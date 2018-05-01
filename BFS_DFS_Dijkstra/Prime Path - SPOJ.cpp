#include<bits/stdc++.h>

using namespace std;

bool prime[10001];
bool visited[10001];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p <=n; p++)
    {
        if(prime[p])
        {
            for(int i=2*p; i<=n; i++)
                prime[p]=0;
        }
    }

}

bool differ(int a, int b)
{
    int diff=0;

    while(a&b)
    {
        if(a%10 == b%10)
            diff++;

        a/=10;
        b/=10;
    }

    if(diff>1)
        return false;

    return true;
}

int main()
{
    sieve(10000);

    int t, n1, n2;

    scanf("%d", &t);

    while(t--)
    {
        memset(visited, 0, sizeof(visited));
        int counter=0;
        scanf("%d %d", &n1, &n2);
        int x=n1;



        printf("%d\n", counter);

    }

    return 0;
}
