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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Track_Order_Issuer : public client::CDOTA_Buff
    {
    public:
        client::PlayerID_t m_nIssuerPlayerIndex; // 0x1708        
        bool m_bTeamFirstCourier; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        entity2::GameTime_t m_nPlayerCommandTime[24]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Track_Order_Issuer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Track_Order_Issuer) == 0x1770);
};
