# Shadows of the Forsaken
# Text Based Adventure Game
An immersive text-based adventure game built with C, where players explore a mysterious world through choices, puzzles, and secrets. The game features branching storylines with multiple possible endings based on player decisions. It combines interactive gameplay with captivating storytelling, offering a unique experience each time.



## 🧠 Game Objective

Explore the mansion scene by scene, make decisions, interact with objects, and solve the mystery. Your choices shape your path — **save your progress**, **load past scenes**, and survive the horrors hidden within.

---

## 📂 Project Structure

```
## 📁 Project Structure

GROUP_PROJECT/ 
├── .git
├── .vscode
├── final-project/ # Finalized game files 
│ ├── find02.c /  # final version of the game
│ ├── find02.exe # Executable (compiled) 
│ ├── save.txt / load.txt # Save system files 
│ ├── ticTakToe.c / .exe # Bonus mini-game 
├── map/ # Game mapping assets 
│ ├── flowchart.drawio.png # Game flowchart 
│ ├── map.png # Visual game map
├── presentation/ 
│ ├── font/ # Custom fonts for PPT 
│ ├── Group_Project.pptx # Presentation slides 
├── project-documents/ 
│ ├── final-story.docx  # Game story
│ ├── final-project-report(8-pages).docx # Final report
├── project-update/ 
│ ├── group_project_1.c / .exe # Progressive versions of project 
├── walkthrough/ 
│ ├── devs-walkthrough.mp4 # Developer commentary 
├── LICENSE # Licensing terms 
├── README.md # This file 
└── CONTRIBUTING.md # How to contribute
```

> 🔧 _Each member's contribution is found in their respective folders under `distributed-works/`._

---

## 👥 How to Run the Game

1. Open a C compiler (Code::Blocks / GCC / Turbo C).
2. Compile the main source file:
   ```bash
   gcc main/zen-care.c -o haunted_mansion.exe
   ```
3. Run the executable:
   ```bash
   ./haunted_mansion.exe
   ```

---

## 🎮 Game Navigation Guide

| Action                  | Key Press |
|------------------------|-----------|
| Choose an option       | `1 - 9`   |
| View Mansion Map       | `M`       |
| Open Game Menu         | `ESC`     |

### 🗀️ Map Functionality
Displays the current layout of the mansion and your location.

### 📂 Menu Options
- **Save Game** – Save your current progress to `save.txt`.
- **Return to Main Menu** – Restart from the beginning.
- **Continue** – Resume from current scene.

---

## 💾 Saving & Loading

- **Automatic Save**: After choosing `Save Game` from the menu, your current scene number is stored.
- **Loading**: When the game starts, you can load a previously saved state via the `load()` function.

---

## 🔧 Developers & Contribution

This project is developed by a team of four under the **Zen Care** initiative. All modular features, like different scenes, puzzles, and events, are divided among developers under `distributed-works/`.

If you're contributing:
- Keep your code modular and well-commented.
- Stick to the naming conventions (`the_whispering_bookshelf()`, `forsaken_chamber()`, etc).
- Update `saveVault()` accordingly when adding a new scene.

---

## 🏁 Ending

The game ends when the player:
- Successfully escapes via `the_forgotten_exit()`
- Or meets a tragic fate through poor decisions.

Replay to uncover all paths and secrets!

---

## 📜 Credits

Special thanks to the team for the creative direction, scene development, and gameplay mechanics!

Md. Fahim Hossain
Samia Zaman
Sidratul Muntahara Audhira
Md. Lutful Alam

---






























