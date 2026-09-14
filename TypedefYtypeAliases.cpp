#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pair_list_t;
//typedef std::string text_t;
//typedef int numero_t;
using text_t = std::string; // diferencia entre usar typedef y aliases
using numero_t = int;


int main () {

      text_t nombre = "Rafael";
      numero_t edad = 19;
      std::cout<<nombre<<" "<<edad<<std::endl;




    return 0;
}