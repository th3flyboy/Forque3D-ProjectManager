#include "PlatformCheck.h"
#include <QtGlobal>

#if defined(Q_OS_WIN32)
   bool PlatformCheck::mWin = true;
   bool PlatformCheck::mMac = false;
   bool PlatformCheck::mLinux = false;
#elif defined(Q_OS_MAC)
   bool PlatformCheck::mMac = true;
   bool PlatformCheck::mWin = false;
   bool PlatformCheck::mLinux = false;
#elif defined(Q_OS_LINUX)
   bool PlatformCheck::mLinux = true;
   bool PlatformCheck::mWin = false;
   bool PlatformCheck::mMac = false;
#endif
