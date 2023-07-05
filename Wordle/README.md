## Wordle50 Game

The Wordle50 game is a command-line word-guessing game. Players have a limited number of attempts to guess a secret word. The game provides feedback on each guess to help players deduce the correct word.

### Requirements

- C compiler (e.g., GCC) installed on your computer
- Basic knowledge of using the command line or terminal

### Setup Instructions

1. Create a new folder on your computer to store the Wordle50 game files.
2. Download the `wordle50.c` file from this repository.
3. Move the downloaded `wordle50.c` file into the folder you created.
4. In the same folder, download the word list text files:
   - [5.txt](./wordlists/5.txt)
   - [6.txt](./wordlists/6.txt)
   - [7.txt](./wordlists/7.txt)
   - [8.txt](./wordlists/8.txt)

### Running the Game

1. Open a terminal or command prompt on your computer.
2. Navigate to the folder where you saved the `wordle50.c` file and the word list text files using the `cd` command. For example:
   ```bash
   cd /path/to/folder

3. Compile the code using a C compiler. Run the following command:

   ```bash
   gcc wordle50.c -o wordle50

4. Run the game by executing the following command:
   ```bash
   ./wordle50 <wordsize>

Replace <wordsize> with the desired length of the word (5, 6, 7, or 8).

The game will start, and you will be prompted to enter your guesses. Follow the instructions provided by the game and input your guesses accordingly.

The game will provide feedback on each guess and notify you if you win or lose.
