#ifndef DISKCONTROL_H
#define DISKCONTROL_H

#include <QObject>
#include "sshmanager.h"

class DiskControl : public QObject {
Q_OBJECT

public:
explicit DiskControl(QObject *parent = nullptr);
void performDiskCheck();

private:
SSHManager *sshManager;
};

#endif // DISKCONTROL_H