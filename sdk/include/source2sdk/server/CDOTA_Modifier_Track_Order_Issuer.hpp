#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Track_Order_Issuer : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x17f8            
            bool m_bTeamFirstCourier; // 0x17fc            
            uint8_t _pad17fd[0x3]; // 0x17fd
            source2sdk::entity2::GameTime_t m_nPlayerCommandTime[24]; // 0x1800            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Track_Order_Issuer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Track_Order_Issuer) == 0x1860);
    };
};
