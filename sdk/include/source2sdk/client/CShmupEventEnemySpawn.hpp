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
        class CShmupEventEnemySpawn
        {
        public:
            CUtlString m_strEnemyName; // 0x_            
            bool m_bRed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_strEnemyName) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_bRed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventEnemySpawn, m_vOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupEventEnemySpawn) == 0x_);
    };
};
