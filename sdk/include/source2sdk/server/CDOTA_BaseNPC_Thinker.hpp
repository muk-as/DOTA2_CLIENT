#pragma once
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Thinker : public server::CDOTA_BaseNPC
    {
    public:
        bool m_bSendToAllPlayers; // 0x1810        
        bool m_bSendToClients; // 0x1811        
        [[maybe_unused]] std::uint8_t pad_0x1812[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Thinker) == 0x1818);
};
