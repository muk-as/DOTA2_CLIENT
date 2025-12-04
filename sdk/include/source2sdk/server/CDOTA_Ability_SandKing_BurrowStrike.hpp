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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_SandKing_BurrowStrike : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float burrow_width; // 0x_            
            std::int32_t burrow_speed; // 0x_            
            float burrow_anim_time; // 0x_            
            bool m_bIsVectorTargeted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vEndpoint; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_SandKing_BurrowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_SandKing_BurrowStrike) == 0x_);
    };
};
