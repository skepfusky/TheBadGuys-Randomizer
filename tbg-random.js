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
  console.log(`lol you're a ${yourLove} simp`);
} else {
  console.log(`${yourLove} is a cutie`);
}
