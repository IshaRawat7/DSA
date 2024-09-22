#include<iostream>
using namespace std;
void asciiR(string s,string ros){
    if(s.length() == 0){
        cout<<ros<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ans = s.substr(1);
    asciiR(ans,ros);
    asciiR(ans,(ros+ch));
    asciiR(ans,(ros+ to_string(code)));
    
} // Ascii B= 66 && ascii A = 65;
int main(){
asciiR("ABC","");

return 0;
}