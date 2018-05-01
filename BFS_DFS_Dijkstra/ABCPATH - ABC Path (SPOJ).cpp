#include<bits/stdc++.h>

using namespace std;

char grid[55][55];
int r,c;

bool valid(int x, int y)
{
    if(x>=0 && x<r && y>=0 && y<c)
        return true;

    return false;
}

void flood(int x, int y, char& ans)
{
    if(valid(x,y))
    {
        if(grid[x][y+1]==grid[x][y]+1)
        {
            flood(x,y+1,ans);
            ans=max(ans,grid[x][y+1]);
        }
        if(grid[x][y-1]==grid[x][y]+1)
        {
            flood(x,y-1,ans);
            ans=max(ans,grid[x][y-1]);
        }
        if(grid[x-1][y]==grid[x][y]+1)
        {
            flood(x-1,y,ans);
            ans=max(ans,grid[x-1][y]);
        }
        if(grid[x+1][y]==grid[x][y]+1)
        {
            flood(x+1,y,ans);
            ans=max(ans,grid[x][y]);
        }
        if(grid[x-1][y+1]==grid[x][y]+1)
        {
            flood(x-1,y+1,ans);
            ans=max(ans,grid[x-1][y+1]);
        }
        if(grid[x+1][y+1]==grid[x][y]+1)
        {
            flood(x+1,y+1,ans);
            ans=max(ans,grid[x+1][y+1]);
        }
        if(grid[x-1][y-1]==grid[x][y]+1)
        {
            flood(x-1,y-1,ans);
            ans=max(ans,grid[x-1][y-1]);
        }
        if(grid[x+1][y-1]==grid[x][y]+1)
        {
            flood(x+1,y-1,ans);
            ans=max(ans,grid[x+1][y-1]);
        }
    }
}

int main()
{
    int cs=0;

    while(1)
    {
        scanf("%d %d", &r, &c);
        getchar();

        if(!(r&&c))
            break;

        for(int i=0; i<r; i++)
        {
            scanf("%s", grid[i]);
        }

        char ans=64;

        for(int i=0; i<r; i++)
        {
            for(int j=0;j<c; j++)
            {
                if(grid[i][j]=='A')
                {
                    ans=max(ans,'A');
                    flood(i,j,ans);
                }
            }
        }

        cs++;
        printf("Case %d: %d\n", cs, (ans-'A'+1));
    }

    return 0;
}
