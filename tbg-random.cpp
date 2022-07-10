#include <iostream>
#include <string>

int main() {
  std::string theBadGuys[] = {"Mr. Wolf", "Mr. Snake", "Mr. Piranha", "Ms. Tarantula", "Mr. Whale", "Diane Foxington"};
  int random_index = rand() % sizeof(theBadGuys) / sizeof(theBadGuys[0]);
  if (random_index == 0 || random_index == 5) {
    std::cout << "You have a crush on " << theBadGuys[random_index] << " I see, you must be a furry!" << std::endl;
    return 0;
  }
  std::cout << "You chose " << theBadGuys[random_index] << " as your crush uwu" << std::endl;
}