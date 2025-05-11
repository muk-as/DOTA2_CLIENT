#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Axe_One_Man_Army : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x5b0            
            float bonus_linger_duration; // 0x5b4            
            source2sdk::entity2::GameTime_t m_startDecayTime; // 0x5b8            
            uint8_t _pad05bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Axe_One_Man_Army because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Axe_One_Man_Army) == 0x5c0);
    };
};
