#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Winter_Wyvern_Arctic_Burn : public client::C_DOTABaseAbility
    {
    public:
        // m_BurnedTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_BurnedTargets;
        char m_BurnedTargets[0x18]; // 0x5d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Winter_Wyvern_Arctic_Burn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Winter_Wyvern_Arctic_Burn) == 0x5f0);
};
