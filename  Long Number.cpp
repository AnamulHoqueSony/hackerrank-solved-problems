#include<bits/stdc++.h>
using namespace std;


int main()
{
  int arra[10];
  long long int n;
  string st,st1;
   cin >> n;
   getchar();
   getline(cin,st);
   for(int i = 0 ; i < 9 ; i++ )
        scanf("%d",&arra[i]);
   int len =st.size();
   int lock = 2;
   for(int i = 0 ; i < len; i++){
         if(((st[i]- '0') < arra[st[i]- '0' -1] )&& lock){
             st[i] = arra[st[i] - '0'-1] + '0';

             lock = 1;
         }
         else{
              if(lock == 1)
                 lock = 0;
         }


   }
   cout<<st<<endl;

}
