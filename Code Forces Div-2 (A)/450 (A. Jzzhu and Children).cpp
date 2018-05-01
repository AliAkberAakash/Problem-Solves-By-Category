/*
* Solution to 450 (A. Jzzhu and Children)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,x;
    queue< pair <int,int> > q;

    scanf("%d %d", &m,&n);

    for(int i=0; i<m; i++)
    {
        scanf("%d", &x);
        q.push( make_pair(x,i+1));
    }

    int counter;

    while(!q.empty())
    {
        pair <int,int> p=q.front();
        q.pop();

        x=p.first;
        if(q.size()==0)
            counter=p.second;


        if(x-n>0)
            q.push(make_pair(x-n,p.second));
    }

    printf("%d\n",counter);


    return 0;
}
