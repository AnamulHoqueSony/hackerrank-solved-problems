#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {

   int n = arr[0].size();
   long long int left_dia = 0;
   long long int right_dia = 0;
   int l_i=0,l_j=0;
   int r_i=0,r_j=n-1;
   while(n--){
       left_dia += arr[l_i++][l_j++];
       right_dia +=arr[r_i++][r_j--];
   }
  return abs(left_dia - right_dia);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

