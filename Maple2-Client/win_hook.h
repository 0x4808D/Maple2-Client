#pragma once
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers

#include <Windows.h>

#define MUTLI_MUTEX		"Global\\0E139E89-A290-4568-9CA5-5868FF94446E" /* Nexon's mutex key for checking MS2 Multi-Client */
#define CLIENT_CLASS    "MapleStory2 - A New Beginning" /* The class name of the main MapleStory2 window */

namespace win {
  BOOL Hook();
}
