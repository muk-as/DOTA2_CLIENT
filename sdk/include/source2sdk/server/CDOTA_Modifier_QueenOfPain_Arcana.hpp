#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_QueenOfPain_Arcana : public client::CDOTA_Buff
    {
    public:
        // m_vecHitPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::PlayerID_t,bool> m_vecHitPlayers;
        char m_vecHitPlayers[0x28]; // 0x16e8        
        // m_vecKilledPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::PlayerID_t,bool> m_vecKilledPlayers;
        char m_vecKilledPlayers[0x28]; // 0x1710        
        entity2::GameTime_t m_flLastSonicWaveCast; // 0x1738        
        bool m_bSpeechComplete; // 0x173c        
        bool m_bMessageComplete; // 0x173d        
        bool m_bIsMeleeAttack; // 0x173e        
        [[maybe_unused]] std::uint8_t pad_0x173f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_Arcana because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_QueenOfPain_Arcana) == 0x1740);
};
