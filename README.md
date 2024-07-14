# visualCheck for validator

This application is a C++ and Qt-based graphical interface to manage an SSH connection with a Solana validator. It provides various controls to monitor and manage the validator, including catchup control, log control, memory usage, iptables drops, and disk usage.

## Features

•  [**Catchup Control**] Check the catchup status of the Solana validator.

•  [**Log Control**] View the latest logs from the validator.

•  [**Memory Control**]: Monitor the memory usage of the validator.

•  [**Iptables Control**]: Check for drops in iptables.

•  [**Disk Control**]: Monitor the disk usage of the validator.


## Installation

1. Clone the repository

1. 
Install Qt:
Follow the instructions on the Qt website to install Qt on your system.
2. 
Build the application:

qmake
make

Usage
1. 
Run the application:

./solana-validator-ssh-manager

1. 
Connect to the validator:
•  The application will prompt you to enter the SSH credentials for the Solana validator.
2. 
Use the controls:
•  Catchup Control: Click the "Catchup" button to check the catchup status.

•  Log Control: Click the "Log" button to view the latest logs.

•  Memory Control: Click the "Memory" button to monitor memory usage.

•  Iptables Control: Click the "Iptables" button to check iptables drops.

•  Disk Control: Click the "Disks" button to monitor disk usage.

Project Structure
•  main.cpp: Entry point of the application.

•  mainwindow.h / mainwindow.cpp: Main window of the application.

•  sshmanager.h / sshmanager.cpp: Manages the SSH connection.

•  catchupcontrol.h / catchupcontrol.cpp: Handles catchup control.

•  logcontrol.h / logcontrol.cpp: Handles log control.

•  memorycontrol.h / memorycontrol.cpp: Handles memory control.

•  iptablescontrol.h / iptablescontrol.cpp: Handles iptables control.

•  diskcontrol.h / diskcontrol.cpp: Handles disk control.

Acknowledgements
•  Qt for the GUI framework.

•  Solana for the blockchain platform.
