# Chess
A Github Repository for a text based chess game application

## Tile class
The `Tile` class will be an aggregation of the `Board` class which represents a tile space on a board, and each tile will have a color, so for chess either black or white, and a game piece which in this case is the chess pieces coming from the `piece` class.

## Board class
The `Board` class will be the base parent class for any kind of board one would need to create, and it will include an array of pieces that will be assigned by a constructor, a print function to display the pieces, a pure virtual initialize function which is intended to initilaize the board for each specific child class, along with a getter and a setter function for a tile on the board which will also be pure virtual for the children classes to handle.

## ChessBoard class
The `ChessBoard` class will inherit from the `Board` class and have a specific board size and implement the virtual functions from the `Board` class.
