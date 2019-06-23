#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main() {
int n;
string name;
long num;
cin >> n;
cin.ignore();
map <string, long> pBook;
map <string,long>::iterator itr;
for (int i = 0; i < n; i++) {
    cin >> name;
    cin >> num;
    pBook[name] = num;
}
for(itr=pBook.begin();itr!=pBook.end();itr++)
{
	cout<<itr->first<<" "<<itr->second<<endl;
}
}
