#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> umap;
    umap["student1"]=10;
    umap["student2"]=20;
    umap["student3"]=30;

    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}