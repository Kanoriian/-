#include <iostream>
#include <vector>
#include "chec_sortic.h"
using namespace std;

//////////////////////////-FUNCTION-//////////////////////////

void sa (vector <int> & mass) // sa
{
int pp;
if (mass.size() > 1)
{
pp = mass[1];
mass[1] = mass[0];
mass[0] = pp;
}
} // end


void ra (vector <int> & mass) // ra
{
int i, cc;
if (mass.size() > 0)
{
i = 1;
cc = mass[0];
for (i; i < mass.size(); i++)
mass[i - 1] = mass[i];
mass[mass.size() - 1] = cc;
}
} // end


void rra (vector <int> & mass) // rra
{
int i, cc;
if (mass.size() > 0)
{
i = mass.size() - 1;
cc = mass[i];
for (i; i > 0; i--)
mass[i] = mass[i - 1];
mass[0] = cc;
}
} // end


void pb (vector <int> & mass, vector <int> & mass1) // pb
{
if (mass1.size() > 0)
{
mass.push_back(mass1[0]);
mass1[0] = 2147483647;
rra (mass);
}
} // end


int mp (string str) // mp
{
int pp;
char pp2;
for (int i = 0; i < str.size(); i++)
{
pp2 = str[i];
pp = pp * 10 + (pp2 - '0');
}
return pp;
} // end


int mn(vector <int> mass) // mn
{
int mm;
mm = 2147483647;
for (int i = 0; i < mass.size(); i++)
{
if (mass[i] <= mm)
mm = mass[i];
}
return mm;
} // end


void zn(const vector <int> & cop, vector <int> & osn) // zn
{
for (int i = 0; i < cop.size(); i++)
osn[i] = cop[i];
} // end


bool rab(vector <int> mass) // rab
{
for(int i = 0; i < mass.size()-1;i++)
{
if(mass[i] > mass[i+1])
return false;
}
return true;
} // end

/////////////////////////////-END-/////////////////////////////
