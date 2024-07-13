#include<iostream>
using namespace std;

// int maximumGain(string s, int x, int y) {
//     int count = 0;
//         if(x > y) {
//             for(int i = 0; i< s.length();i++){
//                 if( i < s.length()-1 && s[i] == 'a' && s[i+1] == 'b'){
//                     count += x;
//                     s.erase(i,i+1);
//                 }
//             }  
//         }
//         else {
//             for(int i = 0; i< s.length();i++){
//                 if(s[i]  == 'b' && s[i+1] == 'a'){
//                     count += y;
//                     s.erase(i,i+1);
//                 }
//             }  
//         }
//         return count;  
//     }

    int maximumGain(string s, int x, int y) {
        int count = 0;

        if (x > y) {
            count += removeSubstring(s, "ab", x);
            count += removeSubstring(s, "ba", y);
        } else {
            count += removeSubstring(s, "ba", y);
            count += removeSubstring(s, "ab", x);
        }

        return count;
    }

    int removeSubstring(string& s, string target,int points) {
        int count = 0;
        int index = 0;

        // Iterate through the string
        for (int i = 0; i < s.size(); i++) {
            // Add the current character
            s[index++] = s[i];

            // Check if we've written at least two characters and
            // they match the target substring
            if (index > 1 && s[index - 2] == target[0] && s[index - 1] == target[1]) {
                index -= 2;  // Move write index back to remove the match
                count += points;
            }
        }
        s.erase(s.begin() + index, s.end());

        return count;
    }

int main() {
    string s = "cdbcbbaaabab";
    int x = 4;
    int y = 5;
    int ans = maximumGain(s,x,y);
    cout<<ans;
    return 0;
}