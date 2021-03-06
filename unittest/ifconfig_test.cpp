#include <stdio.h>

#include "ifconfig.h"

int main() {
    std::vector<ifconfig_t> ifcs;
    ifconfig(ifcs);
    for (auto& item : ifcs) {
        printf("%s\nip: %s\nmask: %s\nmac: %s\n\n",
                item.name,
                item.ip,
                item.mask,
                item.mac);
    }
    return 0;
}
