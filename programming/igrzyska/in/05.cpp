CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

BEAST_CLASS b1("beast1");
BEAST_CLASS b2("beast2");

arena.fight(&b2, &b1);
arena.fight(&b2, &b1);
