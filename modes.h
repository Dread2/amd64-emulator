#ifndef MODES_H
#define MODES_H

typedef enum {
  LONG_MODE,
  MODE_64BIT,
  COMPATIBILITY_MODE,
  LEGACY_MODE,
} Operating_Mode;

const char* Modes (Operating_Mode type) {
  switch (type) {
    case LONG_MODE: return "LONG_MODE";
    case MODE_64BIT: return "64BIT_MODE";
    case COMPATIBILITY_MODE: return "COMPATIBILITY_MODE";
    case LEGACY_MODE: return "LEGACY_MODE";
  }
}

#endif  
