#include "iptablescontrol.h"

IptablesControl::IptablesControl(QObject *parent) : QObject(parent), sshManager(new SSHManager(this)) {}

void IptablesControl::performIptablesCheck() {
sshManager->executeCommand("sudo iptables -L -v -n");
}