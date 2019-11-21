#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30

int pl;//* player 
int do;//* dollar (in betting)
int cardnum [52]={1,2,3,4,5,6,7,8,9,10,}

//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//some utility functions

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
}

//print the card information (e.g. DiaA)

	void printCard(int cardnum) {
   if (cardnum / 4 == 0) {
      if (cardnum == 0)
         printf("HeartA\n");
      else if (cardnum == 10)
         printf("HeartJ\n");
      else if (cardnum == 11)
         printf("HeartQ\n");
      else if (cardnum == 12)
         printf("HeartK\n");
      else
         printf("Heart%d", cardnum + 1);
   }
   if (cardnum / 4 == 1) {
      if (cardnum == 0)
         printf("DiaA\n");
      else if (cardnum == 10)
         printf("DiaJ\n");
      else if (cardnum == 11)
         printf("DiaQ\n");
      else if (cardnum == 12)
         printf("DiaK\n");
      else
         printf("Dia%d", cardnum + 1);
   }
   if (cardnum / 4 == 2) {
      if (cardnum == 0)
         printf("SpadeA\n");
      else if (cardnum == 10)
         printf("SpadeJ\n");
      else if (cardnum == 11)
         printf("SpadeQ\n");
      else if (cardnum == 12)
         printf("SpadeK\n");
      else
         printf("Spade%d", cardnum + 1);
   }
   if (cardnum / 4 == 3) {
      if (cardnum == 0)
         printf("ClubA\n");
      else if (cardnum == 10)
         printf("ClubJ\n");
      else if (cardnum == 11)
         printf("ClubQ\n");
      else if (cardnum == 12)
         printf("ClubK\n");
      else
         printf("Club%d", cardnum + 1);
   }
   
}
	

}


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	void mixCardTray(void) { 
int a, b, temp, i; 
int maxCount = 100; 


for (i = 0; i <= maxCount; i++) { 
a = rand() % 52; 
b = rand() % 52; 

if (a != b) { 
temp = CardTray[a]; 
CardTray[a] = CardTray[b]; 
CardTray[b] = temp; 
} 
else 
continue; 
} 

} 


int main() { 
int i, r; 

for (i = 0; i <= N_CARD; i++) 
CardTray[i] = i + 1; 


for (i = 0; i <= N_CARD; i++) 
printf("%d\n", CardTray[i]); 
printf("\n"); 

mixCardTray(); 

for (i = 0; i <= N_CARD; i++) 
printf("%d\n",CardTray[i]); 
printf("\n\n\n"); 


system("pause"); 
return 0; 
} 
	

}

//get one card from the tray
int pullCard(void) {
}


//playing game functions -----------------------------

//player settiing
int configUser(void) { 

for (;;)
{
printf("player?");
scanf("%d",&pl);
if (pl>5)

{
prinf ("too many");}
else if (pl>0 && pl =<5 )
{break ; 	
}
}

//betting
int betDollar(void) {
INT 
	printf("how much?");
	scanf ("%d",&do);
	if (do>50){
		printf("you can bet under 50");
	}
	else if (do>0 && dl<=50)
	{break;
	}
	
}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

//print initial card status
void printCardInitialStatus(void) {
	
	
}

int getAction(void) {
	
}


void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {현재카드의 합 21과의 비교  RETURN값  
	
	
}

int checkResult() {
	
}

int checkWinner() {
	
}



int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	

	//2. card tray
	
	mixCardTray();



	//Game start --------
	do {
		
		betDollar();
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus();
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for () //each player
		{
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
			}
		}
		
		//result
		checkResult();
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
