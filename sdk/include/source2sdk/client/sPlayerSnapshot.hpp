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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x34
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sPlayerSnapshot
        {
        public:
            source2sdk::client::AbilityID_t m_nItemAbilityID[11]; // 0x0            
            float m_fGameTime; // 0x2c            
            std::uint8_t unKills; // 0x30            
            std::uint8_t unDeaths; // 0x31            
            std::uint8_t unAssists; // 0x32            
            std::uint8_t unLevel; // 0x33            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, m_nItemAbilityID) == 0x0);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, m_fGameTime) == 0x2c);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unKills) == 0x30);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unDeaths) == 0x31);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unAssists) == 0x32);
        static_assert(offsetof(source2sdk::client::sPlayerSnapshot, unLevel) == 0x33);
        
        static_assert(sizeof(source2sdk::client::sPlayerSnapshot) == 0x34);
    };
};
