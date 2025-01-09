# Tic-Tac-Toe Game
This is a simple two-player Tic-Tac-Toe game implemented in C++. The game allows two players to play against each other on a 3x3 grid. The players alternate turns to mark their respective symbols ('O' and 'X') on the grid. The game ends when one player wins or if the grid is filled, resulting in a draw.

## Features
- **Two players**: Player 1 uses the symbol 'O' and Player 2 uses 'X'.
- **Dynamic board display**: The game board updates after each turn.
- **Winner detection**: The game automatically checks for a winner or a draw after every move.
- **Player names**: Players can enter their names, which will be displayed on the board during their turns.
- **Replay option**: After a game ends, players are asked if they want to play again.

## Requirements
- C++ compiler (e.g., GCC, Clang)
- Basic knowledge of C++ (loops, conditionals, arrays, etc.)

## How to Play
1. Upon starting the game, enter the names of Player 1 and Player 2.
2. The game will display a 3x3 grid where players can take turns to place their symbols ('O' or 'X').
3. Players will be asked to enter a row and column number (between 0 and 2) to place their symbol.
4. The game will check for a winner or a draw after each move and display the updated board.
5. If there's a winner or a draw, the game will notify the players, and they will be asked if they want to play again.

## How to Compile
To compile the program using GCC:

```bash
g++ -o TicTacToe TicTacToe.cpp
```

To run the program:

```bash
./TicTacToe
```

