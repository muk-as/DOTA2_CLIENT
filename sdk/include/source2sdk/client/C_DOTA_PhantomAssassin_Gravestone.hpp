#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_PhantomAssassin_Gravestone : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        client::PlayerID_t m_nVictimPlayerID; // 0x1800        
        [[maybe_unused]] std::uint8_t pad_0x1804[0xa4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_PhantomAssassin_Gravestone because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_PhantomAssassin_Gravestone) == 0x18a8);
};
