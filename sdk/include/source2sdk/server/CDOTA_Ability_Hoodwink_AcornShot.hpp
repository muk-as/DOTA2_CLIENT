#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
        #pragma pack(push, 1)
        class CDOTA_Ability_Hoodwink_AcornShot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x28]; // 0x5c0
            // metadata: MNetworkEnable
            std::uint32_t m_nAcornTree; // 0x5e8            
            float projectile_speed; // 0x5ec            
            float bounce_delay; // 0x5f0            
            float bounce_range; // 0x5f4            
            std::int32_t bounce_count; // 0x5f8            
            bool m_bIsAltCastState; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            std::int32_t can_bounce_off_of_trees; // 0x600            
            std::int32_t bounces_after_tree_bounce; // 0x604            
            bool bBouncedOffTree; // 0x608            
            uint8_t _pad0609[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Hoodwink_AcornShot) == 0x610);
    };
};
