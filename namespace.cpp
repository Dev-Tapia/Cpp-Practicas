#include <iostream>
namespace primero { // Casa 1
    int x = 1;
}

namespace segundo { // Casa 2
    int x = 2;
}
int main() {  // Funcion principal
    
   int x = 0;  // Variable local
   std::cout<<"X = "<<segundo::x; // Imprime X

   return 0;
}