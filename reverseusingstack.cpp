/*
Reversing a Sentence using Stack
*/



/*#include<iostream>
#include<stack>
using namespace std;


void reverseSentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string words = "";
        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(words);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
   string s = "Hey! How are you doing?";
reverseSentence(s);

return 0;
}*/


/* Reversing an Stack*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int val){
    if(st.empty()){
       st.push(val);
       return;
    }

    int topele = st.top();
    st.pop();
    insertAtBottom(st, val);
    st.push(topele);

}
void reverseStack(stack<int> &st){
if(st.empty()){
cout<<"stack is empty! Nothing to reverrse!";
return;
    }

    int element = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,element);

}
int main(){
stack<int> st;
st.push(1);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
cout<<"Stack Before Reversing: "<<"\n";
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}cout<<endl;
reverseStack(st);
cout<<"Stack after Reversing : "<<"\n";
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}cout<<endl;
return 0;
}
