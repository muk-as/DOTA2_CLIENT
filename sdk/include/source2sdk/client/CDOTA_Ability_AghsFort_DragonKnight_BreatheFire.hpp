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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_DragonKnight_BreatheFire : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t start_radius; // 0x688            
            std::int32_t end_radius; // 0x68c            
            Vector m_vStartPos; // 0x690            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x69c            
            float m_fTotalTime; // 0x6a0            
            uint8_t _pad06a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_DragonKnight_BreatheFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_DragonKnight_BreatheFire) == 0x6a8);
    };
};
