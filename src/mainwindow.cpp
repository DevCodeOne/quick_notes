#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    this->ui->textEdit->setDocument(&currentTextDocument);

    connect(ui->textEdit, &QTextEdit::textChanged, this,
            &MainWindow::textChanged);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::textChanged() {}
