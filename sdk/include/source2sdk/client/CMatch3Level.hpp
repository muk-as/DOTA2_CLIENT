#pragma once
#include "source2sdk/client/EMatch3LevelFlags.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMatch3Level
    {
    public:
        CUtlString m_sLevelName; // 0x0        
        CUtlString m_sOpponentName; // 0x8        
        int32_t m_nCompletionScore; // 0x10        
        client::EMatch3LevelFlags m_eLevelFlags; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatch3Level, m_sLevelName) == 0x0);
    static_assert(offsetof(CMatch3Level, m_sOpponentName) == 0x8);
    static_assert(offsetof(CMatch3Level, m_nCompletionScore) == 0x10);
    static_assert(offsetof(CMatch3Level, m_eLevelFlags) == 0x14);
    
    static_assert(sizeof(CMatch3Level) == 0x18);
};
