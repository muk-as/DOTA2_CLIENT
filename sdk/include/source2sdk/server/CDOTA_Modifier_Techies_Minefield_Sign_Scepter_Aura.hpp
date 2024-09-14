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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x16e8        
        float scepter_move_damage; // 0x16ec        
        float scepter_move_amt; // 0x16f0        
        float minefield_duration; // 0x16f4        
        float m_flMoveAmount; // 0x16f8        
        Vector m_vLastPosition; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura) == 0x1708);
};
