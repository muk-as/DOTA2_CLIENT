#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Royale_With_Cheese : public client::CDOTA_Buff
    {
    public:
        float shield; // 0x1708        
        float regen; // 0x170c        
        float idle; // 0x1710        
        int32_t m_nDamageAbsorbed; // 0x1714        
        entity2::GameTime_t m_timeLastTick; // 0x1718        
        entity2::GameTime_t m_timeLastDamage; // 0x171c        
        client::ParticleIndex_t nFXIndex; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Royale_With_Cheese because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Royale_With_Cheese) == 0x1728);
};
