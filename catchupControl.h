#ifndef CATCHUPCONTROL_H
#define CATCHUPCONTROL_H

#include <QObject>
#include "sshmanager.h"

class CatchupControl : public QObject {
Q_OBJECT

public:
explicit CatchupControl(QObject *parent = nullptr);
void performCatchupCheck();

private:
SSHManager *sshManager;
};

#endif // CATCHUPCONTROL_H