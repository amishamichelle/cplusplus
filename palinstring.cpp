#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[20];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: "; cin >> str;
    
    length = strlen(str);
    
    for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag==1) {
        cout << str << " is not a palindrome" << endl; 
    }    
    else {
        cout << str << " is a palindrome" << endl; 
    }
    //system("pause");
    return 0;
}
