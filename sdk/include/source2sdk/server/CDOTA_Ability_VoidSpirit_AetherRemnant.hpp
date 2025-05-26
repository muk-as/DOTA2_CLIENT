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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_AetherRemnant : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float start_radius; // 0x5c0            
            float end_radius; // 0x5c4            
            float remnant_watch_distance; // 0x5c8            
            float projectile_speed; // 0x5cc            
            uint8_t _pad05d0[0x14]; // 0x5d0
            Vector m_vDashPosition; // 0x5e4            
            Vector m_vFacePosition; // 0x5f0            
            Vector m_vEndpoint; // 0x5fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AetherRemnant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_VoidSpirit_AetherRemnant) == 0x608);
    };
};
