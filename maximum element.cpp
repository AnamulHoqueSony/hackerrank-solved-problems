#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s,t;
    int maxi = 0;
    int n ,q,tem;
    cin >> n;
    while(n --){
        scanf("%d",&q);
        if(q == 1){
            cin >> tem;
            s.push(tem);
           if(maxi < tem)
              t.push(tem);
           else
              t.push(t.top());
        }
        else if(q == 2){

            s.pop();
            t.pop();
            if(t.empty())
              maxi = 0;
        }
        else{
            cout<<t.top()<<endl;
        }
    }
    return 0;
}
