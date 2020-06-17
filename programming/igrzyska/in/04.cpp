CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

HUMAN_CLASS h1("h1");
BERSERKER_CLASS b1("h2", "b1");

arena.fight(&h1, &b1);
arena.fight(&h1, &b1); 
