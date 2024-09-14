#pragma once
#include "source2sdk/animgraphlib/CStateActionUpdater.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"
#include "source2sdk/modellib/AnimStateID.hpp"
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
    // Standard-layout class: true
    // Size: 0x48
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateUpdateData
    {
    public:
        CUtlString m_name; // 0x0        
        modellib::AnimScriptHandle m_hScript; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_transitionIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_transitionIndices;
        char m_transitionIndices[0x18]; // 0x10        
        // m_actions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CStateActionUpdater> m_actions;
        char m_actions[0x18]; // 0x28        
        modellib::AnimStateID m_stateID; // 0x40        
        // start of bitfield block at 0x44
        uint8_t m_bIsStartState: 1;
        uint8_t m_bIsEndState: 1;
        uint8_t m_bIsPassthrough: 1;
        // end of bitfield block // 3 bits
        [[maybe_unused]] std::uint8_t pad_0x45[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CStateUpdateData, m_name) == 0x0);
    static_assert(offsetof(CStateUpdateData, m_hScript) == 0x8);
    static_assert(offsetof(CStateUpdateData, m_transitionIndices) == 0x10);
    static_assert(offsetof(CStateUpdateData, m_actions) == 0x28);
    static_assert(offsetof(CStateUpdateData, m_stateID) == 0x40);
    // Cannot assert offset of bitfield CStateUpdateData::m_bIsStartState
    // Cannot assert offset of bitfield CStateUpdateData::m_bIsEndState
    // Cannot assert offset of bitfield CStateUpdateData::m_bIsPassthrough
    
    static_assert(sizeof(CStateUpdateData) == 0x48);
};
