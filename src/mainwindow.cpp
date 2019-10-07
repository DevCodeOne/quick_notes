#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->ui->mainedit->setDocument(&currentTextDocument);

    connect(ui->mainedit, &QTextEdit::textChanged, this,
            &MainWindow::textChanged);
    connect(ui->mainedit->document(), &QTextDocument::contentsChange, this,
            &MainWindow::contentsChange);
    std::cout << (void *) ui->mainedit->document() << std::endl;
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::textChanged() {}

void MainWindow::contentsChange(int position, int charsRemoved, int charsAdded) {
    std::cout << "Position" << position << " removed : " << charsRemoved << " added : " << charsAdded << std::endl;
}
