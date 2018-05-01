/*
* Solution to 435 - A. Queue on Bus Stop
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,ans;

    queue <int> q;

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        q.push(x);
    }

    ans=0;
    while(!q.empty())
    {
        ans++;
        x=0;

        while(!q.empty())
        {
                if(x + q.front() <= m)
                {
                    x += q.front();
                    q.pop();
                }
                else if(x + q.front() > m)
                    break;
        }
    }

    printf("%d\n", ans);


    return 0;
}
