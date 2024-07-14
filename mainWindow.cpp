#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent),
sshManager(new SSHManager(this)),
catchupControl(new CatchupControl(this)),
logControl(new LogControl(this)),
memoryControl(new MemoryControl(this)),
iptablesControl(new IptablesControl(this)),
diskControl(new DiskControl(this)) {

QVBoxLayout *layout = new QVBoxLayout;

QPushButton *catchupButton = new QPushButton("Catchup", this);
QPushButton *logButton = new QPushButton("Log", this);
QPushButton *memoryButton = new QPushButton("Memory", this);
QPushButton *iptablesButton = new QPushButton("Iptables", this);
QPushButton *diskButton = new QPushButton("Disks", this);

layout->addWidget(catchupButton);
layout->addWidget(logButton);
layout->addWidget(memoryButton);
layout->addWidget(iptablesButton);
layout->addWidget(diskButton);

QWidget *centralWidget = new QWidget(this);
centralWidget->setLayout(layout);
setCentralWidget(centralWidget);

connect(catchupButton, &QPushButton::clicked, this, &MainWindow::handleCatchup);
connect(logButton, &QPushButton::clicked, this, &MainWindow::handleLog);
connect(memoryButton, &QPushButton::clicked, this, &MainWindow::handleMemory);
connect(iptablesButton, &QPushButton::clicked, this, &MainWindow::handleIptables);
connect(diskButton, &QPushButton::clicked, this, &MainWindow::handleDisk);
}

MainWindow::~MainWindow() {
delete sshManager;
delete catchupControl;
delete logControl;
delete memoryControl;
delete iptablesControl;
delete diskControl;
}

void MainWindow::handleCatchup() {
catchupControl->performCatchupCheck();
}

void MainWindow::handleLog() {
logControl->performLogCheck();
}

void MainWindow::handleMemory() {
memoryControl->performMemoryCheck();
}

void MainWindow::handleIptables() {
iptablesControl->performIptablesCheck();
}

void MainWindow::handleDisk() {
diskControl->performDiskCheck();
}