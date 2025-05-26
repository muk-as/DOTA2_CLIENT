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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x350
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTA_ModifierManager
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            bool m_bCompactBuffListPending; // 0x28            
            uint8_t _pad0029[0x313]; // 0x29
            std::uint16_t m_nHasTruesightForTeam; // 0x33c            
            std::uint16_t m_nHasTruesightForTeamValid; // 0x33e            
            std::uint16_t m_nProvidesFOWPositionForTeam; // 0x340            
            std::uint16_t m_nProvidesFOWPositionForTeamValid; // 0x342            
            std::int32_t m_iBuffIndex; // 0x344            
            std::int32_t m_iLockRefCount; // 0x348            
            uint8_t _pad034c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_bCompactBuffListPending) == 0x28);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nHasTruesightForTeam) == 0x33c);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nHasTruesightForTeamValid) == 0x33e);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeam) == 0x340);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeamValid) == 0x342);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_iBuffIndex) == 0x344);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_iLockRefCount) == 0x348);
        
        static_assert(sizeof(source2sdk::server::CDOTA_ModifierManager) == 0x350);
    };
};
