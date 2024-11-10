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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Ringmaster_Wheel : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5c8        
        int32_t min_range; // 0x5d4        
        float mesmerize_radius; // 0x5d8        
        float knockback_radius; // 0x5dc        
        server::CountdownTimer m_PathTimer; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5f8[0x8]; // 0x5f8
        // m_hPushedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hPushedEntities;
        char m_hPushedEntities[0x18]; // 0x600        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_Wheel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Ringmaster_Wheel) == 0x618);
};
