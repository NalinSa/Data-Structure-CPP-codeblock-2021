#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
public:
 string name; string address; string province; string district; int zip;
 bool operator < (const Letter& other) const {
 //**Begin Insert**
    if (zip==other.zip){
        if (address==other.address){
            if (name==other.name){
                return district < other.district;
            }
            else{return name<other.name;}
        }
        else{
            return address<other.address;
        }
    }
    else {
        return zip<other.zip;
    }
 //**End Insert**
 }
};
class ZipInfo{
public:
 int zip;
 string province;
 string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
 //**Begin Insert**
 for (auto& let:letters){
     for (auto& zip:zipinfo){
         if (let.province == zip.province && let.district == zip.district){
             let.zip = zip.zip;
             break;
         }
     }
 }
 sort(letters.begin(),letters.end());
 //**End Insert**
}
int main() {
 int nzip;
 cin>>nzip;
 vector<ZipInfo> zipinfo;
 for (int i = 0; i < nzip; i++) {
 ZipInfo z;
 cin>>z.zip>>z.district>>z.province;
 zipinfo.push_back(z);
 }
 int n;
 cin>>n;
 vector<Letter> letters;
 for (int i = 0; i < n; i++) {
 Letter l;
 cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
 letters.push_back(l);
 }
 correctZipAndSortLetters(zipinfo, letters);
 for (auto& l:letters) {
 cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
 }
}
