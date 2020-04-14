# **Documentation: Tic-Tac Toe Class Project**
---
**By Our Class  
Computer Science 1A, 16710    
Professor Karla Soler   
13, April 2020**

---

![Image of Tic Tac Toe Board](https://upload.wikimedia.org/wikipedia/commons/3/30/TicTacToe.gif)

The game requires two players, typically human against human, but this program is designed as a game with the computer versus the user (*CvP*).
During *CvP*, the computer will make moves against its opponent. The user will be able to choose whether they will be using the `’X’ (X = 1) or an ‘O’(O = 2), by inputting 1 or 2.`

The computer will play using the marker that was not chosen. The game board is a 3x3 grid creating nine slots for the markers to be placed within. The goal of the game is to get three of the same markers (X or O) in a row. This can be made diagonally, vertically, or horizontally.

If the game runs out of space without a winner, the game will announce a draw. Moves, or placement of a marker, alternates between the players. The best way to win the game is to study where the competitor places their marker, and to decide whether to strategically place a marker to disturb the opponent’s row.

It is important to block the computer from being able to complete a solid row of its markers, diagonally, vertically, or horizontally. This means that if the computer places two of its markers in a row, the opponent must place their marker in the third position of that row to avoid losing.

The variables are used to determine which character the player and computer player are using. They can also be used to check values at certain variables. The variables were left dynamic meaning that the user can choose if they want to play using X or O.

 A vector with nine variables was declared because there are nine slots in a tic-tac-toe game. `'int gameGoing'` checks if the game is going. If it equals 1, the game is going and the computer can make moves.

 If it equals 0, the game has ended in a win for either the computer or the user, or a draw between the two was met. `'int userturn'` is a forward declaration of the `userturn` function which allows the compiler to identify specific properties of the function. The `loadBoard` function tells the user whose turn it is. It can also be used to check whether or not either opponent has won the game.

  The `checkGame` function also checks to see if anyone has won the game yet. The way the function does this is by checking all the possible winning outcomes, and determining if any of them are true for the current game. There are “if” and “else if” statements setting parameters of how either party could win, or how the game could end in a draw.  

  If someone has won, the program will end. The `cputurn` function generates a random number between 1 and 9 and checks to see if that square has been taken by the user or computer yet. If it has not been taken, the computer can choose that spot. If it has been taken, another number will be generated.

   After the computer has played, it will pass the turn over to the user. The `userturn` function tells the player to pick an available square, allowing the user to enter a number between one to nine, representing each slot in the 3 x 3 area.

   If the input is a slot that has already been taken, the function displays an error message, recursively calling the `userturn` function once again, allowing the user to input a new choice. When a valid input is used, the program subtracts one from the value and uses the new one as the index of the vector.

   These functions work together to create an easy to use code that replicates an in-person tic-tac-toe game. To use the game, the user will be prompted to choose their marker. After, a game board with nine numbered slots will be displayed.

   The user will then be prompted to input a value between 1-9 which corresponds with the numbered slots. As the slots are chosen, it will show the marker placed in that spot, making it easier for the user to understand which slot has been taken and by who. A display message will confirm if the user or the computer won the game. If neither parties win, the game will end in a draw.

## **Written By:**
| What the code does | Function/Instructions |Editors |Markdown|
| :------------- | :------------- | :------------- | :------------- |
| Alan Vuong     | Christian Caparroso | Abdulla Ghosheh | Shane Wawrak |
| Aria Mottaghi  | Kyle Roehrs    | Andrew Smith   |  Reed Wilson     |
| Eric Coursol   |                | Bethany Tooley | Dillon Hallex  |
| Sarah Lindsey  |                | Daniel Howden  |                |
|                |                | Eric Coursol   |                |


###### What the code does  
Alan Vuong

Aria Mottaghi

Eric Coursol

Sarah Lindsey
###### How the Code Works/How to use it
Christian Caparroso 

Kyle Roehrs
###### Editors/Formatters
Abdulla Ghosheh
Andrew Smith
Bethany Tooley

Daniel Howden

Eric Coursol

Sarah Lindsey
###### Markdown Writers
Shane Wawrak

Reed Wilson

Dillon Hallex
## **References:**

>Bakshi, S., Vahid, F., Amendt, C., Lysecky, R., Noel, K., & von Rosenberg, A. (2012).     Introduction to C. Retrieved April 7, 2020, from https://www.zybooks.com/
-Stephanie

>Tic Tac Toe. (n.d.). Retrieved April 11, 2020, from https://www.exploratorium.edu/brain_explorer/tictactoe.html -Sarah

>C Standard Library. (2019, October 13). Retrieved from                          https://en.wikipedia.org/wiki/C++_Standard_Library -Jose S./Leah T.
Surma, Greg. “Tic Tac Toe - Creating Unbeatable AI.” Medium, Towards Data Science, 17 Jan. 2019,
towardsdatascience.com/tic-tac-toe-creating-unbeatable-ai-with-minimax-algorithm-8af9e52c1e7d. -Fares I.
