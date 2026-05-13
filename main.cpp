#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QWidget window;
    QPushButton button("Click me");
    QLabel label("Hello students!");

    QObject::connect(&button, &QPushButton::clicked, [&label] {
        label.setText("Welcome to Qt Application!");
    });

    QVBoxLayout layout;
    layout.addWidget(&label);
    layout.addWidget(&button);

    window.setLayout(&layout);
    window.show();

    return QApplication::exec();
}
