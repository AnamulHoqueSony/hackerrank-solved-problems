#include<bits/stdc++.h>
using namespace std;



int main() {
    string st="";
    string st1;
    stack<string> s;
    s.push(st);
    int n,q;
    int k;
    cin >> n;

    while(n--){
        scanf("%d",&q);

        if(q == 1){
             s.push(st);
             getchar();
             getline(cin,st1);
             st +=st1;

        }
        else if( q == 2){
             s.push(st);
            scanf("%d",&k);
          st.erase(st.size() - k, st.size());

        }
        else if (q == 3){
          scanf("%d", &k);
          cout << st[k-1]<<endl;
        }
        else{
            if(!s.empty()){
                st.clear();
                st +=s.top();
                s.pop();
            }
        }
        //cout<<st<<endl;
    }

    return 0;
}
