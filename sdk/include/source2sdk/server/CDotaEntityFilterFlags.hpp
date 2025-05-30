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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDotaEntityFilterFlags
        {
        public:
            bool m_bInvertFilter; // 0x0            
            bool m_bEveryUnit; // 0x1            
            uint8_t _pad0002[0x2]; // 0x2
            std::int32_t m_nTeamNumber; // 0x4            
            CUtlSymbolLarge m_UnitName; // 0x8            
            bool m_bIsAncient; // 0x10            
            bool m_bIsNeutralUnitType; // 0x11            
            bool m_bIsSummoned; // 0x12            
            bool m_bIsHero; // 0x13            
            bool m_bIsRealHero; // 0x14            
            bool m_bIsTower; // 0x15            
            bool m_bIsPhantom; // 0x16            
            bool m_bIsIllusion; // 0x17            
            bool m_bIsCreep; // 0x18            
            bool m_bIsLaneCreep; // 0x19            
            uint8_t _pad001a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bInvertFilter) == 0x0);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bEveryUnit) == 0x1);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_nTeamNumber) == 0x4);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_UnitName) == 0x8);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsAncient) == 0x10);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsNeutralUnitType) == 0x11);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsSummoned) == 0x12);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsHero) == 0x13);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsRealHero) == 0x14);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsTower) == 0x15);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsPhantom) == 0x16);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsIllusion) == 0x17);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsCreep) == 0x18);
        static_assert(offsetof(source2sdk::server::CDotaEntityFilterFlags, m_bIsLaneCreep) == 0x19);
        
        static_assert(sizeof(source2sdk::server::CDotaEntityFilterFlags) == 0x20);
    };
};
