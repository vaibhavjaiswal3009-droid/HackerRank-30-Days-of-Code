#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i = 4;
    double d = 4.0;
    string s = "HackerRank "; 
    int var1;
    double var2;
    string var3;
    cin>>var1;
    cin>>var2;
    cin.ignore();
    getline(cin,var3);
    cout<<i+var1<<endl;
    cout<<fixed<<setprecision(1)<<d+var2<<endl;
    cout<<s+var3<<endl;
    return 0;
}
