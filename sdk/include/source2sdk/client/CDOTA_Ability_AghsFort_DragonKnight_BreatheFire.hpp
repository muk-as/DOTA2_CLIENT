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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_DragonKnight_BreatheFire : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t start_radius; // 0x680            
            std::int32_t end_radius; // 0x684            
            Vector m_vStartPos; // 0x688            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x694            
            float m_fTotalTime; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_DragonKnight_BreatheFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_DragonKnight_BreatheFire) == 0x6a0);
    };
};
