#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pangolier_Swashbuckle : public client::CDOTA_Buff
    {
    public:
        int32_t m_nStrikesLeft; // 0x1708        
        float attack_interval; // 0x170c        
        Vector m_vSpawnPos; // 0x1710        
        Vector m_vStrikeDir; // 0x171c        
        Vector m_vDashDir; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Swashbuckle because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pangolier_Swashbuckle) == 0x1738);
};
