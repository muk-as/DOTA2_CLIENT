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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
    #pragma pack(push, 1)
    class CDOTA_Ability_Hoodwink_AcornShot : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x28]; // 0x5c8
        // metadata: MNetworkEnable
        uint32_t m_nAcornTree; // 0x5f0        
        float projectile_speed; // 0x5f4        
        float bounce_delay; // 0x5f8        
        float bounce_range; // 0x5fc        
        int32_t bounce_count; // 0x600        
        bool m_bIsAltCastState; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3]; // 0x605
        int32_t can_bounce_off_of_trees; // 0x608        
        int32_t bounces_after_tree_bounce; // 0x60c        
        bool bBouncedOffTree; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Hoodwink_AcornShot) == 0x618);
};
