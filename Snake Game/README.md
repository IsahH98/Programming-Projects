# Snake Game

Here are the instructions on how to use and understand the provided code for the Snake and Apple game using Pygame:

1. Installation:
   - Make sure you have Pygame installed. You can install it using the command `pip install pygame`.
   - Make sure you also have all the recources downladed.

2. Game Overview:
   - The goal of the game is to control the snake and eat the apples to increase the snake's length without colliding with the walls or itself.
   - The snake can be controlled using the arrow keys: Up, Down, Left, and Right.

3. Code Structure:
   - The code consists of three main classes: `Apple`, `Snake`, and `Game`.
   - The `Apple` class handles the apple's position, drawing the apple on the screen, and moving the apple to a random position when it is eaten by the snake.
   - The `Snake` class manages the snake's length, position, and movement. It also handles drawing the snake on the screen and increasing its length when it eats an apple.
   - The `Game` class initializes the game, handles user input, updates the game state, and manages the game over state.

4. Running the Game:
   - To start the game, run the script using Python.
   - The game window will open with the snake and an apple displayed on the screen.
   - Control the snake's movement using the arrow keys: Up, Down, Left, and Right.
   - The score is displayed in the top-right corner of the screen.
   - If the snake collides with an apple, its length increases, and a new apple appears at a random position.
   - If the snake collides with the walls or itself, the game is over.
   - To play again after the game over, press the Enter key. To exit the game, press the Escape key.

5. Customization:
   - You can customize the game by modifying various aspects of the code, such as the size of the game window, the image files used for the snake and apple, the colors, fonts, and more.
   - Feel free to explore and modify the code to add new features or customize the game to your liking.

These instructions should help you use the code and understand how the Snake and Apple game works using Pygame. Have fun playing and experimenting with the code!
