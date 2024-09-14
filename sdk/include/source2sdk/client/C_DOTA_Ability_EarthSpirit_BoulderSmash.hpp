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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_EarthSpirit_BoulderSmash : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x5d8        
        int32_t rock_damage; // 0x5dc        
        float creep_multiplier; // 0x5e0        
        int32_t radius; // 0x5e4        
        int32_t rock_search_aoe; // 0x5e8        
        float unit_distance; // 0x5ec        
        float rock_distance; // 0x5f0        
        int32_t m_nProjectileID; // 0x5f4        
        // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCursorTarget;
        char m_hCursorTarget[0x4]; // 0x5f8        
        bool m_bUsedStone; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3]; // 0x5fd
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x600        
        bool m_bTargetStone; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_BoulderSmash because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_EarthSpirit_BoulderSmash) == 0x608);
};
