# Number Guessing Game 

## Overview

Welcome to the **Number Guessing Game**! This is a simple command-line interface (CLI) game where the computer randomly selects a number, and your goal is to guess it correctly within a limited number of attempts. The number can range from 1 to 100, and your chances to guess it depend on the difficulty level you choose.

This project is part of the [Roadmap.sh - Projects](https://roadmap.sh/projects/number-guessing-game) and is designed to help you practice and improve your programming skills, especially in C++.

## Features

- **Random Number Selection**: The computer selects a random number between 1 and 100.
- **Difficulty Levels**: You can select from three difficulty levels, each giving you a different number of attempts:
  - **Easy**: 10 chances
  - **Medium**: 5 chances
  - **Hard**: 3 chances
- **Guess Feedback**: After each guess, the game will tell you whether the correct number is greater or less than your guess.
- **Attempts Tracking**: The game keeps track of how many attempts it took to guess the correct number.
- **Winning Condition**: If you guess the number correctly, the game congratulates you and displays how many attempts it took.
- **Multiple Rounds**: After finishing a round, you have the option to play again or quit.
- **Timer**: The game will also measure how long it took you to guess the correct number.
  
## Installation

To play the game, follow these steps:

1. **Clone the repository** (or download the source code):
    ```bash
    git clone https://github.com/Yashi-Singh-9/Number-Guessing-Game
    cd Number-Guessing-Game
    ```

2. **Compile the code** using a C++ compiler:
    ```bash
    g++ -o number_guessing_game number_guessing_game.cpp
    ```

3. **Run the game**:
    ```bash
    ./number_guessing_game
    ```

### Requirements
- A C++ compiler (e.g., GCC or MinGW) is required to compile the code.
- The game uses the C++ `<chrono>` library to track time.

## Game Flow

1. **Game Start**: The game displays a welcome message and explains the rules of the game.
2. **Difficulty Selection**: You are prompted to select one of the following difficulty levels:
   - 1. Easy (10 chances)
   - 2. Medium (5 chances)
   - 3. Hard (3 chances)
3. **Guessing Phase**:
   - You enter your guesses.
   - After each guess, the game tells you whether the number is higher or lower than your guess.
4. **End Game**:
   - If you guess the number correctly, the game congratulates you and displays the number of attempts it took.
   - If you run out of chances, the game ends and tells you the correct number.
5. **Replay Option**: After a round ends, you will be asked if you want to play again. You can enter 'y' to play again or 'n' to quit.

## Sample Output

### Starting the Game

```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.
Please select the difficulty level:
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)
Enter your choice: 2
Great! You have selected the Medium difficulty level.
Let's start the game!
```

### Guessing Phase

```
Enter your guess: 50
Incorrect! The number is less than 50.

Enter your guess: 25
Incorrect! The number is greater than 25.

Enter your guess: 35
Incorrect! The number is less than 35.

Enter your guess: 30
Congratulations! You guessed the correct number in 4 attempts.
It took you 5 seconds to guess the number.
```

### Replay Option

```
Would you like to play again? (y/n): n
Thanks for playing! Goodbye!
```

## Features to Add

- **Hints System**: Provide hints after a certain number of failed guesses to help the user.
- **High Score Tracking**: Track the number of attempts required to guess the number across rounds and display the best (fewest attempts) score.
- **Leaderboard**: Implement a leaderboard feature to store and display high scores for different difficulty levels.
- **Graphical User Interface (GUI)**: In the future, you could enhance this game with a graphical interface using a library like SFML or SDL for C++.

## License

This project is open-source and available under the MIT License.

## Author

- **Yashi Singh**  
- **LinkedIn** - [Yashi Singh](https://www.linkedin.com/in/yashi-singh-b4143a246)

---

Feel free to modify the game to add new features or customize it to your liking! Enjoy playing the **Number Guessing Game**! 🎮

For more details, visit the [Roadmap.sh - Number Guessing Game](https://roadmap.sh/projects/number-guessing-game).
