#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    string st;
    scanf("%d",&n);
    getchar();
    int coun = 0;
    while(n--){
        cin >> st;
        coun = 0;
        for(int i = 0 ; i < st.size()-1; i++){
            if(st[i] == st[i+1])
                coun++;
        }
        cout<<coun<<endl;
    }

}
