#include <bits/stdc++.h>
using namespace std;
int prime[1230];
void print(stack<int> s) {
  while (!s.empty()) {
    printf("%d ", s.top());
    s.pop();
  }
  cout << endl;
}
void sieve() {

  int n = 10000;
  bool arra[n + 1];

  memset(arra, 1, sizeof(arra));
  for (int p = 2; p <= n; p++) {
    if (arra[p] == 1) {
      for (int j = p * p; j <= n; j += p)
        arra[j] = 0;
    }
  }

  int coun = 0;
  for (int i = 2; i <= n; i++) {
    if (arra[i] == 1) {
      prime[coun++] = i;
    }
  }
}
int main() {
  sieve();
  int n, q;
  stack<int> A0, A1, B;
  queue<int> ans;

  scanf("%d%d", &n, &q);

  for (int i = 0; i < n; i++) {
    int tem;
    cin >> tem;
    A0.push(tem);
  }
  for (int i = 1; i <= q; i++) {
    if (i % 2 != 0) {

      while (!A0.empty()) {
        if (A0.top() % prime[i - 1] == 0) {
          B.push(A0.top());
          A0.pop();
        } else {
          A1.push(A0.top());
          A0.pop();
        }
      }

    } else {
      while (!A1.empty()) {
        if (A1.top() % prime[i - 1] == 0) {
          B.push(A1.top());
          A1.pop();
        } else {
          A0.push(A1.top());
          A1.pop();
        }
      }
    }

    while (!B.empty()) {
      ans.push(B.top());
      B.pop();
    }
  }
  while (!ans.empty()) {
    cout << ans.front() << endl;
    ans.pop();
  }
 if(!A0.empty()){
   cout << A0.top() << endl;
   A0.pop();
 }
 if (!A1.empty()) {
   cout << A1.top() << endl;
   A1.pop();
 }
}
