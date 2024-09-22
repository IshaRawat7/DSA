#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

/*Infix to prefix
1. (a-b/c)*(a/k-l) = Infix
2. prefix = *-a/bc-/akl

steps:
1. If operand print
2.If "(" push to stack.
3.If ")" pop from stack and print until "(" is found.
4.If operator
   pop from stack and print until an operator with less precedence is found.

*/
char prece(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infix_to_prefix(string s)
{
    reverse(s.begin(), s.end());
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prece(st.top()) >= prece(s[i]))
            {

                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    cout << infix_to_prefix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}