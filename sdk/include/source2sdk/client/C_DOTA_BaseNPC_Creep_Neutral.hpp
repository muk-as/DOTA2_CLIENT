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
        // Size: 0x17e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Creep_Neutral : public source2sdk::client::C_DOTA_BaseNPC_Creep
        {
        public:
            CUtlString m_sDisplayName; // 0x17e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creep_Neutral because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Creep_Neutral) == 0x17e8);
    };
};
