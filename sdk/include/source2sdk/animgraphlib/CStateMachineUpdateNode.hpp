#pragma once
#include "source2sdk/animgraphlib/CAnimStateMachineUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CStateNodeStateData.hpp"
#include "source2sdk/animgraphlib/CStateNodeTransitionData.hpp"
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
    // Size: 0xf8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateMachineUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x10]; // 0x58
        animgraphlib::CAnimStateMachineUpdater m_stateMachine; // 0x68        
        // m_stateData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CStateNodeStateData> m_stateData;
        char m_stateData[0x18]; // 0xc0        
        // m_transitionData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CStateNodeTransitionData> m_transitionData;
        char m_transitionData[0x18]; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xf0[0x4]; // 0xf0
        bool m_bBlockWaningTags; // 0xf4        
        bool m_bLockStateWhenWaning; // 0xf5        
        [[maybe_unused]] std::uint8_t pad_0xf6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStateMachineUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CStateMachineUpdateNode) == 0xf8);
};
