#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
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
    // Size: 0x60
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCPPScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        // metadata: MPropertyFriendlyName "Scripts"
        // m_scriptsToRun has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_scriptsToRun;
        char m_scriptsToRun[0x18]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x48[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCPPScriptComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CCPPScriptComponentUpdater) == 0x60);
};
