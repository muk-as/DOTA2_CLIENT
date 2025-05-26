#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a08
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Creep_Talking : public source2sdk::client::C_DOTA_BaseNPC_Creep
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Creep_Talking) == 0x1a08);
    };
};
