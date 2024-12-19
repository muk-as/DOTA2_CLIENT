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
    // Size: 0x1880
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "bool m_bIsCurrentlyChanneling"
    // static metadata: MNetworkVarNames "float m_flChannelCycle"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Creature : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsCurrentlyChanneling; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x1879[0x3]; // 0x1879
        // metadata: MNetworkEnable
        float m_flChannelCycle; // 0x187c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creature because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Creature) == 0x1880);
};
