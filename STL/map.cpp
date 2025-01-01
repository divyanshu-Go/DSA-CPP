#include <iostream>
#include <map>
using namespace std;

int main()
{

    // Unique (key : value) Pairs
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["mobile"] = 150;
    m["tablet"] = 60;

    for(auto p: m){
        cout<<p.first << " " << p.second <<endl;
    }
    cout<<endl;

    m.emplace("camera", 25);
    m.erase("tv");

    for(auto p: m){
        cout<<p.first << " " << p.second <<endl;
    }
    cout<<endl;


    if(m.find("camera") != m.end()){
        cout<<"Found  camera !!!";
    }else{
        cout<<" Can't Found  camera !!!";
    }
    cout<<endl;

    // Multi-Map : multiple keys with same name can exist
    multimap<string, int> mm;

    mm.emplace("tv", 100);
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);
    mm.emplace("tv", 100);

    for(auto p: mm){
        cout<<p.first << " " << p.second <<endl;
    }
    cout<<endl;

    mm.erase(mm.find("tv"));
    for(auto p: mm){
        cout<<p.first << " " << p.second <<endl;
    }
    cout<<endl;


    // Unordered-Map
    unordered_map <string, int> om;

    return 0;
}