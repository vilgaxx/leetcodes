#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string reverseParentheses(string s) {
    stack<int> stack;
    string output = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            stack.push(output.length());
        }
        else if(s[i] == ')'){
            int start = stack.top();
            stack.pop();
            reverse(output.begin() + start, output.end());
        }
        else {
            output += s[i];
        }
    }
    return output;
    
}
int main() {
    string s = "(u(love)i)";
    string output  = reverseParentheses(s);
    cout<<output;
    return 0;
}