// Question: Given a Roman numeral, convert it to an integer.
//
// Example Input:
// "MCMIV"
//
// Example Output:
// 1904

#include <iostream>
#include <unordered_map>
using namespace std;

int Roman_to_Integer(string s) {

    unordered_map<char, int> value = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int sum = 0;

    for (int i = 0; i < s.length(); i++) {

        if (i + 1 < s.length() &&
            value[s[i]] < value[s[i + 1]]) {

            sum -= value[s[i]];
        }
        else {
            sum += value[s[i]];
        }
    }

    return sum;
}


int main() {

    string s = "MCMIV";

    int result = Roman_to_Integer(s);

    cout << result;

    return 0;
}
