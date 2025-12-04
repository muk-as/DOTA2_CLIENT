#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_unPlayerID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_unAbilityPlayerSlot; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_AbilityDraftAbilityState, m_nAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AbilityDraftAbilityState, m_unPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AbilityDraftAbilityState, m_unAbilityPlayerSlot) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_AbilityDraftAbilityState) == 0x_);
    };
};
