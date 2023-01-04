#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.first>p2.first;
}
int main(){
    int n;cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        int u,w;
        cin>>u>>w;
        v.push_back(make_pair(u,w));
    }
    sort(v.begin(),v.end(),compare);
    stack<pair<int,int> >st;
    for(int i=0;i<int(v.size());i++){
        st.push(v[i]);
    }
    //looking for help from here ,basically i dont understands why my code in stack fails
    int count=0;
    while (!st.empty()){
        pair<int,int>y=st.top();
        st.pop();
        count++;
    if(st.size()>0){
            if(y.second>=st.top().first){
                st.pop();
            }
        }
    }
    cout<<count<<'\n';
}
