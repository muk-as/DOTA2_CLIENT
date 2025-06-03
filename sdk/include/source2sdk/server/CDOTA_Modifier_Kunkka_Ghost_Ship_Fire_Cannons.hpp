#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flDistance; // 0x1878            
            float m_flSpeed; // 0x187c            
            std::int32_t m_nNumCannons; // 0x1880            
            float m_flProjectileRadius; // 0x1884            
            std::int32_t m_hGhostShipProjectile; // 0x1888            
            std::int32_t m_nVolleyNumber; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Ghost_Ship_Fire_Cannons) == 0x1890);
    };
};
