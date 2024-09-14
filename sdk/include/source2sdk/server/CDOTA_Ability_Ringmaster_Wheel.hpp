#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Ringmaster_Wheel : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        int32_t min_range; // 0x5ac        
        float mesmerize_radius; // 0x5b0        
        float knockback_radius; // 0x5b4        
        server::CountdownTimer m_PathTimer; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5d0[0x8]; // 0x5d0
        // m_hPushedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hPushedEntities;
        char m_hPushedEntities[0x18]; // 0x5d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_Wheel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Ringmaster_Wheel) == 0x5f0);
};
