CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

BEAST_CLASS b1("beast1");
BERSERKER_CLASS b2("human1", "beast2");

arena.fight(&b2, &b1); 
