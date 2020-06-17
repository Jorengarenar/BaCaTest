CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

BERSERKER_CLASS h("Herkules", "Herkulio");

BEAST_CLASS b1("Lion");
BEAST_CLASS b2("Elephant");
BEAST_CLASS b3("Tiger");
BEAST_CLASS b4("Giraffe");
BEAST_CLASS b5("Dog");

SQUAD_CLASS animals("Animals");

animals.addPlayer(&b1);
animals.addPlayer(&b2);
animals.addPlayer(&b3);
animals.addPlayer(&b4);
animals.addPlayer(&b5);

arena.fight(&h, &animals);
arena.fight(&animals, &h);
h.cure();
arena.fight(&h, &animals);
