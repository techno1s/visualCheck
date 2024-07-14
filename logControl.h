#ifndef LOGCONTROL_H
#define LOGCONTROL_H

#include <QObject>
#include "sshmanager.h"

class LogControl : public QObject {
Q_OBJECT

public:
explicit LogControl(QObject *parent = nullptr);
void performLogCheck();

private:
SSHManager *sshManager;
};

#endif // LOGCONTROL_H