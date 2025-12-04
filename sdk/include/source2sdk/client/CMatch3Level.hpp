#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMatch3LevelFlags.hpp"

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
        #pragma pack(push, 1)
        class CMatch3Level
        {
        public:
            CUtlString m_sLevelName; // 0x_            
            CUtlString m_sOpponentName; // 0x_            
            std::int32_t m_nCompletionScore; // 0x_            
            source2sdk::client::EMatch3LevelFlags m_eLevelFlags; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3Level, m_sLevelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3Level, m_sOpponentName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3Level, m_nCompletionScore) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3Level, m_eLevelFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3Level) == 0x_);
    };
};
