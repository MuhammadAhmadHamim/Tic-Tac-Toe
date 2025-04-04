#include <stdio.h>
#include<conio.h>
int main() {
    // Let's initialize the variables
 int rows;
 int columns;
char board[3][3];


    // Let's fill our 2D Array to avoid garbage
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		board[i][j]='_';
	 }
 }
 
 //  Interface
 printf("\t\t\t\t\t\t Tic Tac Toe");
 printf("\n");
 printf("\n");
 printf("\t \t \t\t\t\t  0  1  2\n");
 printf("\t\t\t\t\t0\t  __|__|__\n");

 printf("\t\t\t\t\t1\t  __|__|__\n");
 printf("\t\t\t\t\t2\t  __|__|__\n\n");
 
 printf("->Rules to remember:\n\n");
 printf("1.The Game Board: Tic-tac-toe is played on a 3x3 grid, consisting of nine squares as shown above.\n");
 printf("2.Players: Two players participate, one using 'X' and the other using 'O'.\n");
 printf("3.Turns: Players take turns placing their mark ('X' or 'O') in an empty square on the grid.\n");
 printf("4.Winning: The first player to get three of their marks in a row(horizontally,vertically, or diagonally) wins the game.\n");
 printf("5.Tie: If all nine squares are filled and no player has three in a row, the game ends in a tie.\n\n");

printf("->Instructions to play:\n\n");
printf("1.Player with symbol 'X' will start the game.\n");
printf("2.After that player with symbol 'O' will make his move.\n");
printf("3.For checking a square you need to enter the row and column number separated by an enter key respectively.\n");
printf("4.You can't check in a pre-occupied space.\n");
printf("5.You can't enter any character other than a number or else the program will crash.\n");

//Interactions of users and projection of their turns
for(int i=1;i<=9;i++){
	
		printf("Enter the placement of your ");	
	if(i%2==0){
		printf("O:");
			scanf("%d %d", &rows, &columns);
			
			//Test to make sure user doesn't enter any number exceeding the board
		 if(rows < 0 || rows > 2  || columns <0 || columns > 2){
				printf("\nInvalid input,Please try again!");
				i--;
			}
			
			//Test to make sure user doesn't take the already filled spot
			else if(board[rows][columns] !='_'){
				printf("\nError,Spot already taken!");
				i--;
			}
		   

			else{
board[rows][columns] = 'O';}	
}
else{
printf("X:");
	scanf("%d %d", &rows, &columns);
	
			//Test to make sure user doesn't enter any number exceeding the board
		 if(rows < 0 || rows > 2  || columns <0 || columns > 2){
				printf("\nInvalid input,Please try again!");
				i--;
			}
			
						//Test to make sure user doesn't take the already filled spot
			else if(board[rows][columns] !='_'){
				printf("\nError,Spot already taken!");
				i--;
			}
			
			else{
			board[rows][columns]='X';	
			}
}

// Print out of the board
	printf("\n");
for(int i=0;i<3;i++){
	printf("\t\t\t\t\t\t   ");
	for(int j=0;j<3;j++){
	
		printf("%c",board[i][j]);
		printf(" ");
	}
	printf("\n");
}
}

//Initializing Winning condition
	int winner=0;
	
	//Let's check Rows
	if(board[0][0] !='_' && board[0][0]==board[0][1] && board[0][1]==board[0][2]){winner=board[0][0];}
	if(board[1][0] !='_' && board[1][0]==board[1][1] && board[1][1]==board[1][2]){winner=board[1][0];}
	if(board[2][0] !='_' && board[2][0]==board[2][1] && board[2][1]==board[2][2]){winner=board[2][0];}
	
	//Let's check Columns
	if(board[0][0] !='_' && board[0][0]==board[1][0] && board[1][0]==board[2][0]){winner=board[0][0];}
	if(board[0][1] !='_' && board[0][1]==board[1][1] && board[1][1]==board[2][1]){winner=board[0][1];}
	if(board[0][2] !='_' && board[0][2]==board[1][2] && board[1][2]==board[2][2]){winner=board[0][2];}
	
	//Let's check Diagonals

    if(board[0][0] !='_' && board[0][0]==board[1][1] && board[1][1]==board[2][2]){winner=board[0][0];}
    if(board[0][2] !='_' && board[0][2]==board[1][1] && board[1][1]==board[2][0]){winner=board[0][2];}

    // Output,W / L / Draw
	if(winner==88){
		printf("\nX is the winner");
			}
		else if(winner==79){
		printf("\nO is the winner");
	        }
    else{
		printf("\nDraw");
        	}

   getch();
   return 0;
}

