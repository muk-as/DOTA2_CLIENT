#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_DragonKnight_BreatheFire : public client::C_DOTABaseAbility
    {
    public:
        int32_t start_radius; // 0x600        
        int32_t end_radius; // 0x604        
        Vector m_vStartPos; // 0x608        
        entity2::GameTime_t m_fStartTime; // 0x614        
        float m_fTotalTime; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_DragonKnight_BreatheFire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_DragonKnight_BreatheFire) == 0x620);
};
