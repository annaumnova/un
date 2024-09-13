#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

void message(string flag){ //func void
    if(flag == "true")
        cout << "qt ^_^"<<endl;
    else cout << ":(((" << endl;
}

double sqrFigHerron(double a, double b, double c){
    double sqr, p = 0;
    if((a+b > c )&& (a+c>b )&&( b+c > a)){
        p = 0.5* (a+b+c);
        sqr = sqrt(p*(p-a)*(p-b)*(p-c));
        return sqr;
    }
    return -1;
}



int main()
{
    std::string flag;
  //  cin >> flag;
//
 //   message(flag);
    double a, b, c;
    cin>>a>>b>>c;
    cout<<sqrFigHerron(a,b,c)<<endl;
    return 0;
}
