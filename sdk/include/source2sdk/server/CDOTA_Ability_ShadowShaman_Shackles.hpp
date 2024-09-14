#pragma once
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
    class CBaseEntity;
};

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
    // 
    // static metadata: MNetworkVarNames "float m_flLongestShackleDuration"
    #pragma pack(push, 1)
    class CDOTA_Ability_ShadowShaman_Shackles : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flLongestShackleDuration; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        // m_Victims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_Victims;
        char m_Victims[0x18]; // 0x5a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_ShadowShaman_Shackles because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_ShadowShaman_Shackles) == 0x5c0);
};
