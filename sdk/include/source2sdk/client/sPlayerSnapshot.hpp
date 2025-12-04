#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sPlayerSnapshot
        {
        public:
            source2sdk::client::AbilityID_t m_nItemAbilityID[11]; // 0x_            
            float m_fGameTime; // 0x_            
            std::uint8_t unKills; // 0x_            
            std::uint8_t unDeaths; // 0x_            
            std::uint8_t unAssists; // 0x_            
            std::uint8_t unLevel; // 0x_            
            std::uint32_t unLastHits; // 0x_            
            std::uint32_t unDenies; // 0x_            
            std::uint8_t unFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, m_nItemAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, m_fGameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unKills) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unDeaths) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unAssists) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unLastHits) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unDenies) == 0x_);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sPlayerSnapshot) == 0x_);
    };
};
