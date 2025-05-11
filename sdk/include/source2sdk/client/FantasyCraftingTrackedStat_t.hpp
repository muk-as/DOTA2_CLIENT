#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFantasyStatType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingTrackedStat_t
        {
        public:
            // metadata: MPropertyDescription "What Stats are we looking for"
            CUtlString m_sStatName; // 0x0            
            // metadata: MPropertyDescription "Is the match about the player, the player's team, or the match?"
            source2sdk::client::EFantasyStatType m_eStatType; // 0x8            
            // metadata: MPropertyDescription "Threshold Stat Value required"
            std::uint32_t m_unThresholdValue; // 0xc            
            // metadata: MPropertyDescription "Is the treshold a min or max?"
            bool m_bThresholdIsMin; // 0x10            
            uint8_t _pad0011[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingTrackedStat_t, m_sStatName) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTrackedStat_t, m_eStatType) == 0x8);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTrackedStat_t, m_unThresholdValue) == 0xc);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTrackedStat_t, m_bThresholdIsMin) == 0x10);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingTrackedStat_t) == 0x18);
    };
};
