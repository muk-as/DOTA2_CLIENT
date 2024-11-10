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
    class CDOTA_Modifier_Leshrac_Diabolic_Edict : public client::CDOTA_Buff
    {
    public:
        int32_t num_explosions; // 0x1708        
        float radius; // 0x170c        
        float m_fExplosions; // 0x1710        
        float tower_bonus; // 0x1714        
        int32_t affects_buildings; // 0x1718        
        int32_t damage; // 0x171c        
        int32_t targets; // 0x1720        
        int32_t iDamageType; // 0x1724        
        bool m_bTalentActive; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Diabolic_Edict because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Diabolic_Edict) == 0x1738);
};
