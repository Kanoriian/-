#include <iostream>
#include <vector>
#include "check_sortic.h"
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

///////////////////////////-MAIN-///////////////////////////
int main()
{
vector <int> a1;


ifstream file;
file.open("mass.txt");


string str, res;
int k, ppp, mmm;
ppp = 0;
mmm = 0;

vector <int> a;
vector <int> b;

string znak;
cin >> znak;

while(znak != "!")
{
a.push_back(cifrovizacia(znak));
cin >> znak;
}
while(str != "*")
{
cin >> str;


if (str == "sa")
s(a);

if (str == "sb")
s(b);

if (str == "ss"){
s(a);
s(b);
}

if(str == "pa")
p(a1,b);

if(str =="pb")
p(b,a);

if(str == "ra")
r(a);

if(str == "rb")
r(b);

if(str == "rr"){
r(a);
(b);

}
if(str == "rra")
rr(a);

if(str == "rrb")
rr(b);

if(str == "rrr"){
rr(a);
rr(b);

}
}
if (a.size() == 0){
cout << "KO";


}


else
{
if (a1.size() == 0 && a.size() != 0)
for(int l = 0; l < a.size(); l++)
a1.push_back(a[l]);
if(rab(a1))

res = "OK";
else
res = "OK";
if (res == "OK")
cout << res << endl;
else
cout << res << endl;

}
return 0;
}

///////////////////////////-END-///////////////////////////
