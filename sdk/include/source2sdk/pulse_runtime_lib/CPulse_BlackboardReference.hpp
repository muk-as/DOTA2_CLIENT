#pragma once
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIPulseGraphDef.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_BlackboardReference
    {
    public:
        // m_hBlackboardResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIPulseGraphDef>> m_hBlackboardResource;
        char m_hBlackboardResource[0xe0]; // 0x0        
        CUtlSymbolLarge m_BlackboardResource; // 0xe0        
        pulse_runtime_lib::PulseDocNodeID_t m_nNodeID; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4]; // 0xec
        CGlobalSymbol m_NodeName; // 0xf0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_BlackboardReference, m_hBlackboardResource) == 0x0);
    static_assert(offsetof(CPulse_BlackboardReference, m_BlackboardResource) == 0xe0);
    static_assert(offsetof(CPulse_BlackboardReference, m_nNodeID) == 0xe8);
    static_assert(offsetof(CPulse_BlackboardReference, m_NodeName) == 0xf0);
    
    static_assert(sizeof(CPulse_BlackboardReference) == 0xf8);
};
