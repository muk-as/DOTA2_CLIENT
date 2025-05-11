#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flDistance; // 0x17f8            
            float m_flSpeed; // 0x17fc            
            std::int32_t m_nNumCannons; // 0x1800            
            float m_flProjectileRadius; // 0x1804            
            std::int32_t m_hGhostShipProjectile; // 0x1808            
            std::int32_t m_nVolleyNumber; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons) == 0x1810);
    };
};
