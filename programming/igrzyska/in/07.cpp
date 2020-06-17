CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

BERSERKER_CLASS b1("human1", "beast1");
BERSERKER_CLASS b2("human2", "beast2");

arena.fight(&b2, &b1); 
