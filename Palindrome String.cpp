#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cout<<"Enter the string: ";
    cin>>s1;
    int flag=0;
    
    
    
    int l = s1.length()-1;
    
    for(int i=0; i<=l; i++){
        if(s1[i]!=s1[l-i])
        flag=1;
    }
    
    if(flag){
        cout<<"It is not a palindrome"<<endl;
    }else{
        cout<<"It is a palindrome"<<endl;
    }
    
return 0;
    
}


/* Sample Output
1. Enter the string: wow
It is a palindrome
2. Enter the string: abc
It is not a palindrome
 */
