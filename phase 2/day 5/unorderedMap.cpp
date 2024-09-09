#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> umap;
    umap["student1"]=10;
    umap["student2"]=20;
    umap["student3"]=30;

    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}