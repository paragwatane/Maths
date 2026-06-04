#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_Maths.h"

class Maths : public QMainWindow
{
    Q_OBJECT

public:
    Maths(QWidget* parent = nullptr);
    ~Maths();

private slots:
    void onSubmitClicked();   // runs when Submit is clicked

private:
    Ui::MathsClass ui;
    int score = 0;            // tracks correct answers
    int total = 0;            // tracks total attempts
};