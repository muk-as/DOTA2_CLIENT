#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
    // static metadata: MNetworkVarNames "PlayerID_t m_unPlayerID"
    // static metadata: MNetworkVarNames "int m_unAbilityPlayerSlot"
    #pragma pack(push, 1)
    class CDOTA_AbilityDraftAbilityState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::AbilityID_t m_nAbilityID; // 0x30        
        // metadata: MNetworkEnable
        client::PlayerID_t m_unPlayerID; // 0x34        
        // metadata: MNetworkEnable
        int32_t m_unAbilityPlayerSlot; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_AbilityDraftAbilityState, m_nAbilityID) == 0x30);
    static_assert(offsetof(CDOTA_AbilityDraftAbilityState, m_unPlayerID) == 0x34);
    static_assert(offsetof(CDOTA_AbilityDraftAbilityState, m_unAbilityPlayerSlot) == 0x38);
    
    static_assert(sizeof(CDOTA_AbilityDraftAbilityState) == 0x40);
};
