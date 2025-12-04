#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupBossPhase
        {
        public:
            CUtlString m_strName; // 0x_            
            float m_flChargeTime; // 0x_            
            float m_flDuration; // 0x_            
            Vector2D m_vPosition; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBossPhase, m_strName) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossPhase, m_flChargeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossPhase, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossPhase, m_vPosition) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupBossPhase) == 0x_);
    };
};
