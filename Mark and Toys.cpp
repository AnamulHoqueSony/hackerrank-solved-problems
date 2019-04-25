#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>> n;
    cin>> k;
    int arra[n+1];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arra[i]);
    }
    sort(arra,arra+n);
    int sum = 0;
    int coun = 0 ;
    for(int i = 0 ; i <n ; i++){
        if(k  >= sum + arra[i]){
            sum +=arra[i];
            coun ++;
        }
        else
            break;
    }
    cout << coun <<endl;
}
