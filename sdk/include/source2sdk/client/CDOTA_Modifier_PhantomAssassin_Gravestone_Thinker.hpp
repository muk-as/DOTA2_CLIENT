#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_nEpitaph; // 0x1708        
        client::PlayerID_t m_nVictimPlayerID; // 0x170c        
        int32_t m_nVictimHeroID; // 0x1710        
        int32_t m_nCritDmg; // 0x1714        
        int32_t m_nContractComplete; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker) == 0x1720);
};
