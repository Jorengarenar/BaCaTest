CAESAR_CLASS caesar;
ARENA_CLASS arena(&caesar);

HUMAN_CLASS human1("human1");
BEAST_CLASS beast1("beast1");
BERSERKER_CLASS berserker1("berserker-human1", "berserker-beast1");

HUMAN_CLASS dead("dead-human");
dead.takeDamage(500);

SQUAD_CLASS squad("squad");
squad.addPlayer(&human1);
squad.addPlayer(&beast1);
squad.addPlayer(&berserker1);
squad.addPlayer(&dead);
squad.addPlayer(&human1);
squad.addPlayer(&beast1);
squad.addPlayer(&berserker1);

HUMAN_CLASS human2("human2");
HUMAN_CLASS human3("human3");
HUMAN_CLASS human4("human4");
HUMAN_CLASS human5("human5");

SQUAD_CLASS humansquad("humansquad");
humansquad.addPlayer(&human2);
humansquad.addPlayer(&human3);
humansquad.addPlayer(&human4);
humansquad.addPlayer(&human5);

arena.fight(&humansquad, &squad); 
