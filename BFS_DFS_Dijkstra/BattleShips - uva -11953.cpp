/*
* Solution to BattleShips - UVA - 11953
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

char grid[101][101];
bool bfsGrid[101][101];

void floodFill(int x, int y, int l)
{
    if(x>=0 && x<l && y>=0 && y<l)
    {
        if((grid[x][y]=='x' || grid[x][y]=='@') && bfsGrid[x][y]==false)
        {
            bfsGrid[x][y]=1;

            floodFill(x,y+1,l);
            floodFill(x,y-1,l);
            floodFill(x+1,y,l);
            floodFill(x-1,y,l);
        }
    }
}

int main()
{
    int t,n;

    scanf("%d", &t);

    for(int T=1; T<=t; T++)
    {
        scanf("%d", &n);
        getchar();

        memset(bfsGrid,0,sizeof(bfsGrid));

        for(int i=0; i<n; i++)
        {
            scanf("%s", grid[i]);
            getchar();
        }

        int counter = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='x' && bfsGrid[i][j]==0)
                {
                    counter++;
                    floodFill(i,j,n);
                }
            }
        }

        printf("Case %d: %d\n",T, counter);

    }



    return 0;
}
