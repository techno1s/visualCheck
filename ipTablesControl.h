#ifndef IPTABLESCONTROL_H
#define IPTABLESCONTROL_H

#include <QObject>
#include "sshmanager.h"

class IptablesControl : public QObject {
Q_OBJECT

public:
explicit IptablesControl(QObject *parent = nullptr);
void performIptablesCheck();

private:
SSHManager *sshManager;
};

#endif // IPTABLESCONTROL_H