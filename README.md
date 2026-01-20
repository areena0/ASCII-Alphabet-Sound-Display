# ASCII Alphabet Sound Display

A Windows console application written in **C++** that displays animated ASCII
art for alphabet letters **A–G** and plays a corresponding **WAV sound** for
each letter.

The program demonstrates basic animation timing, conditional logic using
`switch`, and audio playback using the Windows Multimedia API.

---

## Features
- ASCII art rendering for letters A–G
- Timed animation using delays
- WAV audio playback for each letter
- Organized asset structure with a dedicated `sounds/` folder
- Simple and readable C++ control flow

---

## How It Works
1. The user inputs a letter (A–G or a–g)
2. The program prints the ASCII art line by line with delays
3. A corresponding sound file is played from the `sounds/` folder
4. Invalid input is handled gracefully

---

## How to Run (Windows / Visual Studio)

1. Open **Visual Studio**
2. Create a new **C++ Console Application**
3. Replace the generated `main.cpp` with `src/main.cpp`
4. Ensure the `sounds/` folder exists in the project root
5. Set **Working Directory** to: `$(ProjectDir)`
6. Build and run the project

---

## Technologies Used
- C++
- Windows API (`windows.h`)
- Windows Multimedia API (`PlaySound`)
- Console input/output

---

## What I Learned
- Using `switch` statements for structured decision logic
- Implementing timed output using `Sleep`
- Playing WAV audio files in C++ on Windows
- Organizing assets using folders
- Writing platform-specific code responsibly

---

## Notes
This project was created as a learning exercise to practice C++ fundamentals,
console output formatting, and basic multimedia integration on Windows.

