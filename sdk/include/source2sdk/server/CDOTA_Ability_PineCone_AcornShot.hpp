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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
        #pragma pack(push, 1)
        class CDOTA_Ability_PineCone_AcornShot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x28]; // 0x5b8
            // metadata: MNetworkEnable
            std::uint32_t m_nAcornTree; // 0x5e0            
            float projectile_speed; // 0x5e4            
            float bounce_delay; // 0x5e8            
            std::int32_t bounce_range; // 0x5ec            
            std::int32_t bounce_count; // 0x5f0            
            uint8_t _pad05f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_PineCone_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_PineCone_AcornShot) == 0x5f8);
    };
};
