
#include <bits/stdc++.h>

using namespace std;

vector<int> computePi(const string& pattern) {
    int m = pattern.size();
    vector<int> pi(m, 0);
    int k = 0;
    for (int q = 1; q < m; ++q) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = pi[k - 1];
        }
        if (pattern[k] == pattern[q]) {
            k++;
        }
        pi[q] = k;
    }
    return pi;
}

vector<int> kmpSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> pi = computePi(pattern);
    vector<int> matches;
    int q = 0;
    for (int i = 0; i < n; ++i) {
        while (q > 0 && pattern[q] != text[i]) {
            q = pi[q - 1];
        }
        if (pattern[q] == text[i]) {
            q++;
        }
        if (q == m) {
            matches.push_back(i - m + 1);
            q = pi[q - 1];
        }
    }
    return matches;
}

int main() {
    string text ;
    string pattern;
    cin>>text>>pattern;
    vector<int> matches = kmpSearch(text, pattern);
    cout << matches.size()<< endl;
    

    return 0;
}
