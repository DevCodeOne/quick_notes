#pragma once

#include <QTextEdit>

class MainEditor : public QTextEdit {
    Q_OBJECT

    public:
        explicit MainEditor(QWidget *parent = nullptr);
        virtual ~MainEditor() = default;

    protected:

        virtual void keyPressEvent(QKeyEvent *event) override;
        virtual void keyReleaseEvent(QKeyEvent *event) override;
};
