#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    int arra[n];

    scanf("%d%d",&n,&d);

    for(int i = 0 ; i < n ; i++)
       scanf("%d",&arra[i]);

    d = d%n;
    cout<<d<<endl;

    for(int i = d ; i < n ; i++)
       printf("%d ",arra[i]);

    for(int i = 0 ;i < d ; i++)
       printf("%d ",arra[i]);



}

