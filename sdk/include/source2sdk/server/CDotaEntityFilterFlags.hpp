#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDotaEntityFilterFlags
        {
        public:
            bool m_bInvertFilter; // 0x_            
            bool m_bEveryUnit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nTeamNumber; // 0x_            
            CUtlSymbolLarge m_UnitName; // 0x_            
            bool m_bIsAncient; // 0x_            
            bool m_bIsNeutralUnitType; // 0x_            
            bool m_bIsSummoned; // 0x_            
            bool m_bIsHero; // 0x_            
            bool m_bIsRealHero; // 0x_            
            bool m_bIsTower; // 0x_            
            bool m_bIsPhantom; // 0x_            
            bool m_bIsIllusion; // 0x_            
            bool m_bIsCreep; // 0x_            
            bool m_bIsLaneCreep; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bInvertFilter) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bEveryUnit) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_nTeamNumber) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_UnitName) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsAncient) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsNeutralUnitType) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsSummoned) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsHero) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsRealHero) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsTower) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsPhantom) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsIllusion) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsCreep) == 0x_);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsLaneCreep) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDotaEntityFilterFlags) == 0x_);
    };
};
