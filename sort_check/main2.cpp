#include <iostream>
#include <vector>
#include "chec_sortic.h"
#include <string>
#include <fstream>
using namespace std;

//////////////////////////-MAIN-//////////////////////////

int main()
{
vector <int> a1;
ifstream file;
file.open("mass.txt");
string str;
int k, i;


vector <int> a;
vector <int> b;


string t;
cin >> t;

//////////////////////////-LOGIC-//////////////////////////
while(t != "!"){
a.push_back(mp(t));
cin >> t;
}
while(str != "con")
{
file >> str;

if (str != "con")
cout << str << endl;

if (str == "sa")
sa(a);

if (str == "sb")
sa(b);

if (str == "ss"){
sa(a);
sa(b);
}

if(str == "pa")
pb(a1,b);

if(str =="pb")
pb(b,a);

if(str == "ra")
ra(a);

if(str == "rb")
ra(b);

if(str == "rr"){
ra(a);
ra(b);

}
if(str == "rra")
rra(a);

if(str == "rrb")
rra(b);

if(str == "rrr"){
rra(a);
rra(b);
}
//////////////////////////-END_LOGIC-//////////////////////////

}
if(rab(a1))
cout << "OK" << endl;
else
cout << "KO" << endl;

for (i = 0; i < a1.size(); i++)
cout << a1[i] << " ";
}

/////////////////////////////-END-/////////////////////////////
