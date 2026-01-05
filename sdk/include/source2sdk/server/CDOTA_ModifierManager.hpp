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
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTA_ModifierManager
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCompactBuffListPending; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint16_t m_nHasTruesightForTeam; // 0x_            
            std::uint16_t m_nHasTruesightForTeamValid; // 0x_            
            std::uint16_t m_nProvidesFOWPositionForTeam; // 0x_            
            std::uint16_t m_nProvidesFOWPositionForTeamValid; // 0x_            
            std::int32_t m_iBuffIndex; // 0x_            
            std::int32_t m_iLockRefCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_bCompactBuffListPending) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nHasTruesightForTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nHasTruesightForTeamValid) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeamValid) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_iBuffIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ModifierManager, m_iLockRefCount) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_ModifierManager) == 0x_);
    };
};
