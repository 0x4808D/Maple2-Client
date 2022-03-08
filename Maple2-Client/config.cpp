#include "config.h"

namespace config {
  std::string WindowName;
  std::string HostName;
  unsigned short Port;

  bool EnableChatSpam;
  bool DisableSwearFilter;
  bool EnableMultiClient;
  bool DisableNXL;
  bool BypassNGS;

  bool Load(const std::string& path) {
    WindowName = "Maple2";
    HostName = "127.0.0.1";
    Port = 20001;

    EnableChatSpam = false;
    DisableSwearFilter = true;
    EnableMultiClient = true;
    DisableNXL = true;
    BypassNGS = true;

    return true;
  }
}