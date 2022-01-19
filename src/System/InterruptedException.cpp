// Copyright (c) 2011-2016 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "InterruptedException.h"

#if defined (_WIN32) || defined (_WIN64)
namespace {
char suppressMSVCWarningLNK4221;
}
#endif
