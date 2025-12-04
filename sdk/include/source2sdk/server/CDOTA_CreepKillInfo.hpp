#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_CreepKillInfo
        {
        public:
            source2sdk::entity2::GameTime_t m_flTimeOfDeath; // 0x_            
            float m_flDeathFlightDuration; // 0x_            
            Vector m_vWsKillDirection; // 0x_            
            Vector m_vWsKillOrigin; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_CreepKillInfo, m_flTimeOfDeath) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_CreepKillInfo, m_flDeathFlightDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_CreepKillInfo, m_vWsKillDirection) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_CreepKillInfo, m_vWsKillOrigin) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_CreepKillInfo) == 0x_);
    };
};
