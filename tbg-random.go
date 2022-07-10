package main

import (
	"fmt"
	"math/rand"
)

func main() {
	theBadGuys := []string {"Mr. Wolf", "Mr. Snake", "Mr. Piranha", "Ms. Tarantula","Mr. Whale", "Diane Foxington"}

	yourLove := theBadGuys[rand.Intn(len(theBadGuys))]

	if yourLove = "Mr. Wolf" || yourLove = "Diane Foxington" {
		fmt.Println("You have a crush on ", yourLove, " I see, you must be a furry!")
	} else {
		fmt.Println("You chose ", yourLove, " as your crush uwu")
	}
}