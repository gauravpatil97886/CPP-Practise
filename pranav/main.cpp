#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int get(vector words[],int n){


    vector<string> ans;
    for(int i=0;i<words.size();i++){
        string a=words[i];
        sort(a.begin(),a.end());
        ans.push_back(a);
    }
    vector<string> temp;
    for (int i=0;i<n;i++){
        if (count(temp.begin(),temp.end(),ans[i])){
            continue;
        }
        else{
            temp.push_back(ans[i]);
        }
    }
    return temp.size();



}

int main()
{       string words[]={"cat","act","tac","hello"};
        cout<<get(words,4);
        return 0;
}
