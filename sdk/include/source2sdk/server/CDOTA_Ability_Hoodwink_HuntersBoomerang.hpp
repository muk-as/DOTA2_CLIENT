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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Hoodwink_HuntersBoomerang : public server::CDOTABaseAbility
    {
    public:
        int32_t radius; // 0x5a0        
        int32_t speed; // 0x5a4        
        int32_t damage; // 0x5a8        
        float mark_duration; // 0x5ac        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4]; // 0x5b4
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5d0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_HuntersBoomerang because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Hoodwink_HuntersBoomerang) == 0x5d8);
};
