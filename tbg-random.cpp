#include <iostream>
#include <string>

int main() {
  std::string theBadGuys[] = {"Mr. Wolf", "Mr. Snake", "Mr. Piranha", "Ms. Tarantula", "Mr. Whale", "Diane Foxington"};

  int yourLove = rand() % sizeof(theBadGuys) / sizeof(theBadGuys[0]);

  if (yourLove == 0 || yourLove == 5) {
    std::cout << "You have a crush on " << theBadGuys[yourLove] << " I see, you must be a furry!" << std::endl;
    return 0;
  }
  std::cout << "You chose " << theBadGuys[yourLove] << " as your crush uwu" << std::endl;
}