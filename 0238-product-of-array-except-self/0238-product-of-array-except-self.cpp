#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();

        vector<int> prefProduct(n);
        vector<int> suffProduct(n);
        vector<int> res(n);

        prefProduct[0] = 1;

        for (int i = 1; i < n; i++) {
            prefProduct[i] = arr[i - 1] * prefProduct[i - 1];
        }

        suffProduct[n - 1] = 1;

        for (int j = n - 2; j >= 0; j--) {
            suffProduct[j] = arr[j + 1] * suffProduct[j + 1];
        }

        for (int i = 0; i < n; i++) {
            res[i] = prefProduct[i] * suffProduct[i];
        }

        return res;
    }
};