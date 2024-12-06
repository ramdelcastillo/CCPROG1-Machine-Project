/* 	CCPROG1 Machine Project Term 2 - AY 21-22
	Programmed by: Jose Mari Del Castillo, S13
	Acknowledgments: Mr. Joshua Manzano        */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ShieldPrice 1
#define PowerPrice 1
#define ExpPrice 5

void clearScreen();
void gameOver();
void planetTitan();
void castleTitan();
void shop();
void battleIcon();
void introEnter();
void mainMenu();
void mainMenuMaxLevel();
void battleMenu();
void shopMenu();
void Stats(int nGold, int nHP, int nShield, int nPower, int nExperience, int nExpLimit, int nLevel);
void battleStats(int nGold, int nHP, int nShield, int nPower, int nExperience, int nExpLimit, int nLevel, int nEnemyHP, int nEnemyPower, int nEnemyShield);
void bossBattleStats(int nGold, int nHP, int nShield, int nPower, int nLevel, int nEnemyHP, int nEnemyPower, int nEnemyShield);
void statsMaxLevel(int nGold, int nHP, int nShield, int nPower, int nLevel);
void healHealth(int *nLevel, int *nHP);
void sleepTitanKingdom(int *nGold, int *nHP, int *nLevel);
void sleepStreets(int *nHP, int *nGold, int *nExperience, int *nLevel);
void level(int *nHP, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGold);
void shopPowerShieldExp(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel);
void randomEnemyActions(int *nShield, int *nHP, int nEnemyPower);
void randomBossActions(int *nShield, int *nHP, int nDestroPower);
void battle(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGameOver);
void options(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGameOver);

int main()
{
	int nGold = 10, 
		nHP = 100, 
		nShield = 0, 
		nPower = 5,
		nExperience = 0,
		nExpLimit = 50,
		nLevel = 1,
		nGameOver = 0;

	introEnter();

	do
	{
		options(&nGold, &nHP, &nShield, &nPower, &nExperience, &nExpLimit, &nLevel, &nGameOver);
	} while (nGameOver != 1);
	
	return 0;
}

void clearScreen()
{
	system("cls");
}

void gameOver()
{
	printf("\t    _________     __  _________    ____ _    ____________  \n");
	printf("\t   / ____/   |   /  |/  / ____/   / __ / |  / / ____/ __ / \n");
	printf("\t  / / __/ /| |  / /|_/ / __/     / / / / | / / __/ / /_// \n");
	printf("\t / /_/ /___  | / /  / / /___    / /_/ /| |/ / /___/ _,_/  \n");
	printf("\t/____/_/  |_ |/_/  /_/_____/   /____/  |___/_____/_/ |_|   \n");
}

void planetTitan()
{
	printf("\t\t\t         ,MMM8&&&.\n");
	printf("\t\t\t    _...MMMMM88&&&&..._\n");
	printf("\t\t\t .::'''MMMMM88&&&&&&'''::.\n");
	printf("\t\t\t::     MMMMM88&&&&&&     ::\n");
	printf("\t\t\t'::....MMMMM88&&&&&&....::'\n");
	printf("\t\t\t   `''''MMMMM88&&&&''''`\n");
	printf("\t\t\t         'MMM8&&&'\n\n"); 
}

void castleTitan()
{
	printf("\t\t\t\t---Titan---\n");
	printf("                             -|             |-\n");
	printf("         -|                  [-_-_-_-_-_-_-_-]                  |-\n");
	printf("         [-_-_-_-_-]          |             |          [-_-_-_-_-]\n");
	printf("          | o   o |           [  0   0   0  ]           | o   o |\n");
	printf("           |     |    -|       |           |       |-    |     |\n");
	printf("           |     |_-___-___-___-|         |-___-___-___-_|     |\n");
	printf("           |  o  ]              [    0    ]              [  o  |\n");
	printf("           |     ]   o   o   o  [ _______ ]  o   o   o   [     | \n");
	printf("           |     ]              [ ||||||| ]              [     |\n");
	printf("       _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_\n");
	printf("      ( (__________------------_____________-------------_________) )\n");
}

void shop()
{
	printf("  __________________________________________________________\n");
	printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_||\n");
	printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|| /|\n");
	printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_||/||\n");
	printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|||/|\n");
	printf("  |_|_|_|_|_|_|_|_|_|     _      _     |_|_|_|_|_|_|_|_|_|_|/||\n");
	printf("  |_|               |    (_)    (_)    |                 |_|/||\n");
	printf("  |_|               |__________________|                 |_||/|\n");
	printf("  |_|               |_|      ||      |_|                 |_|/||\n");
	printf("  |_|               |_|      ||      |_|                 |_||/|\n");
	printf("  |_|               |_|      ||      |_|                 |_|/||\n");
	printf("  |_|               |_|     [||]     |_|                 |_||/|\n");
	printf("  |_|               |_|      ||      |_|                 |_|/||\n");
	printf("  |_|_______________|_|      ||      |_|_________________|_||/|\n");
	printf("  |_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_|/||\n");
	printf("__|_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_||/________\n");
	printf(" /     /     /     /     /     /     /     /     /     /     /     /\n");
	printf("/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/\n");
}

void battleIcon()
{
	printf("\t\t ______  ___ _____ _____ ___     _____ \n");
	printf("\t\t | ___ |/ _  |_   _|_   _| |    |  ___|\n");
	printf("\t\t | |_/ / /_| | | |   | | | |    | |__  \n");
	printf("\t\t | ___ /  _  | | |   | | | |    |  __| \n");
	printf("\t\t | |_/ / | | | | |   | | | |____| |___ \n");
	printf("\t\t |_____/ |_| | |_|   |_/ |_____/|____/ \n");
}

void introEnter()
{	
		planetTitan();
		printf("\t\t\t---Welcome to Titan---\n");
		printf("Your spaceship has crash-landed on planet Titan due to engine failure.\n");
		printf("The King of Titan has promised to provide you a spaceship to go back\n");
		printf("to Earth only if you have slained the Great Beast of Titan named Destro.\n");
		printf("In this planet, you will come across various monsters that you have to\n");
		printf("slay in order to gain enough attack, health, and shield to beat Destro.\n\n");
		printf("Press enter to continue . . .");
			scanf("%*[^\n]"); 

		clearScreen();
}

void mainMenu()
{
	printf("\t[1] Battle\n");
	printf("\t[2] Shop\n"); //70%
	printf("\t[3] Sleep at Titan Kingdom (5 Gold)\n");
	printf("\t[4] Sleep on the Streets (Free)\n");
	printf("\t[5] Exit\n");
	printf("------------------------------------------------------------------------\n");
	printf("Option: ");
}

void mainMenuMaxLevel()
{
	printf("\t[1] Boss Battle\n");
	printf("\t[2] Shop\n"); //70%
	printf("\t[3] Sleep at Titan Kingdom (5 Gold)\n");
	printf("\t[4] Sleep on the Streets (Free)\n");
	printf("\t[5] Exit\n");
	printf("------------------------------------------------------------------------\n");
	printf("Option: ");
}

void battleMenu()
{
	printf("\t[1] Basic Attack\n");
	printf("\t[2] Special Attack\n"); //70%
	printf("\t[3] Enhance Shield\n");
	printf("\t[4] Flee\n");
	printf("------------------------------------------------------------------------\n");
}

void shopMenu()
{
	printf("\t[1] Buy Shield (1 Gold)\n");
	printf("\t[2] Upgrade Power (1 Gold)\n");
	printf("\t[3] Experience Potion (5 Gold)\n");
	printf("\t[4] Exit\n");
	printf("------------------------------------------------------------------------\n");
}

void Stats(int nGold, int nHP, int nShield, int nPower, int nExperience, int nExpLimit, int nLevel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\tGold:		%d\n", nGold);
	printf("\tHP:		%d\n", nHP);
	printf("\tShield:		%d\n", nShield);
	printf("\tPower:		%d\n", nPower);
	printf("\tExperience:	%d / %d\n", nExperience, nExpLimit);
	printf("\tLevel:		%d\n", nLevel);
	printf("------------------------------------------------------------------------\n");
}

void battleStats(int nGold, int nHP, int nShield, int nPower, int nExperience, int nExpLimit, int nLevel, int nEnemyHP, int nEnemyPower, int nEnemyShield)
{
	printf("------------------------------------------------------------------------\n");
	printf("\tGold:		%d\n", nGold);
	printf("\tHP:		%d\t\tEnemy HP: 	%d\n", nHP, nEnemyHP);
	printf("\tShield:		%d\t\tEnemy Shield:	%d\n", nShield, nEnemyShield);
	printf("\tPower:		%d\t\tEnemy Power:	%d\n", nPower, nEnemyPower);
	printf("\tExperience:	%d / %d\n", nExperience, nExpLimit);
	printf("\tLevel:		%d\n", nLevel);
	printf("------------------------------------------------------------------------\n");
}

void bossBattleStats(int nGold, int nHP, int nShield, int nPower, int nLevel, int nEnemyHP, int nEnemyPower, int nEnemyShield)
{
	printf("------------------------------------------------------------------------\n");
	printf("\tGold:		%d\n", nGold);
	printf("\tHP:		%d\t\tEnemy HP: 	%d\n", nHP, nEnemyHP);
	printf("\tShield:		%d\t\tEnemy Shield:	%d\n", nShield, nEnemyShield);
	printf("\tPower:		%d\t\tEnemy Power:	%d\n", nPower, nEnemyPower);
	printf("\tLevel:		%d\n", nLevel);
	printf("------------------------------------------------------------------------\n");
}

void statsMaxLevel(int nGold, int nHP, int nShield, int nPower, int nLevel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\tGold:		%d\n", nGold);
	printf("\tHP:		%d\n", nHP);
	printf("\tShield:		%d\n", nShield);
	printf("\tPower:		%d\n", nPower);
	printf("\tLevel:		%d\n", nLevel);
	printf("------------------------------------------------------------------------\n");
}

void healHealth(int *nLevel, int *nHP)
{
	switch (*nLevel)
	{
		case 1: *nHP = 100; break;
		case 2: *nHP = 150; break;
		case 3: *nHP = 200; break;
		case 4: *nHP = 300; break;
		case 5: *nHP = 400; break;
	}
}

void sleepTitanKingdom(int *nGold, int *nHP, int *nLevel)
{
	if (*nGold >= 5) 
	{
		healHealth(nLevel, nHP);
		*nGold -= 5;
		clearScreen();
		printf("Health replenished.\n");
	}
	else 
	{
		clearScreen(); 
		printf("Not enough gold.\n");
	}
}

void sleepStreets(int *nHP, int *nGold, int *nExperience, int *nLevel) 
{
	int nHighestValue = 2, nLowestValue = 1;
	srand(time(NULL));
	int nEvent = rand() % 100;
	int	nRandomValue = rand() % (nHighestValue - nLowestValue + 1) + nLowestValue;
	int nextGold = *nGold - nRandomValue;

    if (nEvent >= 0 && nEvent <= 19) 
	{
		*nGold += nRandomValue;
		clearScreen();
		printf("Health replenished.\n");
		printf("You found %d gold.\n", nRandomValue);
	} 
	else if (nEvent >= 20 && nEvent <= 39) 
	{
		clearScreen();	
		printf("Health replenished.\n");
	} 
    else if (nEvent >= 40 && nEvent <= 49) 
	{
		*nExperience += nRandomValue;
		clearScreen();	
		printf("Health replenished.\n");
		printf("You got %d experience.\n", nRandomValue);
	}
	else if (nEvent >= 50 && nEvent <= 99)
	{
		if (nextGold >= 0)
		{
			*nGold -= nRandomValue;
			clearScreen();
			printf("Health replenished.\n");
			printf("You got robbed of %d gold.\n", nRandomValue);
		}
		else if (nextGold < 0) 
		{
			*nGold = 0;
			clearScreen();
			printf("Health replenished.\n");
			printf("You got robbed of %d gold.\n", nRandomValue);
		}
	}
	healHealth(nLevel, nHP);
}

void level(int *nHP, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGold)
{
	if (*nExperience >= 50 && *nLevel == 1)
	{
		*nLevel += 1;
		*nExperience = 0;
		*nExpLimit = 100;
		*nPower += 10;
		*nHP = 150;
		*nGold += 50;
		printf("Level Up!\n");
		printf("You gained 50 gold and your health got upgraded to 150.\n");
	}   
	else if (*nExperience >= 100 && *nLevel == 2) 
	{
		*nLevel += 1; 
		*nExperience = 0; 
		*nExpLimit = 200;
		*nPower += 20;
		*nHP = 200;
		*nGold += 100;
		printf("Level Up!\n");
		printf("You gained 100 gold and your health got upgraded to 200.\n");
	}
	else if (*nExperience >= 200 && *nLevel == 3) 
	{
		*nLevel += 1; 
		*nExperience = 0; 
		*nExpLimit = 300;
		*nPower += 30;
		*nHP = 300;
		*nGold += 150;
		printf("Level Up!\n");
		printf("You gained 150 gold and your health got upgraded to 300.\n");
	}
	else if (*nExperience >= 300 && *nLevel == 4) 
	{
		*nLevel += 1; 
		*nPower += 40;
		*nHP = 400;
		*nGold += 200;
		printf("Max Level! Boss Battle Available!\n");
		printf("You gained 200 gold and your health got upgraded to 400.\n");
	}
}

void shopPowerShieldExp(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel) 
{
	int nPrice,
		nItemNumber = 0,
		nAmountOfItems = 0;
		
	do{
		do{
			shop();
			
			if (*nLevel == 5) statsMaxLevel(*nGold, *nHP, *nShield, *nPower, *nLevel);
			else Stats(*nGold, *nHP, *nShield, *nPower, *nExperience, *nExpLimit, *nLevel);

			shopMenu();
			nPrice = 0;
			
			printf("What item will you purchase: ");
				scanf("%d", &nItemNumber);
			
			if (nItemNumber >= 1 && nItemNumber < 4) 
			{
				printf("How many items will you purchase: ");
					scanf("%d", &nAmountOfItems);
			}
			else if(nItemNumber == 4) 
			{
				clearScreen();
				return;
			}
			
			switch(nItemNumber)
			{
				case 1: nPrice = nAmountOfItems * ShieldPrice; break;				//[1] Upgrade Shield
				case 2: nPrice = nAmountOfItems * PowerPrice; break;			//[2] Upgrade Power
				case 3:	nPrice = nAmountOfItems * ExpPrice; break; 				//[3] Experience Potion //Exit
			}

			clearScreen();	

		 	if (nItemNumber < 1 || nItemNumber > 4 || nAmountOfItems <= 0) 
		 		printf("Invalid input.\n"); 
			
		} while (nItemNumber < 1 || nItemNumber > 4 || nAmountOfItems <= 0 || nPrice < 0); 
			
		if (nItemNumber >= 1 && nItemNumber < 4)
		{
			if (*nGold >= nPrice)
			{
				switch(nItemNumber)
				{
					case 1: *nGold -= nPrice;  
							*nShield += nAmountOfItems; break;
					case 2: *nGold -= nPrice; 
							*nPower += nAmountOfItems; break;
					case 3: *nGold -= nPrice;
							*nExperience += 5 * nAmountOfItems; level(nHP, nPower, nExperience, nExpLimit, nLevel, nGold); break;
				}	
			}
			else printf("Not enough gold.\n");
		}
		
	} while (nItemNumber != 4);
}

void randomEnemyActions(int *nShield, int *nHP, int nEnemyPower)
{
	int nChanceToHit;
	srand(time(NULL));
	nChanceToHit = rand() % 10; 
	int doubleChanceToHit;
	
	if (nChanceToHit >= 0 && nChanceToHit <= 3)
	{
		srand(time(NULL));
		doubleChanceToHit = rand() % 10;
		if (doubleChanceToHit >= 6 && doubleChanceToHit <= 9)
		{
			if ((*nShield - (nEnemyPower * 2)) >= 0) //3-3 = 0
			{
				*nShield -= (nEnemyPower * 2);
				printf("You got double hit by the enemy for %d.\n", (nEnemyPower * 2));
			}
			else if ((*nShield - (nEnemyPower * 2)) < 0) //
			{
				*nHP += *nShield - (nEnemyPower * 2);
				*nShield = 0;
				printf("You got double hit by the enemy for %d.\n", (nEnemyPower * 2));
			}
			else if (*nShield == 0)
			{
				*nHP -= (nEnemyPower * 2);
				//clearScreen();
				printf("You got double hit by the enemy for %d.\n", (nEnemyPower * 2));
			}
		}
		else if (doubleChanceToHit >= 0 && doubleChanceToHit <= 5)
		{
			printf("Enemy missed double hit.\n");
		}
	}
	else if (nChanceToHit >= 4 && nChanceToHit <= 9)
	{
		if ((*nShield - nEnemyPower) >= 0) 
		{
			*nShield -= nEnemyPower;
			printf("You got hit by the enemy for %d.\n", nEnemyPower);
		}
		else if ((*nShield - nEnemyPower) < 0) //
		{
			*nHP += *nShield - nEnemyPower;
			*nShield = 0;
			printf("You got hit by the enemy for %d.\n", nEnemyPower);
		}
		else if (*nShield == 0)
		{
			*nHP -= nEnemyPower;
			printf("You got hit by the enemy for %d.\n", nEnemyPower);
		}
	}
}

void randomBossActions(int *nShield, int *nHP, int nDestroPower)
{
	int nChanceToHit;
	srand(time(NULL));
	nChanceToHit = rand() % 10; 
	int tripleChanceToHit;
	
	if (nChanceToHit >= 0 && nChanceToHit <= 5)
	{
		srand(time(NULL));
		tripleChanceToHit = rand() % 10;
		if (tripleChanceToHit >= 4 && tripleChanceToHit <= 9)
		{
			if ((*nShield - (nDestroPower * 3)) >= 0) //3-3 = 0
			{
				*nShield -= (nDestroPower * 3);
				printf("You got triple hit by Destro for %d.\n", (nDestroPower * 3));
			}
			else if ((*nShield - (nDestroPower * 3)) < 0) //
			{
				*nHP += *nShield - (nDestroPower * 3);
				*nShield = 0;
				printf("You got triple hit by Destro for %d.\n", (nDestroPower * 3));
			}
			else if (*nShield == 0)
			{
				*nHP -= (nDestroPower * 3);
				//clearScreen();
				printf("You got triple hit by Destro for %d.\n", (nDestroPower * 3));
			}
		}
		else if (tripleChanceToHit >= 0 && tripleChanceToHit <= 3)
		{
			printf("Destro missed triple hit.\n");
		}
	}
	else if (nChanceToHit >= 6 && nChanceToHit <= 9)
	{
		if ((*nShield - nDestroPower) >= 0) 
		{
			*nShield -= nDestroPower;
			printf("You got hit by the enemy for %d.\n", nDestroPower);
		}
		else if ((*nShield - nDestroPower) < 0) //
		{
			*nHP += *nShield - nDestroPower;
			*nShield = 0;
			printf("You got hit by the enemy for %d.\n", nDestroPower);
		}
		else if (*nShield == 0)
		{
			*nHP -= nDestroPower;
			printf("You got hit by the enemy for %d.\n", nDestroPower);
		}
	}
}

void battle(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGameOver)
{
	int nMove, nChanceToHit, nRandomExp, nHighestValue, nLowestValue, nEnemyHP, nEnemyPower, nEnemyShield, 
		nDestroHP = 500, 
		nDestroPower = 40, 
		nDestroShield = 100;
	
	switch (*nLevel)
	{
		case 1: nEnemyHP = 100,
				nEnemyPower = 3,
				nEnemyShield = 0; break;
		case 2: nEnemyHP = 150,
				nEnemyPower = 15,
				nEnemyShield = 10; break;
		case 3: nEnemyHP = 200,
				nEnemyPower = 20,
				nEnemyShield = 20; break;
		case 4: nEnemyHP = 300,
				nEnemyPower = 30,
				nEnemyShield = 30; break;
	}
		//nExcessDamage = *nShield - nEnemyPower;
	if (*nLevel >= 1 && *nLevel <=4)
	{
		printf("A wild monster appeared.\n");
		do {
			battleIcon();
			battleStats(*nGold, *nHP, *nShield, *nPower, *nExperience, *nExpLimit, *nLevel, nEnemyHP, nEnemyPower, nEnemyShield);
			battleMenu();
			printf("Choose your move: ");
				scanf("%d", &nMove);

		if (nMove == 1)
		{
			if ((nEnemyShield - *nPower) >= 0) //3-3 = 0
			{
				nEnemyShield -= *nPower;
				clearScreen();
				printf("You hit by the enemy for %d.\n", *nPower);
			}
			else if ((nEnemyShield - *nPower) < 0) //
			{
				nEnemyHP += nEnemyShield - *nPower;
				nEnemyShield = 0;
				//int nExcessDamage = *nShield - nEnemyPower;
				clearScreen();
				printf("You hit by the enemy for %d.\n", *nPower);
			}
			else if (nEnemyShield == 0)
			{
				nEnemyHP -= *nPower;
				clearScreen();
				printf("You hit by the enemy for %d.\n", *nPower);
			}
			randomEnemyActions(nShield, nHP, nEnemyPower);
		}
		else if (nMove == 2)
		{
			srand(time(NULL));
			nChanceToHit = rand() % 10; 
			if (nChanceToHit >= 0 && nChanceToHit <= 3)
			{
				if ((nEnemyShield - (*nPower * 2)) >= 0) //3-3 = 0
				{
					nEnemyShield -= (*nPower * 2);
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
				else if ((nEnemyShield - (*nPower * 2)) < 0) //
				{
					nEnemyHP += nEnemyShield - (*nPower * 2);
					nEnemyShield = 0;
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
				else if (nEnemyShield == 0)
				{
					nEnemyHP -= (nEnemyPower * 2);
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
			
			}
			else if (nChanceToHit >= 4 && nChanceToHit <= 9)
			{
				clearScreen();
				printf("You missed double hit.\n");
			}
			randomEnemyActions(nShield, nHP, nEnemyPower);
		}
		else if (nMove == 3)
		{
			srand(time(NULL));
			*nShield += 5;
			clearScreen();
			printf("Your shield is enhanced.\n");
			randomEnemyActions(nShield, nHP, nEnemyPower);
		}
		else if (nMove == 4)
		{
			clearScreen();
			return;
		}

		if (nMove < 1 || nMove > 4) 
		{
			clearScreen();
			printf("Invalid input.\n"); 
	 	}
		} while (*nHP > 0 && nEnemyHP > 0);

		if (nEnemyHP <= 0)
		{
			if (*nLevel == 1)
			{
				srand(time(NULL));
				nHighestValue = 50, nLowestValue = 40;
				nRandomExp = rand() % (nHighestValue - nLowestValue + 1) + nLowestValue;
			}
			else if (*nLevel == 2)
			{
				srand(time(NULL));
				nHighestValue = 10, nLowestValue = 6;
				nRandomExp = rand() % (nHighestValue - nLowestValue + 1) + nLowestValue;
			}
			else if (*nLevel == 3)
			{
				srand(time(NULL));
				nHighestValue = 20, nLowestValue = 12;
				nRandomExp = rand() % (nHighestValue - nLowestValue + 1) + nLowestValue;
			}
			else if (*nLevel == 4)
			{
				srand(time(NULL));
				nHighestValue = 30, nLowestValue = 18;
				nRandomExp = rand() % (nHighestValue - nLowestValue + 1) + nLowestValue;
			}
			*nExperience += nRandomExp;
			clearScreen();
			level(nHP, nPower, nExperience, nExpLimit, nLevel, nGold);
			printf("You won the battle for %d experience.\n", nRandomExp);
		}
		else if (*nHP <= 0)
		{
			*nHP = 30;
			clearScreen();
			printf("You lost the battle.\n");
		}
	}
	else if (*nLevel == 5)
	{
		printf("You have found the Great Beast of Titan named Destro. Slay it to get back to Earth.\n");

		do {
			battleIcon();
			bossBattleStats(*nGold, *nHP, *nShield, *nPower, *nLevel, nDestroHP, nDestroPower, nDestroShield);
			battleMenu();
			printf("Choose your move: ");
				scanf("%d", &nMove);

		if (nMove == 1)
		{
			if ((nDestroShield - *nPower) >= 0) //3-3 = 0
			{
				nDestroShield -= *nPower;
				clearScreen();
				printf("You hit Destro for %d.\n", *nPower);
			}
			else if ((nDestroShield - *nPower) < 0) //
			{
				nDestroHP += nDestroShield - *nPower;
				nDestroShield = 0;
				//int nExcessDamage = *nShield - nEnemyPower;
				clearScreen();
				printf("You hit Destro for %d.\n", *nPower);
			}
			else if (nDestroShield == 0)
			{
				nDestroHP -= *nPower;
				clearScreen();
				printf("You hit Destro for %d.\n", *nPower);
			}
			randomBossActions(nShield, nHP, nDestroPower);
		}
		else if (nMove == 2)
		{
			srand(time(NULL));
			nChanceToHit = rand() % 10; 
			if (nChanceToHit >= 0 && nChanceToHit <= 3)
			{
				if ((nDestroShield - (*nPower * 2)) >= 0) //3-3 = 0
				{
					nDestroShield -= (*nPower * 2);
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
				else if ((nDestroShield - (*nPower * 2)) < 0) //
				{
					nDestroHP += nDestroShield - (*nPower * 2);
					nDestroShield = 0;
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
				else if (nDestroShield == 0)
				{
					nDestroHP -= (nEnemyPower * 2);
					clearScreen();
					printf("You double hit the enemy for %d.\n", (*nPower * 2));
				}
			
			}
			else if (nChanceToHit >= 4 && nChanceToHit <= 9)
			{
				clearScreen();
				printf("You missed.\n");
			}
			randomBossActions(nShield, nHP, nDestroPower);
		}
		else if (nMove == 3)
		{
			srand(time(NULL));
			*nShield += 5;
			clearScreen();
			printf("Your shield is enhanced.\n");
			randomBossActions(nShield, nHP, nDestroPower);
		}
		else if (nMove == 4)
		{
			clearScreen();
			return;
		}

		if (nMove < 1 || nMove > 4) 
		{
			clearScreen();
			printf("Invalid input.\n"); 
	 	}
		} while (*nHP > 0 && nDestroHP > 0);

		if (nDestroHP <= 0)
		{
			clearScreen();
			printf("Congratulations. You have beaten the Great Beast Destro. \n");
			printf("You can now go back home to Earth. \n");
			gameOver(); 																	
			*nGameOver = 1;
		}
		else if (*nHP <= 0)
		{
			*nHP = 30;
			*nLevel -= 1;
			*nExperience = 0;
			*nExpLimit = 300;
			clearScreen();
			printf("You lost the battle against the Great Beast Destro. \n");
			printf("Fight more monsters to gain enough power and shield to beat Destro. \n");
		}
	}
}

void options(int *nGold, int *nHP, int *nShield, int *nPower, int *nExperience, int *nExpLimit, int *nLevel, int *nGameOver)
{
	int nOptions;
	
	do{
		castleTitan();
		if (*nLevel == 5) statsMaxLevel(*nGold, *nHP, *nShield, *nPower, *nLevel);
		else Stats(*nGold, *nHP, *nShield, *nPower, *nExperience, *nExpLimit, *nLevel);
		if (*nLevel >= 1 && *nLevel <= 4) 
			mainMenu();
		else 
			mainMenuMaxLevel();
		scanf("%d", &nOptions);

		if (nOptions < 1 || nOptions > 5)
		{
			clearScreen();
			printf("Invalid input.\n"); 
		}
		
	} while (nOptions != 1 && nOptions != 2 && nOptions != 3 && nOptions != 4 && nOptions != 5);

	switch (nOptions)
	{
		case 1: clearScreen(); battle(nGold, nHP, nShield, nPower, nExperience, nExpLimit, nLevel, nGameOver); break;																												//[1] Battle
		case 2: clearScreen(); shopPowerShieldExp(nGold, nHP, nShield, nPower, nExperience, nExpLimit, nLevel); break; 	//[2] Shop\n
		case 3: sleepTitanKingdom(nGold, nHP, nLevel); break;																	//[3] Sleep at Titan Kingdom (5 Gold)																							
		case 4: sleepStreets(nHP, nGold, nExperience, nLevel); level(nHP, nPower, nExperience, nExpLimit, nLevel, nGold); break;																									//[4] Sleep on the Streets (Free)
		case 5: clearScreen(); *nGameOver = 1; gameOver(); Stats(*nGold, *nHP, *nShield, *nPower, *nExperience, *nExpLimit, *nLevel); break; //[5] Exit																												//[5] Exit
	}
}

