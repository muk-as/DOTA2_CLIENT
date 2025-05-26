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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Clinkz_Burning_Army : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t range; // 0x5c0            
            Vector m_vEndpoint; // 0x5c4            
            Vector m_vSlashDir; // 0x5d0            
            std::int32_t m_nDashProjectileID; // 0x5dc            
            Vector m_vDashProjectileLocation; // 0x5e0            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Clinkz_Burning_Army because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Clinkz_Burning_Army) == 0x5f0);
    };
};
