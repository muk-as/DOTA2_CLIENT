#pragma once
#include "source2sdk/server/CDOTA_NPC_Observer_Ward.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1828
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_NPC_Observer_Ward_TrueSight : public server::CDOTA_NPC_Observer_Ward
    {
    public:
        float m_flTrueSight; // 0x1820        
        CEntityHandle m_hAbilityEntity; // 0x1824        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward_TrueSight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_Observer_Ward_TrueSight) == 0x1828);
};
