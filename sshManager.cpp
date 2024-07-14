#include "sshmanager.h"
#include <QProcess>

SSHManager::SSHManager(QObject *parent) : QObject(parent) {}

void SSHManager::connectToValidator() {
// Implement SSH connection logic here
}

void SSHManager::executeCommand(const QString &command) {
QProcess process;
process.start("ssh user@validator " + command);
process.waitForFinished();
emit commandOutput(process.readAllStandardOutput());
}