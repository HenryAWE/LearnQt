#include <QApplication>
#include <QMainWindow>

namespace awe
{
class main_window : public QMainWindow
{
public:
    explicit main_window(QWidget* parent = nullptr)
        : QMainWindow(parent)
    {
        this->setWindowTitle("LearnQt Main Window");
    }
};
} // namespace awe

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    awe::main_window window;
    window.show();
    return app.exec();
}
