#include "io_index.h"

namespace sunaba::core::io {
    std::map<sol::state_view, IoManager*> IoIndex::ioManagers;
}