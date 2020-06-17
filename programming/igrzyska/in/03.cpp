CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

HUMAN_CLASS h1("h1");
BEAST_CLASS b1("b1");

caesar.judgeDeathOfLife(&h1);
caesar.judgeDeathOfLife(&h1);

arena.fight(&h1, &b1); 
