#ifndef MEMORYCONTROL_H
#define MEMORYCONTROL_H

#include <QObject>
#include "sshmanager.h"

class MemoryControl : public QObject {
Q_OBJECT

public:
explicit MemoryControl(QObject *parent = nullptr);
void performMemoryCheck();

private:
SSHManager *sshManager;
};

#endif // MEMORYCONTROL_H