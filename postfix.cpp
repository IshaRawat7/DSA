#include<iostream>
#include<math.h>
#include<string>
#include<stack>
using namespace std;
/*
Post fix evaluation of : 46 + 2/5*7+ = 32
*/

int postfixeva(string s){

    stack<int> st;
    for(int i =0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1= st.top();
            st.pop();
    
    switch (s[i])
    {
    case '+':
        st.push(op1+op2);
        break;
    case '-':
        st.push(op1-op2);
        break;
    case '*':
        st.push(op1*op2);
        break;
    case '/':
        st.push(op1/op2);
        break;
    case '^':
        st.push(pow(op1,op2)); //Time complexity = O(n) , where n is length of string.
        break;
    
    default:
        break;
    }
        }
    }
    return st.top();
}
int main(){
cout<<postfixeva("46+2/5*7+")<<endl;
return 0;
}