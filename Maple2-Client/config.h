#pragma once
#include <string>

namespace config {
  extern bool DisableNXL;
  extern bool BypassNGS;

  extern std::string WindowName;
  extern std::string Locale;
  extern std::string HostName;
  extern unsigned short Port;

  extern bool BypassBanWord;
  extern bool EnableMultiClient;

  // Packet Hooks
  extern bool HookOutPacket;
  extern bool HookInPacket;

  bool Load(const std::string& path);
}
