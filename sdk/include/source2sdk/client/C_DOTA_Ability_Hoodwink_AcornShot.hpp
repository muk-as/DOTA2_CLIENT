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
        // Size: 0x6a8
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
            std::uint32_t m_nAcornTree; // 0x680            
            float projectile_speed; // 0x684            
            float bounce_delay; // 0x688            
            float bounce_range; // 0x68c            
            std::int32_t bounce_count; // 0x690            
            bool m_bIsAltCastState; // 0x694            
            uint8_t _pad0695[0x3]; // 0x695
            std::int32_t can_bounce_off_of_trees; // 0x698            
            std::int32_t bounces_after_tree_bounce; // 0x69c            
            bool bBouncedOffTree; // 0x6a0            
            uint8_t _pad06a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Hoodwink_AcornShot) == 0x6a8);
    };
};
