/*
* Solution to 219 A. k-String
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,chr[27];
    char str[1001];

    memset(chr,0,sizeof(chr));

    scanf("%d", &n);
    getchar();

    scanf("%s", str);

    for(int i=0; i<strlen(str); i++)
    {
        chr[str[i]-'a'+1]++;
    }



    return 0;
}
