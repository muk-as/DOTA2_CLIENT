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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_EarthSpirit_BoulderSmash : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5c8        
        int32_t rock_damage; // 0x5cc        
        float creep_multiplier; // 0x5d0        
        int32_t radius; // 0x5d4        
        int32_t rock_search_aoe; // 0x5d8        
        float unit_distance; // 0x5dc        
        float rock_distance; // 0x5e0        
        int32_t m_nProjectileID; // 0x5e4        
        // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCursorTarget;
        char m_hCursorTarget[0x4]; // 0x5e8        
        bool m_bUsedStone; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3]; // 0x5ed
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5f0        
        bool m_bTargetStone; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_BoulderSmash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EarthSpirit_BoulderSmash) == 0x5f8);
};
