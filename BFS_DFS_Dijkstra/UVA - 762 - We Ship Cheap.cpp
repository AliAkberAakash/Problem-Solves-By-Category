/*
* Solution to UVA 762 - We Ship Cheap
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

void printPath(string a, string b,map <string,string> route)
{
    if(a==b)    return;

    printPath(route[a],b,route);
    cout<<a<<' '<<route[a]<<endl;
}

int main()
{
    string s1, s2;
    int n;

    while(scanf("%d", &n)==1)
    {
        map <string, string> route;
        map <string, vector<string> > adj;
        map <string, int> visited;
        string st, en;
        bool yes=false;

        for(int i=0; i<n; i++)
        {
            cin>>s1>>s2;

            adj[s1].push_back(s2);
            adj[s2].push_back(s1);

            visited[s1]=-1;
            visited[s2]=-1;
        }

        cin>>st>>en;

        queue<string> q;

        q.push(st);
        visited[st]+=1;

        while(!q.empty())
        {
            string z=q.front();
            q.pop();

            if(z==en)
            {
                yes=true;
                break;
            }

            int siz=adj[z].size();

            for(int i=0; i<siz; i++)
            {

                if(visited[adj[z][i]]==-1)
                {
                    q.push(adj[z][i]);
                    visited[adj[z][i]]+=1;
                    route[adj[z][i]]=z;
                }
            }
        }

        if(yes)
            printPath(st,en,route);
        else
            printf("No route\n");

        puts("");

    }


    return 0;
}
