#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    class CDOTA_PhantomAssassin_Gravestone : public server::CDOTA_BaseNPC_Additive
    {
    public:
        client::PlayerID_t m_nVictimPlayerID; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1814[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_PhantomAssassin_Gravestone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_PhantomAssassin_Gravestone) == 0x1818);
};
