#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float formation_time; // 0x_            
            float m_flInitialZ; // 0x_            
            float m_flFinalZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCaughtOne; // 0x_            
            bool m_bKilledOne; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecVisionBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecVisionBlockers;
            char m_vecVisionBlockers[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_ArenaOfBlood_Thinker) == 0x_);
    };
};
