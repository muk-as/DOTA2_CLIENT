#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "HeroID_t m_nHeroID"
        // static metadata: MNetworkVarNames "PlayerID_t m_unPlayerID"
        #pragma pack(push, 1)
        class CDOTA_AbilityDraftHeroState
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nHeroID; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_unPlayerID; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_AbilityDraftHeroState, m_nHeroID) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTA_AbilityDraftHeroState, m_unPlayerID) == 0x34);
        
        static_assert(sizeof(source2sdk::client::CDOTA_AbilityDraftHeroState) == 0x38);
    };
};
