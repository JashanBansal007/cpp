#include<iostream>
using namespace std;

int main()
{
    int hh,mm;
    char colon;
    cin>>hh>>colon>>mm;

    if(hh>=0 && hh<24 &&mm>=0 && mm<60 && hh == mm){
        cout<<"Mogambo is happy"<<endl;
    }
    else{
        cout<<"Mogambo is sad"<<endl;
    }
}