#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>

class MainWindow : public QWidget {
public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent) {
        // Set up MySQL connection (reuse code snippet)

        // Create GUI components
        QLabel *titleLabel = new QLabel("Bank System");
        QPushButton *addBalanceButton = new QPushButton("Add Balance");
        QPushButton *transferButton = new QPushButton("Transfer");
        QLineEdit *balanceLineEdit = new QLineEdit;
        QLineEdit *transferAmountLineEdit = new QLineEdit;
        QLineEdit *senderIDLineEdit = new QLineEdit;
        QLineEdit *receiverIDLineEdit = new QLineEdit;

        // Layout
        QGridLayout *layout = new QGridLayout;
        layout->addWidget(titleLabel, 0, 0, 1, 2);
        layout->addWidget(addBalanceButton, 1, 0);
        layout->addWidget(transferButton, 1, 1);
        layout->addWidget(new QLabel("Balance:"), 2, 0);
        layout->addWidget(balanceLineEdit, 2, 1);
        layout->addWidget(new QLabel("Transfer Amount:"), 3, 0);
        layout->addWidget(transferAmountLineEdit, 3, 1);
        layout->addWidget(new QLabel("Sender ID:"), 4, 0);
        layout->addWidget(senderIDLineEdit, 4, 1);
        layout->addWidget(new QLabel("Receiver ID:"), 5, 0);
        layout->addWidget(receiverIDLineEdit, 5, 1);

        setLayout(layout);

        // Connect signals and slots
        connect(addBalanceButton, &QPushButton::clicked, this, &MainWindow::addBalance);
        connect(transferButton, &QPushButton::clicked, this, &MainWindow::transferBalance);
    }

private slots:
    void addBalance() {
        // Implement logic to add balance
    }

    void transferBalance() {
        // Implement logic to transfer balance
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.setWindowTitle("Bank System");
    window.show();
    return app.exec();
}

