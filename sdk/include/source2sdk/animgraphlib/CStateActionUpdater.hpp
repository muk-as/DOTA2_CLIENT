#pragma once
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/StateActionBehavior.hpp"
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
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateActionUpdater
    {
    public:
        // m_pAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CAnimActionUpdater> m_pAction;
        char m_pAction[0x8]; // 0x0        
        animgraphlib::StateActionBehavior m_eBehavior; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CStateActionUpdater, m_pAction) == 0x0);
    static_assert(offsetof(CStateActionUpdater, m_eBehavior) == 0x8);
    
    static_assert(sizeof(CStateActionUpdater) == 0x10);
};
