#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sshmanager.h"
#include "catchupcontrol.h"
#include "logcontrol.h"
#include "memorycontrol.h"
#include "iptablescontrol.h"
#include "diskcontrol.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();

private slots:
void handleCatchup();
void handleLog();
void handleMemory();
void handleIptables();
void handleDisk();

private:
SSHManager *sshManager;
CatchupControl *catchupControl;
LogControl *logControl;
MemoryControl *memoryControl;
IptablesControl *iptablesControl;
DiskControl *diskControl;
};

#endif // MAINWINDOW_H