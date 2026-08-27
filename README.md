# 🧮 Maths Quiz — Qt C++

A simple **Maths Quiz application** built using **C++ and Qt**.

The application allows the user to enter an answer to a maths question and immediately receive feedback. It also keeps track of the user's **score** and **total attempts**.

## 📸 Overview

This project demonstrates the basics of creating a GUI application with Qt, handling button events, reading user input, updating UI elements, and maintaining application state.

## ✨ Features

* ➕ Simple maths question
* ⌨️ User answer input
* ✅ Instant feedback for correct answers
* ❌ Feedback for incorrect answers
* 🏆 Score tracking
* 📊 Total attempt tracking
* 🧹 Automatically clears the input field after submission
* 🎨 Color-coded feedback:

  * Green → Correct
  * Red → Wrong

## 🛠️ Technologies Used

* **C++**
* **Qt**
* **Qt Widgets**
* **Qt Creator / Visual Studio with Qt**
* **QString**
* **QPushButton**
* **QMainWindow**

## 📂 Project Structure

```text
MathsQuiz/
│
├── Maths.cpp
├── Maths.h
├── Maths.ui
├── main.cpp
└── README.md
```

## ⚙️ How It Works

When the user clicks the **Submit** button, the application:

1. Reads the answer entered by the user.
2. Removes unnecessary whitespace.
3. Compares the input with the correct answer.
4. Increases the total attempt counter.
5. If the answer is correct, increases the score.
6. Displays the result and current score.
7. Clears the input field for the next attempt.

### Example

The current question is:

```text
What is 5 + 3?
```

Correct answer:

```text
8
```

If the user enters `8`:

```text
Correct! Score: 1/1
```

If the user enters another answer:

```text
Wrong! Answer is 8. Score: 0/1
```

## 🧠 Concepts Demonstrated

This project is useful for learning several fundamental Qt and C++ concepts:

* Qt Signals and Slots
* Button click events
* UI interaction
* `QString`
* Reading text from `QLineEdit`
* Updating `QLabel`
* Basic conditional statements
* Class constructors and destructors
* Member variables
* Simple score management

The button is connected to the custom function using Qt's signal-slot mechanism:

```cpp
connect(ui.submitButton, &QPushButton::clicked,
        this, &Maths::onSubmitClicked);
```

## 🚀 Future Improvements

Some possible improvements for future versions:

* [ ] Add multiple maths questions
* [ ] Generate random questions
* [ ] Support addition, subtraction, multiplication, and division
* [ ] Add difficulty levels
* [ ] Add a timer
* [ ] Add a final score screen
* [ ] Add question numbers
* [ ] Prevent duplicate attempts
* [ ] Improve the UI design
* [ ] Add sound effects and animations

## 🎯 Purpose

This project was created as a small **C++/Qt GUI learning project** to understand how user input, button events, and UI updates work together in a desktop application.

---

**Built with C++ and Qt 💻**
