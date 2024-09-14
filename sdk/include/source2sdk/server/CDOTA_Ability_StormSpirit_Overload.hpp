#pragma once
#include "source2sdk/client/sGlaiveInfoStorm.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_StormSpirit_Overload : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iAttackIndex; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        // m_GlaiveInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sGlaiveInfoStorm> m_GlaiveInfo;
        char m_GlaiveInfo[0x18]; // 0x5a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_StormSpirit_Overload because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_StormSpirit_Overload) == 0x5c0);
};
