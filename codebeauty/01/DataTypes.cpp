#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QFont>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <sstream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <limits>

int main(int argc, char *argv[])
{
    /*
        Command to run:
        You mmust have installed qt headers and added them to include path
        commands: (linux)
        cmake -S . -B build && cmake --build build && ./build/DataTypes
    */
    QApplication app(argc, argv);
    QMainWindow window;
    window.setWindowTitle("Data Type Information");
    window.setStyleSheet("QMainWindow { background-color: #1e1e1e; }");

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);

    oss << "<html><body style='font-family: Courier; color: #e0e0e0; background-color: #1e1e1e; padding: 15px;'>";
    oss << "<h2 style='color: #00d4ff; text-align: center;'>DATA TYPE INFORMATION</h2>";

    oss << "<h3 style='color: #00ff88; margin-top: 20px;'>INTEGER TYPES</h3>";
    oss << "<table style='border-collapse: collapse; width: 100%;'>";
    oss << "<tr style='background-color: #2d2d2d;'><td style='padding: 8px; color: #ffaa00;'>char</td><td>" << sizeof(char) << " bytes</td><td>[" << (int)CHAR_MIN << " to " << (int)CHAR_MAX << "]</td></tr>";
    oss << "<tr style='background-color: #1e1e1e;'><td style='padding: 8px; color: #ffaa00;'>short</td><td>" << sizeof(short) << " bytes</td><td>[" << SHRT_MIN << " to " << SHRT_MAX << "]</td></tr>";
    oss << "<tr style='background-color: #2d2d2d;'><td style='padding: 8px; color: #ffaa00;'>int</td><td>" << sizeof(int) << " bytes</td><td>[" << INT_MIN << " to " << INT_MAX << "]</td></tr>";
    oss << "<tr style='background-color: #1e1e1e;'><td style='padding: 8px; color: #ffaa00;'>long</td><td>" << sizeof(long) << " bytes</td><td>[" << LONG_MIN << " to " << LONG_MAX << "]</td></tr>";
    oss << "<tr style='background-color: #2d2d2d;'><td style='padding: 8px; color: #ffaa00;'>long long</td><td>" << sizeof(long long) << " bytes</td><td>[" << LLONG_MIN << " to " << LLONG_MAX << "]</td></tr>";
    oss << "</table>";

    oss << "<h3 style='color: #ff6b9d; margin-top: 20px;'>FLOATING POINT TYPES</h3>";
    oss << "<table style='border-collapse: collapse; width: 100%;'>";
    oss << "<tr style='background-color: #2d2d2d;'><td style='padding: 8px; color: #ffaa00;'>float</td><td>" << sizeof(float) << " bytes</td></tr>";
    oss << "<tr style='background-color: #1e1e1e;'><td style='padding: 8px; color: #ffaa00;'>double</td><td>" << sizeof(double) << " bytes</td></tr>";
    oss << "<tr style='background-color: #2d2d2d;'><td style='padding: 8px; color: #ffaa00;'>long double</td><td>" << sizeof(long double) << " bytes</td></tr>";
    oss << "</table>";

    oss << "<h3 style='color: #a78bfa; margin-top: 20px;'>BOOLEAN & POINTER</h3>";
    oss << "<p style='color: #ffaa00;'>bool: <span style='color: #00ff88;'>" << sizeof(bool) << " bytes</span></p>";
    oss << "<p style='color: #ffaa00;'>void*: <span style='color: #00ff88;'>" << sizeof(void *) << " bytes</span></p>";
    oss << "</body></html>";

    QTextEdit *textEdit = new QTextEdit();
    textEdit->setHtml(QString::fromStdString(oss.str()));
    textEdit->setReadOnly(true);
    textEdit->setStyleSheet("QTextEdit { background-color: #1e1e1e; border: 2px solid #00d4ff; border-radius: 8px; padding: 15px; }");

    auto *effect = new QGraphicsOpacityEffect();
    effect->setOpacity(0.9);
    textEdit->setGraphicsEffect(effect);

    auto *animation = new QPropertyAnimation(effect, "opacity");
    animation->setDuration(2000);
    animation->setStartValue(0.7);
    animation->setEndValue(1.0);
    animation->setLoopCount(-1);
    animation->start();

    window.setCentralWidget(textEdit);
    window.resize(800, 600);
    window.show();

    return app.exec();
}
