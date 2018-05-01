/*
* Solution to: New Year Transportation Codeforces - Good Bye 2014
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,ai;

    bool loop=false;

    scanf("%lld %lld", &n, &t);

    vector <long long int> adj[n+1];
    bool visited[n+1];
    memset(visited,0,sizeof(visited));

    for(int i=1; i<n; i++)
    {
        scanf("%lld", &ai);
        adj[i].push_back(i+ai);
    }

    queue <long long int> q;

    q.push(1);
    visited[1]=1;

    while(!q.empty())
    {
        int z=q.front();
        q.pop();
        if(z==t)
        {
            loop=true;
            break;
        }
        for(int i=0; i<adj[z].size(); i++)
        {
            if(!visited[adj[z][i]])
            {
                visited[adj[z][i]]=1;
                q.push(adj[z][i]);
            }
        }
    }

    if(loop)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
