#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->ui->mainedit->setDocument(&currentTextDocument);

    connect(ui->mainedit, &QTextEdit::textChanged, this,
            &MainWindow::textChanged);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::textChanged() {}
