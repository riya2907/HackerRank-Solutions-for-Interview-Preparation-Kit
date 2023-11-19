#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int num,len,rep,c=0,tot=0,extra=0,lenleft;
    cout << "enter a string";
    cin >> s;
    cout << "enter number to be repeated";
    cin >> num;
    len = s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='a'){
            ++c;
        }
    }
    rep=num/len;
    lenleft=num-(len*rep);
    for(int i=0;i<lenleft;i++){
        if(s[i]=='a'){
            ++extra;
        }
    }
    tot=(rep*c)+extra;
    cout << "Total count is" << tot;
}