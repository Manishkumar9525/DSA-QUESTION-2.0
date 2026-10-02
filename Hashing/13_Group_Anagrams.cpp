#include <bits/stdc++.h>
using namespace std;

// Question: Group words that are anagrams of each other.
// Input: {"eat", "tea", "tan", "ate", "nat", "bat"}
// Output: {"bat"}, {"eat", "tea", "ate"}, {"tan", "nat"}

vector<vector<string>> Group_Anagrams(const vector<string>& words) {
    map<string, vector<string>> groups;
 
    for(string x:words){
       string key=x;
       sort(key.begin(),key.end());
       groups[key].push_back(x);
    }
    vector<vector<string>>result;
    for(auto x:groups){
       result.push_back(x.second);
    }

    return result;
}

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = Group_Anagrams(words);

    for (const vector<string>& group : result) {
        for (const string& word : group) {
            cout << word << ' ';
        }
        cout << '\n';
    }

    return 0;
}
