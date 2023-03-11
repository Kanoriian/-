#include <iostream>
#include <vector>
#include "sortic.h"

using namespace std;


void s (vector <int> &mass){ // s
    int v2;
    if (mass.size() > 1)
    {
        v2 = mass[1];
    mass[1] = mass[0];
    mass[0] = v2;
    }
} // end


void r(vector <int> &mass){ // r
    int i, cif;
    if (mass.size() > 0)
    {
    i = 1;
    cif = mass[0];
    for(i; i < mass.size(); i++)
        mass[i - 1] = mass[i];
    mass[mass.size() - 1] = cif;
    }
} // end


void rr(vector <int> &mass){ // rr
    int i, cif;
    if (mass.size() > 0)
    {
    i = mass.size() - 1;
    cif = mass[i];
    for(i; i > 0; i--)
        mass[i] = mass[i - 1];
    mass[0] = cif;
    }
} // end


void p (vector <int> &mass, vector <int> &mass1) // p
{
    if (mass1.size() > 0)
    {
        mass.push_back(mass1[0]);
        mass1[0] = -2147483648;
        rr(mass);
    }
} // end


int cifrovizacia (string str){ // cifrovizacia
    int ch;
    char sym;
    for (int i = 0; i < str.size(); i++){
        sym = str[i];
        ch = ch * 10 + (sym - '0');
    }
    return ch;
} // end


int maximum (vector <int> mass){ // maximum
    int maxi;
    maxi = -2147483648;
    for (int i = 0; i < mass.size(); i++){
        if (mass[i] >= maxi)
            maxi = mass[i];
    }
    return maxi;
} // end


void zamen (const vector <int> &cop, vector <int> &osn){ // zamen
    for (int i = 0; i < cop.size(); i++)
        osn[i] = cop[i];
} // end
