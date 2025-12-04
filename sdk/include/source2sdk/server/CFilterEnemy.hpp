#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterEnemy : public source2sdk::server::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iszEnemyName; // 0x_            
            float m_flRadius; // 0x_            
            float m_flOuterRadius; // 0x_            
            std::int32_t m_nMaxSquadmatesPerEnemy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszPlayerName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterEnemy) == 0x_);
    };
};
