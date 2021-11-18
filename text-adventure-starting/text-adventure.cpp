#include <iostream>

int main() {

  const std::string pokeball = 
  "\t@@@@@@@@@@@@@@@@@###############@@@@@@@@@@@@@@@@@\n"
  "\t@@@@@@@@@@@@@@@@#666666666666666B@@@@@@@@@@@@@@@@\n"
  "\t@@@@@@@@@@@#QQQQOvvvvvvvvvvvvvvvmQQQQ#@@@@@@@@@@@\n"
  "\t@@@@@@@@@BBW}}}}]vvvvvvvvvvvvvvv]}uwwEB#@@@@@@@@@\n"
  "\t@@@@@@##QyV]rrrr?vvvvvvvvvvvvvvvvvi]]VmKQ##@@@@@@\n"
  "\t@@@@##DHs??>,,,,=??vvvvvvvvvvvvvvvvvv}VVqdg##@@@@\n"
  "\t@@@#QQnv(**,    `**(vvvvvvvvvvvvvvvvv}VVVVaQQ#@@@\n"
  "\t@@@#QQnv(**,    `**(vvvvvvvvvvvvvvvvv}VVVVaQQ#@@@\n"
  "\t@BBW}}ivv||r~~~~^||vvvvvvvvvvvvvvvvvv}VVVV2wwEB#@\n"
  "\t@QQmvvvvvvv|????(vvvvvvvvvvvvvvvvvillnVVVVVVVWQQ@\n"
  "\t@QQmvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv]VVVVVVVVVVWQQ@\n"
  "\t@QQmvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv]VVVVVVVVVVZQQ@\n"
  "\t@QQRGG}vvvvvvvvvvvvvvvvvvvvvvvvv}VVVVVVVVVtGSRQQ@\n"
  "\t@QQ$WWawJvvvvvoKmmmmKovvvvv}uuuunVVVVVVVXUPWW$QQ@\n"
  "\t@QQ0ddZZP2JJJJ2znvvn22JVn}}nVVVVtwXUUaaUHZZdd0QQ@\n"
  "\t@BB8OO%WWddddd?~:  :~(d6PytyyyytU5qdddddWW%OO8BB@\n"
  "\t@@@#QQhVjdddd6,      ,ddddddddddd6ddddddjVhQQ#@@@\n"
  "\t@@@#QQr,,''*zzr~:  :~(ddddddddddddZzz?::^r}QQ#@@@\n"
  "\t@@@@##pVv``_==?x|^^|xi????????????r^^~=!nU6##@@@@\n"
  "\t@@@@@@##0r*:..*vvvvvvr----------_,,,,*}l8##@@@@@@\n"
  "\t@@@@@@@@@BBG((~=:_______________~|(((SBB@@@@@@@@@\n"
  "\t@@@@@@@@@@@#QQQQd^**************wQQQQ#@@@@@@@@@@@\n"
  "\t@@@@@@@@@@@@@@@@#WWWWWWWWWWWWWWWQ@@@@@@@@@@@@@@@@\n"
  "\t@@@@@@@@@@@@@@@@@###############@@@@@@@@@@@@@@@@@\n";

  std::string name, yes_no;
  bool yes_no_choice = false;

  // logo
  std::cout << pokeball << "\n";

  // ask for name
  std::cout << "Hello, trainer! Welcome to the Pokémon world.\n\n";
  std::cout << "Here, Pokémon and humans work together, building societies and protecting them.\n\n";
  std::cout << "I am sure you are super excited to start building your own adventure!\n";
  std::cout << "Don't worry, I will let you get into that in no time. But first, could you tell me your name?\n ";
  std::cin >> name;

  std::cout << name << ", then? Did I get that right? (y/n)\n";
  std::cin >> yes_no;

  if (yes_no == "y") {
    yes_no_choice = true;  
  } else if (yes_no == "n") {
    yes_no_choice = false;
  } else {
    std::cout << "Invalid input. Terminating.\n";
    return -1;
  }
  // yes_no_choice = yes_no == "y" ? true : false;

  while (!yes_no_choice) {
    std::cout << "Oh, sorry! Could you repeat it, please?\n";
    std::cin >> name;

    std::cout << name << ", then? Did I get it right this time?\n";
    std::cin >> yes_no;

      if (yes_no == "y") {
        yes_no_choice = true;  
      } else if (yes_no == "n") {
        yes_no_choice = false;
      } else {
        std::cout << "Invalid input. Terminating.\n";
        return -1;
      }
  }
  // decision 1
  

  // ending 1
  // ending 2
  // ending 3
  // ending 4
  // ending 5

  return 0;
}