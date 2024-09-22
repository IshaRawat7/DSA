#include<iostream>
using namespace std;
void createsubstr(string s,string ans){
if(s.length()==0){
    cout<<ans<<endl;
    return;
}


    char ch = s[0];
    string ros= s.substr(1);
    createsubstr(ros,ans);
    createsubstr(ros,(ans+ch));

}
int main(){
createsubstr("ABCD","");

return 0;
}