#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Auction{
    public:
    map<string,int> map_auction;
    map<string, map<int,vector<string>>> map_buy;
    void open_auction(string item, int qty){
        map_auction[item] = qty;
    }
    void add_bidding(string user,string item,int price){
        map_buy[item][-price].push_back(user);
    }
    bool ask_user_confirmation(string name,string item,int price){
        return true;
    }
    vector<pair<string,int>> close_auction(string item){
        vector<pair<string,int>> vec;
        int total = map_auction[item];
        int coun = 0;
        for(auto itt = map_buy[item].begin();itt!= map_buy[item].end();itt++){
            for(string &x:itt->second){
                if(ask_user_confirmation(x,item,-(itt->first))){
                   vec.push_back({x,-(itt->first)});
                   coun++;
                   if(coun==total){
                        return vec;
                   }
                }
            }
        }
        return vec;
    }
};
