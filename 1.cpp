#include<bits/stdc++.h>
using namespace std;
#define TC ll tc;cin>>tc;for(ll cc=0;cc<=tc;cc++)
typedef long long ll;
typedef long double ld;
int main()
{
    TC{
        int x;
        scanf("%d",&x);
        //char name[30];
   // printf("Enter name: ");
    //fgets(name, sizeof(name), stdin);
    string name;
    getline(cin,name);
    
    int h=0,j=0;

    for(int i=0;i<x;i++){
    if(name[i]=='H')
    {
        h++;
    }
        else
        {
            j++;
        }
        }
    if(h>j)
    {
        printf("E");
    }
    else
    {
        printf("P");
    }
    
    return 0;
    
    }
}