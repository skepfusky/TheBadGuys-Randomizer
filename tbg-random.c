#include <stdio.h>
#include <string.h>

int main() {
  const char yourLove[] = { "Mr. Wolf", "Mr. Snake", "Mr. Piranha", "Ms. Tarantula", "Mr. Whale", "Diane Foxington"};

  int random = rand() % sizeof(yourLove) / sizeof(yourLove[0]);

  if (random == 0 || random == 5) {
    printf("You have a crush on ", yourLove[random], " I see, you must be a furry!\n");
  } else {
    printf("You chose ", yourLove[random], " as your crush uwu\n");
  }
}