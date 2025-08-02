#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int getval(string nam);
int reducingVal(int val);
   int main(){
       //MechaBoo
    string name1,name2;
    while(getline(cin,name1))
    {
        getline(cin,name2);
        int par1= getval(name1);
        int par2=getval(name2);
        par1=reducingVal(par1);
        par2=reducingVal(par2);
     
        double x= par1*1.00;
        double y=par2*1.00;
       
        if(x>=y)cout <<fixed<< setprecision(2)<< (y/x)*100 <<" %"<< endl;
        else cout <<fixed<< setprecision(2)<< (x/y)*100 <<" %"<< endl;
    }
    //MechaBoo
    return 0;
}
int getval(string nam)
{
    int ab=0;
   const char *abc = nam.c_str();
 for(int i=0;i<nam.size();i++)
 {
     char ch =abc[i];
    if((ch>='a'&&ch<='z'))
    {
         ab+=ch-'a'+1;
      
    }
    if((ch>='A'&&ch<='Z'))
    {
          ab+=ch-'A'+1;
     
    }
 }
 return ab;
}
int reducingVal(int val)
{
    int abc=0;
    string text = to_string(val);
    for(int i=0;i<text.size();i++)
    {
        abc+=text[i]-'0';
    }
    if((abc/10)==0) return abc;
    else return reducingVal(abc);
}
