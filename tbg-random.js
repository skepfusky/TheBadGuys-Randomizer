let theBadGuys = [
  "Mr. Wolf",
  "Mr. Snake",
  "Ms. Tarantula",
  "Mr. Piranha",
  "Mr. Shark",
  "Diane Foxington",
];

let yourLove = theBadGuys[Math.floor(Math.random() * theBadGuys.length)];

if (yourLove === "Diane Foxington" || yourLove === "Mr. Wolf") {
  console.log(`You have a crush on ${yourLove} you must be a furry!`);
} else {
  console.log(`You chose ${yourLove} as your crush uwu`);
}
