#include "Maths.h"

Maths::Maths(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // Connect Submit button click to our function
    connect(ui.submitButton, &QPushButton::clicked,
        this, &Maths::onSubmitClicked);
}

Maths::~Maths()
{
}

void Maths::onSubmitClicked()
{
    // Get what the user typed
    QString userAnswer = ui.answerInput->text().trimmed();

    // The correct answer to "What is 5+3?"
    QString correctAnswer = "8";

    total++;  // count this attempt

    if (userAnswer == correctAnswer)
    {
        score++;  // increase score
        ui.feedbackLabel->setText("Correct! Score: "
            + QString::number(score) + "/"
            + QString::number(total));
        ui.feedbackLabel->setStyleSheet("color: green;");
    }
    else
    {
        ui.feedbackLabel->setText("Wrong! Answer is 8. Score: "
            + QString::number(score) + "/"
            + QString::number(total));
        ui.feedbackLabel->setStyleSheet("color: red;");
    }

    // Clear the input box for next attempt
    ui.answerInput->clear();
}