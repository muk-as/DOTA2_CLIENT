#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CLogicCollisionPair : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_nameAttach1; // 0x4e0        
        CUtlSymbolLarge m_nameAttach2; // 0x4e8        
        bool m_supportMultipleEntitiesWithSameName; // 0x4f0        
        bool m_disabled; // 0x4f1        
        bool m_succeeded; // 0x4f2        
        [[maybe_unused]] std::uint8_t pad_0x4f3[0x5];
        
        // Datamap fields:
        // void InputDisableCollisions; // 0x0
        // CUtlSymbolLarge InputDisableCollisionsWith; // 0x0
        // void InputEnableCollisions; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicCollisionPair because it is not a standard-layout class
    static_assert(sizeof(CLogicCollisionPair) == 0x4f8);
};
