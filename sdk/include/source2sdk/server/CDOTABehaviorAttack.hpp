#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xb8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorAttack
        {
        public:
            uint8_t _pad0000[0x60]; // 0x0
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x60            
            uint8_t _pad0064[0x24]; // 0x64
            source2sdk::server::CountdownTimer m_backSwingTimer; // 0x88            
            bool m_bCastAttack; // 0xa0            
            uint8_t _pad00a1[0x3]; // 0xa1
            float m_flBackswingTime; // 0xa4            
            float m_flAnimSpeed; // 0xa8            
            uint8_t _pad00ac[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttack, m_hTarget) == 0x60);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttack, m_backSwingTimer) == 0x88);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttack, m_bCastAttack) == 0xa0);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttack, m_flBackswingTime) == 0xa4);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttack, m_flAnimSpeed) == 0xa8);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorAttack) == 0xb8);
    };
};
