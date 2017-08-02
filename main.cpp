#include <iostream>
#include <list>
using namespace std;
int main() {

    list<string> mi_lista;
    mi_lista.push_back("A");
    mi_lista.push_back("E");
    mi_lista.push_back("I");
    mi_lista.push_back("O");
    mi_lista.push_back("U");

    //list<string>::iterator i = mi_lista.begin();

    /*
    cout<<*i<<endl;
    i++;
    cout<<*i<<endl;
    i++;
    cout<<*i<<endl;
    i++;
    cout<<*i<<endl;
    i++;
    cout<<*i<<endl;
*/

    list<string>::iterator temp = mi_lista.begin();
    temp++;
    mi_lista.insert(temp, "X");

    list<string>::iterator i = mi_lista.begin();

    while(i != mi_lista.end()){
        cout<<*i<<endl;
        i++;
    }



   /* while(i != mi_lista.end()){
        cout<<*i<<endl;
        i++;
    }
    */
    return 0;

}