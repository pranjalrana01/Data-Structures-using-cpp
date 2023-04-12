#include<iostream>
using namespace std;
    bool checkPalindrome(char ch[],int n){
        int s=0;
        int e=n-1;
        while(s<=e){
            if(ch[s]!=ch[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
    
    int getlen(char name[]){
        int count = 0;
        for(int i=0;name[i]!='\0';i++){
            count++;
        } return count;
    }
int main(){
    char ch[10];
    cout<<"enter your name ";
    cin>>ch;
    cout<<endl;

    cout<<"your name is ";
    cout<<ch;
    cout<<endl;

    int len =getlen(ch);
    cout<<"length is "<<len;
    cout<<endl;
    reverse(ch,len);
    cout<<ch<<endl;

    cout<<checkPalindrome(ch,len);
    return 0;
}