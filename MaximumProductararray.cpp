#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximumSubarrayProduct(vector < int > arr) {
  int n = arr.size();
  int maxProduct = INT_MIN;

  for (int i = 0; i <= n - 1; i++) {
    int currPro = 1;
    for (int j = i; j <= n - 1; j++) {
      currPro *= arr[j];
      if (currPro > maxProduct) {
        maxProduct = currPro;
      }
    }
  }

  return maxProduct;
}
int main() {
   
    vector<int> a = {2,3,-2,4};
    cout << maximumSubarrayProduct(a) << endl;
    return 0;
}