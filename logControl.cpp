#include "logcontrol.h"

LogControl::LogControl(QObject *parent) : QObject(parent), sshManager(new SSHManager(this)) {}

void LogControl::performLogCheck() {
sshManager->executeCommand("tail -n 100 /var/log/solana.log");
}