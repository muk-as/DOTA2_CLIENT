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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupEventEnemySpawn
        {
        public:
            CUtlString m_strEnemyName; // 0x0            
            bool m_bRed; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            Vector m_vOffset; // 0xc            
            uint8_t _pad0018[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_strEnemyName) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_bRed) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_vOffset) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CShmupEventEnemySpawn) == 0x20);
    };
};
