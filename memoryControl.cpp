#include "memorycontrol.h"

MemoryControl::MemoryControl(QObject *parent) : QObject(parent), sshManager(new SSHManager(this)) {}

void MemoryControl::performMemoryCheck() {
sshManager->executeCommand("free -h");
}