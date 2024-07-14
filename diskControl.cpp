#include "diskcontrol.h"

DiskControl::DiskControl(QObject *parent) : QObject(parent), sshManager(new SSHManager(this)) {}

void DiskControl::performDiskCheck() {
sshManager->executeCommand("df -h");
}