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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Hoodwink_AcornShot : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAcornTreePlanted"
        uint32_t m_nAcornTree; // 0x5d8        
        float projectile_speed; // 0x5dc        
        float bounce_delay; // 0x5e0        
        float bounce_range; // 0x5e4        
        int32_t bounce_count; // 0x5e8        
        bool m_bIsAltCastState; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3]; // 0x5ed
        int32_t can_bounce_off_of_trees; // 0x5f0        
        int32_t bounces_after_tree_bounce; // 0x5f4        
        bool bBouncedOffTree; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Hoodwink_AcornShot) == 0x600);
};
