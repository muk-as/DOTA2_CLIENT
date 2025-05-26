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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Pangolier_Swashbuckle : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            float dash_speed; // 0x5d0            
            float start_radius; // 0x5d4            
            float end_radius; // 0x5d8            
            float range; // 0x5dc            
            float damage; // 0x5e0            
            float attack_damage; // 0x5e4            
            std::int32_t procs_onhit_effects; // 0x5e8            
            Vector m_vDashPosition; // 0x5ec            
            Vector m_vFacePosition; // 0x5f8            
            Vector m_vEndpoint; // 0x604            
            Vector m_vSlashDir; // 0x610            
            std::int32_t m_nDashProjectileID; // 0x61c            
            Vector m_vDashProjectileLocation; // 0x620            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Pangolier_Swashbuckle) == 0x630);
    };
};
