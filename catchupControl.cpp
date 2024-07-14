#include "catchupcontrol.h"

CatchupControl::CatchupControl(QObject *parent) : QObject(parent), sshManager(new SSHManager(this)) {}

void CatchupControl::performCatchupCheck() {
sshManager->executeCommand("solana catchup");
}