/*#include<iostream>
using namespace std;
int main() {
    int n;
    int key;
    cin>>n;
    cin>>key;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i] == key){
            cout<<i<<endl;
        }
    }
    


    return 0;
}*/


//REVERSING A ARRAY
#include<iostream>
using namespace std;
int main(){
string s = 'ISHA';
for(int i = s.length();i>0;i--){
    cout<<s[i];
}

return 0;
}