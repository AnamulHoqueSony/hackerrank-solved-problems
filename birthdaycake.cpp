#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tem ;
    int max = INT_MIN;
    map<int,int> coun;

    for(int i = 0 ; i < n ; i++){
        cin >> tem;
        if(max < tem)
          max = tem;
        coun[tem]++;
    }
  cout<<coun[max]<<endl;
}

