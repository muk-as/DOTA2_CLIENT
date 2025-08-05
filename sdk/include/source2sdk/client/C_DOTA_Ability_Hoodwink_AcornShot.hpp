#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Hoodwink_AcornShot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAcornTreePlanted"
            std::uint32_t m_nAcornTree; // 0x688            
            float projectile_speed; // 0x68c            
            float bounce_delay; // 0x690            
            float bounce_range; // 0x694            
            std::int32_t bounce_count; // 0x698            
            bool m_bIsAltCastState; // 0x69c            
            uint8_t _pad069d[0x3]; // 0x69d
            std::int32_t can_bounce_off_of_trees; // 0x6a0            
            std::int32_t bounces_after_tree_bounce; // 0x6a4            
            bool bBouncedOffTree; // 0x6a8            
            uint8_t _pad06a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Hoodwink_AcornShot) == 0x6b0);
    };
};
