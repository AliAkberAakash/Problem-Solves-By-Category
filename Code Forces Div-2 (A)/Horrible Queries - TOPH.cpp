/*
* Solution to Horrible Queries - Toph
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int arr[100001];

int main()
{
    int n,l,r,k,q;

    int freq[51];

    memset(freq,0,sizeof(freq));

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    scanf("%d", &q);

    cout<<"extra :"<<endl;
        for(int i=1; i<51; i++)
            if(freq[i])
                cout<<i<<' '<<freq[i]<<endl;

    while(q--)
    {
        scanf("%d %d %d", &l, &r, &k);
        int ans=0;

        for(int i=l-1; i<r; i++)
        {
            cout<<"Freq of :"<<arr[i]<<endl;
            if(freq[arr[i]] == k)
                ans++;
        }

        printf("%d\n", ans);
    }


    return 0;
}
