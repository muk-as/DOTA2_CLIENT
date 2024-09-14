#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"
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
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimScriptComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        modellib::AnimScriptHandle m_hScript; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimScriptComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CAnimScriptComponentUpdater) == 0x38);
};
