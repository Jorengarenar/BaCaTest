CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

HUMAN_CLASS h1("h1");
HUMAN_CLASS h2("h2");

arena.fight(&h1, &h2);
arena.fight(&h2, &h1); 
