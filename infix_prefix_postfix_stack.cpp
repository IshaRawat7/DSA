#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

/*Infix Expression
<operand> <operator> <operand>

*/

/*Prefix Expression(Polish Notation)
<operator><operand><operand>

*/

/*Postfix Expression(Reverse Polish Notation)
<operand><operand><operator>

*/


/*Prefix expression: -+7*45-20 */
int prefixeva(string s){       //Time Complexity = O(n), where n is length of the string.
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
          if(s[i] >= '0' && s[i] <= '9'){ //if operator
            st.push(s[i]-'0');
          }
          else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();


            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;

            case '-':
                st.push(op1-op2);
                break;
                
            case '/':
                st.push(op1/op2);
                break;

            case '*':
                st.push(op1*op2);
                break;

            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
          }
    }
    return st.top();

}
int main(){


cout<<prefixeva("-+7*45+20")<<endl;
return 0;
}