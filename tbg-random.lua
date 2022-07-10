local theBadGuysCharacters = {"Mr. Wolf", "Mr. Snake", "Ms. Tarantula", "Mr. Piranha", "Mr. Shark", "Diane Foxington"}

yourLove = theBadGuysCharacters[math.random(1, #theBadGuysCharacters)]

if yourLove == "Wolf" or yourLove == "Diane Foxington" then
  print("You have a crush on " .. yourLove .. " you must be a furry!")
else 
  print("You've chosen " .. yourLove .. " as your crush uwu")
end