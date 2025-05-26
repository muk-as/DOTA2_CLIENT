#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Fort : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad19a8[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Fort) == 0x19b0);
    };
};
