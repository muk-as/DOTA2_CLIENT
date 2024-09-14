#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Leshrac_Diabolic_Edict : public client::CDOTA_Buff
    {
    public:
        int32_t num_explosions; // 0x16e8        
        float radius; // 0x16ec        
        float m_fExplosions; // 0x16f0        
        float tower_bonus; // 0x16f4        
        int32_t affects_buildings; // 0x16f8        
        int32_t damage; // 0x16fc        
        int32_t targets; // 0x1700        
        int32_t iDamageType; // 0x1704        
        bool m_bTalentActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Diabolic_Edict because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Diabolic_Edict) == 0x1718);
};
