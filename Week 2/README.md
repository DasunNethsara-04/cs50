This directory contains all the code snippets and all the Problem Sets that should do in the Week 2 using the programming language called `C`.

Here are all the core concepts that covers in **_Week 2 - Arrays_**

> Introduction

> Reading Levels

> Cryptography

> Compiling

> Debugging

> debug50

> Types

> scores.c

> Arrays

> Strings

> String Length

> uppercase.c

> Command Line Arguments

> Cowsay

> Exit Status

> Encryption

## Problem Sets

1. Make a Scrabble game that calculates the score of a word.
   In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.

     <!-- Make a table that contains all the alphabetic characters and its score -->

   | Letter | Value |
   | ------ | ----- |
   | A      | 1     |
   | B      | 3     |
   | C      | 3     |
   | D      | 2     |
   | E      | 1     |
   | F      | 4     |
   | G      | 2     |
   | H      | 4     |
   | I      | 1     |
   | J      | 8     |
   | K      | 5     |
   | L      | 1     |
   | M      | 3     |
   | N      | 1     |
   | O      | 1     |
   | P      | 3     |
   | Q      | 10    |
   | R      | 1     |
   | S      | 1     |
   | T      | 1     |
   | U      | 1     |
   | V      | 4     |
   | W      | 4     |
   | X      | 8     |
   | Y      | 4     |
   | Z      | 10    |

   For example, if we wanted to score the word “CODE”, we would note that the ‘C’ is worth 3 points, the ‘O’ is worth 1 point, the ‘D’ is worth 2 points, and the ‘E’ is worth 1 point. Summing these, we get that “CODE” is worth 7 points.

   In a file called `scrabble.c` in a folder called `scrabble`, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).

   ```bash
   Player 1: Question?
   Player 2: Question!
   Tie!
   $ ./scrabble
   Player 1: red
   Player 2: wheelbarrow
   Player 2 wins!
   $ ./scrabble
   Player 1: COMPUTER
   Player 2: science
   Player 1 wins!
   $
   ```

2. Readability
   In a file called `readability.c` in a folder called `readability`, you’ll implement a program that calculates the approximate grade level needed to comprehend some text. Your program should print as output “Grade X” where “X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output “Grade 16+” instead of giving the exact index number. If the grade level is less than 1, your program should output “Before Grade 1”.

   ```bash
   $ ./readability
   Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
   Grade 3
   $ ./readability
   Text: In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.
   Grade 7
   $ ./readability
   Text: Harry Potter was a highly unusual
   Grade 5
   $ ./readability
   Text: As the average number of letters and words per sentence increases, the Coleman-Liau index gives the text a higher reading level.
   Grade 12
   $ ./readability
   Text: A large language model can generate human-like text. OpenAI's GPT-3, for example, can write essays, answer trivia questions, and even write poetry.
   Grade 11
   $ ./readability
   Text: A large language model can generate human-like text. OpenAI's GPT-3, for example, can write essays, answer trivia questions, and even write poetry.
   Grade 11
   $ ./readability
   Text: A large language model can generate human-like text. OpenAI's GPT-3, for example, can write essays, answer trivia questions, and even write poetry.
   Grade 11
   ```

3. Caesar's Cipher
   In a file called `caesar.c` in a folder called `caesar`, write a program that enables you to encrypt messages using Caesar’s cipher. At the time the user executes the program, they should decide, by providing a command-line argument, what the key should be in the secret message they’ll provide at runtime. We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.

   ```bash
   Usage: ./caesar key
   $ ./caesar HELLO
   Usage: ./caesar key
   $ ./caesar 1 2 3
   Usage: ./caesar key
   $ ./caesar 13
   plaintext:  Hi there!
   ciphertext: Uv gurer!
   $ ./caesar 26
   plaintext:  This is CS50.
   ciphertext: This is CS50.
   $
   ```
