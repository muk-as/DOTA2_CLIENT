#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimStateMachineUpdater.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateMachineComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        animgraphlib::CAnimStateMachineUpdater m_stateMachine; // 0x30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStateMachineComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CStateMachineComponentUpdater) == 0x88);
};
