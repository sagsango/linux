# Points
Lets rewrite whole kernel code by our own.
It will take years to do that
we will replace it layer by layer
we can start with replacing systems call one by one


# system info
ss@pc:~/linux-kernel-lab$ qemu-system-x86_64  -v
qemu-system-x86_64: -v: invalid option
ss@pc:~/linux-kernel-lab$ qemu-system-x86_64  -version
QEMU emulator version 10.2.1 (Debian 1:10.2.1+ds-1ubuntu3.1)
Copyright (c) 2003-2025 Fabrice Bellard and the QEMU Project developers
ss@pc:~/linux-kernel-lab$ cat /etc/os-release 
PRETTY_NAME="Ubuntu 26.04 LTS"
NAME="Ubuntu"
VERSION_ID="26.04"
VERSION="26.04 (Resolute Raccoon)"
VERSION_CODENAME=resolute
ID=ubuntu
ID_LIKE=debian
HOME_URL="https://www.ubuntu.com/"
SUPPORT_URL="https://help.ubuntu.com/"
BUG_REPORT_URL="https://bugs.launchpad.net/ubuntu/"
PRIVACY_POLICY_URL="https://www.ubuntu.com/legal/terms-and-policies/privacy-policy"
UBUNTU_CODENAME=resolute
LOGO=ubuntu-logo
ss@pc:~/linux-kernel-lab$ 
