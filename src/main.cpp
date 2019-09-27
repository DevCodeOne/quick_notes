#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication quickNotes(argc, argv);
    MainWindow main_window;
    main_window.show();

    return quickNotes.exec();
}
