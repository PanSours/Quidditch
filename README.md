# Synopsis
The aim of the project is the simulation of a Quidditch match. Quidditch is a game belonging to the magical world of Harry Potter and is played between two teams. For more information see the page: http://en.wikipedia.org/wiki/Quidditch

# Background

### Players
In each phase, two players of participating teams claiming a ball. 
In the program the following **player** hierarchy has been implemented. A player has a power meter, 
which entrusted the outset and remains stable. **Chasers** are a kind of players who have power meter from 2 to 10. 
**Beaters** are the sort of players who have power meter from 1 to 3. The **Keepers** are the kind of players 
who have power meter from 6 to 10. **Seekers** are the kind of players who have power meter 11 to 12. 
The power meter of a player gets random value within the appropriate range 
of its kind during the initialization.


### Balls
In the game there are different types of **balls**. A ball is claimed by both players 
rival groups and the outcome of the duel for the acquisition leads to some winning points (score) for the player's 
team who won and some penalty points (penalty) for the player's team who lost it.

The red ball (**Quaffle**) is a kind of ball with which the players of both teams scoring goals which gives 10 points
to the scoring team. The red ball does not incur a penalty. The winner is the team whose player has greater power meter. 
This is the team to which the winning points are given. If both players have equal power meter, then the result 
is considered a draw. If the winning player is Keeper, then also the result is a draw because the Keepers do not score 
goals and thus no team wins nothing.

The black ball (**Bludger**) is a kind of ball which aims wandering around the ground and beating unsuspecting players. 
For this reason there are Beaters, who are holding bats and hit the black balls protecting the players of their 
team and sending them on opposing players. The black ball does not give winning points. If the black ball hits any player, 
is giving his team two penalty points. The winner is the team whose Beater has greater power meter. If they have equal power meter 
then the result is considered a draw and neither team receives a penalty. This is where both players are Beaters. 
If one of the two players are not Beaters, the opposing team wins, regardless of the difference in power between 
the two players. If both players are not Beaters, then the result is a draw.

The golden Ball (**GoldenSnitch**) is a kind of ball which is very tiny and is wandering around the stadium 
waiting for someone to catch her. Because of its size it is hard to find. Once caught the Snitch, 
the game ends and the team of which the Seeker caught her is gaining 150 points. The winning team is the 
the one that its Seeker has greater power meter. If they have equal power meter, then the result is a draw, 
neither team gets the points and the game continues. This happens when both players are Seekers. If one of the 
two players is not a Seeker, the opposing team wins regardless of the difference in power between the two players. 
If both players are not Seekers, then the result is a draw.

### Spells
Many times players resort to using **spells** against an opponent, or in favor of a player of the same team. 
The Spells applied in one of two players, are randomly sent to each other. The spells are divided into four 
sub-categories: **InvalidSpells**, which the user failed to perform correctly, **PenaltySpells**, **BonusSpells** and **JamSpells**. 
InvalidSpells do nothing. The PenaltySpells deduct 2 points from the player's power meter to which they apply. The BonusSpells add 2 points to the player's power meter to which they apply. 
JamSpells render inoperable the player to which they apply. A jamed player loses any duel in which he participates. But if, for example, if he participates in 
a duel for the black ball, and he is a Beater and jamed and the opponent player is not a Beater, then the result is
a draw.

# Running the project
The program accepts the command line **N** (number of game rounds) and a germ (for **srand**). 
Both are optional. If N is not given, then it is infinite. If the germ is not given, then it is equal to **time(NULL)**.

The program was developed and tested in a linux environment. It is compiled with the command  **g++ –o main main.cpp player.cpp ball.cpp spell.cpp**.
