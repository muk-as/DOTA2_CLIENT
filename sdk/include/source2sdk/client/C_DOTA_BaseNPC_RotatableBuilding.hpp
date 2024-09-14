#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
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
    // Size: 0x1808
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_RotatableBuilding : public client::C_DOTA_BaseNPC
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_hHeroStatueSequence"
        animationsystem::HSequence m_hObsoleteHeroStatueSequence; // 0x1800        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_hConstantLayerSequence"
        animationsystem::HSequence m_hObsoleteConstantLayerSequence; // 0x1804        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_RotatableBuilding because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_RotatableBuilding) == 0x1808);
};
