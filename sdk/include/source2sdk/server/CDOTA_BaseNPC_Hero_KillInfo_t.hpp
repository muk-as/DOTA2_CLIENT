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
        struct CDOTA_BaseNPC_Hero_KillInfo_t
        {
        public:
            CUtlSymbolLarge m_victimname; // 0x_            
            CUtlSymbolLarge m_inflictorname; // 0x_            
            bool m_bEnemyInFOW; // 0x_            
            bool m_bWasFirstBlood; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iKillCount; // 0x_            
            float m_flBlinkTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_victimname) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_inflictorname) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_bEnemyInFOW) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_bWasFirstBlood) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_iKillCount) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_flBlinkTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t) == 0x_);
    };
};
