#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Creep_Neutral : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        CUtlString m_sDisplayName; // 0x1808        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creep_Neutral because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Creep_Neutral) == 0x1810);
};
