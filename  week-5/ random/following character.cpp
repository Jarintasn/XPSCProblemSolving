#include <iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvxyz";

    while (t--) {
        int n;
        cin >> n;

        // অক্ষর ও তাদের মান সংরক্ষণে ম্যাপ
        map<char, int> mp;
        for (auto c : s) {
            mp[c] = 0; // সব অক্ষরের প্রাথমিক মান 0
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];

            // মানের জন্য অক্ষর খুঁজুন
            for (auto &it : mp) {
                if (it.second == v[i]) {
                    cout << it.first;
                    it.second++; // মান আপডেট
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
