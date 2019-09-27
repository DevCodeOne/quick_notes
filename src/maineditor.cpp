#include <iostream>

#include <QKeyEvent>

#include "maineditor.h"


MainEditor::MainEditor(QWidget *parent) : QTextEdit(parent) {}

void MainEditor::keyPressEvent(QKeyEvent *event) {
    QTextEdit::keyPressEvent(event);
}


void MainEditor::keyReleaseEvent(QKeyEvent *event) {
    QTextEdit::keyReleaseEvent(event);
}
