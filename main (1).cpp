#include <iostream>
#include <random>
#include <chrono>
#include <functional>

#include "List.h

using namespace std;

int main(){
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(111, 999);
    auto dice = bind(distribution, generator);

    List myList;
    int val;

    cout << "Llenando lista..." << endl;

    for(int i = 0; i < 50; i++){

        val = dice();

        cout << "Insertando: " << val << endl;
        myList.insertData(myList.getLastPos(), val);
    }
    cout << endl << endl;

    cout << "Contenido de la lista: con print(): " << endl;
    myList.print();

    cout << endl << endl;
    cout << "Contenido de la lista: con toString(): " << endl;
    cout << myList.toString() << endl;
    cout << endl << endl;

    cout << "Retieved 20: " << myList.retrieve(20) << endl;
    cout << endl << endl;

    try{
    myList.insertData(75, 888);
    } catch(listException ex){
        cout << "la cagaste " << ex.what();
    }
    cout << endl << endl;
    cout << "Contenido de la lista: con toString(): " << endl;
    cout << myList.toString() << endl;
    cout << endl << endl;

    ///     ///
///             ///
///     10:00   ///
///             ///
    ///     ///


    cout << "Hello world!" << endl;
    return 0;
}
