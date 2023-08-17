#include <iostream>
#include "bankman.h"
using namespace sdds;
using namespace std;



int main(){
    displayMenu(cout);
    Account rigels(9500, "Rigels Hasani");
    displayAccount(cout, rigels);
    return 0;
}
