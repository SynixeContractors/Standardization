// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX s
#define PREFIX synixe_standardization
#define SUBPREFIX addons

#include "script_version.hpp"

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.06

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Synixe Standardization - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Synixe Standardization - COMPONENT)
#endif
