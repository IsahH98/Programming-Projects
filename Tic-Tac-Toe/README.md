# Tic Tac Toe

Here are the instructions on how to use and understand the provided code for the TicTacToe game using Pygame:

1. Installation:
   - Make sure you have Pygame installed. You can install it by running `pip install pygame` in your terminal or command prompt.

2. Using the Game:
   - Run the script using Python.
   - The game window will open with a 3x3 grid for TicTacToe.
   - Each player takes turns clicking on empty squares to place their symbol (X or O).
   - Player 1 starts with X, and Player 2 follows with O.
   - The game ends when a player wins or there is a draw.
   - If a player wins, a message will be displayed showing the winning player.
   - If there is a draw, a message will be displayed indicating a draw.
   - After the game ends, the game will automatically restart.

3. Game Controls:
   - Mouse Click: To place your symbol (X or O), click on an empty square within the grid.

4. Customization:
   - You can customize the appearance of the game by modifying the color constants such as WHITE, BLACK, GRAY, RED, and BLUE.
   - The symbols for X and O can be changed by replacing the image files "x2.png" and "o2.png" with your own images. Make sure the images are the same size as the provided ones (X: 100x100 pixels, O: 150x150 pixels) to maintain the grid's alignment.

5. Understanding the Code:
   - The code creates a game window using Pygame and initializes the necessary variables and resources.
   - The grid is drawn on the window using the `draw_grid()` function.
   - The `initialize_grid()` function sets up the game array, which represents the state of the game board.
   - The `click()` function handles the mouse click events and updates the game array accordingly.
   - The `has_won()` function checks if a player has won the game by examining the rows, columns, and diagonals of the game array.
   - The `has_drawn()` function checks if the game has ended in a draw by verifying if there are any empty squares left.
   - The `display_message()` function shows a message on the screen when the game ends.
   - The `render()` function updates the game window to display the current state of the game.
   - The `main()` function manages the game loop, where players take turns and the game continues until there is a winner or a draw.
   - The game loop repeats until the player closes the game window.

These instructions should help you use and understand how the TicTacToe game works using Pygame. Feel free to modify the code to add additional features or customize the game according to your preferences. Enjoy playing TicTacToe!
