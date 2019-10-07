#include <QMainWindow>
#include <QTextDocument>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        virtual ~MainWindow();
    
    private:
        Ui::MainWindow *ui;
        QTextDocument currentTextDocument;
    
    private slots:
        void textChanged();
        void contentsChange(int position, int charsRemoved, int charsAdded);
};
